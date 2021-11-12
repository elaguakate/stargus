/*
 * Pcx.cpp
 *
 *      Author: Andreas Volz
 */

// Local
#include "endian.h"
#include "Pcx.h"
#include "Preferences.h"
#include "Storm.h"
#include "Png.h"
#include "Hurricane.h"

// System
#include <stdlib.h>
#include <string.h>
#include <memory>

using namespace std;

Pcx::Pcx(std::shared_ptr<Hurricane> hurricane) :
	mHurricane (hurricane)
{

}

Pcx::~Pcx()
{

}

// could stay in cpp files as it's private implementation
struct PCXheader
{
	unsigned char Manufacturer;
	unsigned char Version;
	unsigned char Encoding;
	unsigned char BitsPerPixel;
	short Xmin, Ymin, Xmax, Ymax;
	short HDpi, VDpi;
	unsigned char Colormap[48];
	unsigned char Reserved;
	unsigned char NPlanes;
	short BytesPerLine;
	short PaletteInfo;
	short HscreenSize;
	short VscreenSize;
	unsigned char Filler[54];
};

bool Pcx::convert(const std::string &arcfile, const std::string &file)
{
	unsigned char *palp;
	unsigned char *image;
	char buf[1024];
	int w;
	int h;
	bool result = true;

	shared_ptr<DataChunk> data = mHurricane->extractDataChunk(arcfile);
	if (data)
	{
		convertToRawImage(data->getDataPointer(), &image, &palp, &w, &h);
		Preferences &preferences = Preferences::getInstance ();
		sprintf(buf, "%s/%s/%s.png", preferences.getDestDir().c_str(), GRAPHICS_PATH, file.c_str());
		Png::save(buf, image, w, h, palp, 0);

		free(image);
		free(palp);
	}

	return result;
}

void Pcx::convertToRawImage(unsigned char *pcx, unsigned char **raw,
		unsigned char **pal, int *w, int *h)
{
	struct PCXheader pcxh;
	int y;
	int i;
	int count;
	unsigned char *src;
	unsigned char *dest;
	unsigned char ch;

	ch = 0;
	memcpy(&pcxh, pcx, sizeof(struct PCXheader));
	pcxh.Xmin = ConvertLE16(pcxh.Xmin);
	pcxh.Ymin = ConvertLE16(pcxh.Ymin);
	pcxh.Xmax = ConvertLE16(pcxh.Xmax);
	pcxh.Ymax = ConvertLE16(pcxh.Ymax);
	pcxh.BytesPerLine = ConvertLE16(pcxh.BytesPerLine);

	*w = pcxh.Xmax - pcxh.Xmin + 1;
	*h = pcxh.Ymax - pcxh.Ymin + 1;

	*raw = (unsigned char*) malloc(*w * *h);
	src = pcx + sizeof(struct PCXheader);

	for (y = 0; y < *h; ++y)
	{
		count = 0;
		dest = *raw + y * *w;
		for (i = 0; i < *w; ++i)
		{
			if (!count)
			{
				ch = *src++;
				if ((ch & 0xc0) == 0xc0)
				{
					count = ch & 0x3f;
					ch = *src++;
				}
				else
				{
					count = 1;
				}
			}
			dest[i] = ch;
			--count;
		}
	}

	*pal = (unsigned char*) malloc(256 * 3);
	dest = *pal;
	do
	{
		ch = *src++;
	} while (ch != 12);

	for (i = 0; i < 256 * 3; ++i)
	{
		*dest++ = *src++;
	}
}



