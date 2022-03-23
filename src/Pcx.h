/*
 * Pcx.h
 *
 *      Author: Andreas Volz
 */

#ifndef PCX_H_
#define PCX_H_

// Local
#include "Converter.h"
#include "Logger.h"
#include "Palette.h"

class Pcx: public Converter
{
public:
  Pcx(std::shared_ptr<Hurricane> hurricane);
  Pcx(std::shared_ptr<Hurricane> hurricane, const std::string &arcfile);
  virtual ~Pcx();

  bool load(const std::string &arcfile);

  /**
   *  Convert a pcx graphic to PNG format
   *
   *  @param arcfile File identifier in the MPQ file
   *  @param file Place to save the file on the drive (relative to game dir)
   */
  bool savePNG(const std::string &filename);

  std::shared_ptr<Palette> getPalette();

  /**
   * Take 8*3 palette bytes (rgb) from one place in the palette and copy them into another place
   *
   * @param start where to place the copy in the palette position
   * @param length the length of one color index
   * @param index the color index
   */
  void copyIndexPalette(int start, int length, int index);

  void copy2DPalette(int start, int length, int index);

private:
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

  void extractHeader();

  /**
   *  Convert 8 bit pcx file to raw image
   */
  void extractImage();

  void extractPalette();

  Logger mLogger;
  std::shared_ptr<Palette> mPalette;
  std::shared_ptr<DataChunk> mRawData;
  struct PCXheader pcxh;
  unsigned char *rawImage;
  unsigned char *mImageParserPos;
  int mWidth;
  int mHeight;
  const int RGB_BYTE_SIZE = 3;
  const int RGB_SIZE = 256 * RGB_BYTE_SIZE;
};

#endif /* PCX_H_ */
