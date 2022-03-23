/*
 * Grp.h
 *
 *      Author: Andreas Volz
 */

#ifndef GRP_H_
#define GRP_H_

// Local
#include "Converter.h"
#include "Palette.h"

// System
#include <string.h>
#include <memory>

/**
 * Put the code for decoding of Gfu and Gfx in Gfu parent as workaround.
 * Reason seems to be a workaround for "Hardcoded support for worker with resource repairing"
 * TODO: Find a better solution and move to to Gfx/Gfu class
 */
class Grp: public Converter
{
public:
  Grp(std::shared_ptr<Hurricane> hurricane);
  Grp(std::shared_ptr<Hurricane> hurricane, const std::string &arcfile);
  Grp(std::shared_ptr<Hurricane> hurricane, const std::string &arcfile,
      std::shared_ptr<Palette> pal);
  virtual ~Grp();

  bool load(const std::string &arcfile);

  bool save(const std::string &filename);

  void setPalette(std::shared_ptr<Palette> pal);

  /**
   *  Convert a Grp graphic to PNG format
   *
   *  @param arcfile File identifier in the MPQ file
   *  @param file Place to save the file on the drive (relative to game dir)
   */
  bool savePNG(const std::string &filename);

protected:
  /**
   **  Convert graphics into image.
   */
  unsigned char* ConvertGraphic(int gfx, unsigned char *bp, int *wp, int *hp,
      unsigned char *bp2, int start2);

  /**
   **  Decode a entry(frame) into image.
   */
  void DecodeGfxEntry(int index, unsigned char *start, unsigned char *image,
      int ix, int iy, int iadd);

  /**
   **  Decode a entry(frame) into image.
   */
  void DecodeGfuEntry(int index, unsigned char *start, unsigned char *image,
      int ix, int iy, int iadd);

  void ConvertPal3(unsigned char *image, int w, int h);

private:
  Logger mLogger;
  std::shared_ptr<Palette> mPal;
  std::string mArcfile;

};

#endif /* GRP_H_ */
