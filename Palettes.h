/*
 * Palettes.h
 *
 *      Author: Andreas Volz
 */

#ifndef PALETTES_H_
#define PALETTES_H_


// TODO: unextern this -> ugly !!
extern unsigned char SC_Unit_Palette[];
extern unsigned char Terrain_Palette[];
extern unsigned char Cmdicons_Palette[];
extern unsigned char Orange_Palette[];
extern unsigned char *Palettes[];


class Palettes
{
public:
	Palettes();
	virtual ~Palettes();
};

#endif /* PALETTES_H_ */
