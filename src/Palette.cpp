/*
 * Palettes.cpp
 *
 *      Author: Andreas Volz
 */

#include <Palette.h>

// C++
#include <iostream>
#include <fstream>

using namespace std;

Palette::Palette(std::shared_ptr<DataChunk> palData) :
	mLogger("startool.Palette"),
	mPalData(palData)
{

}


Palette::~Palette()
{
}

std::shared_ptr<DataChunk> Palette::getDataChunk()
{
	return mPalData;
}

unsigned char SC_Unit_Palette[]={
0x00,0x00,0x00,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,
0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0xFF,0x00,0xFF,0xDE,0x00,0xDE,0xBD,0x00,
0xBD,0x9C,0x00,0x9C,0x7C,0x00,0x7C,0x5B,0x00,0x5B,0x3A,0x00,0x3A,0x19,0x00,0x19,
0x2C,0x24,0x18,0x48,0x24,0x14,0x5C,0x2C,0x14,0x70,0x30,0x14,0x68,0x3C,0x24,0x7C,
0x40,0x18,0x78,0x4C,0x2C,0xA8,0x08,0x08,0x8C,0x54,0x30,0x84,0x60,0x44,0xA0,0x54,
0x1C,0xC4,0x4C,0x18,0xBC,0x68,0x24,0xB4,0x70,0x3C,0xD0,0x64,0x20,0xDC,0x94,0x34,
0xE0,0x94,0x54,0xEC,0xC4,0x54,0x34,0x44,0x28,0x40,0x6C,0x3C,0x48,0x6C,0x50,0x4C,
0x80,0x50,0x50,0x8C,0x5C,0x5C,0xA0,0x78,0x00,0x00,0x18,0x00,0x10,0x34,0x00,0x08,
0x50,0x24,0x34,0x48,0x30,0x40,0x54,0x14,0x34,0x7C,0x34,0x4C,0x6C,0x40,0x58,0x74,
0x48,0x68,0x8C,0x00,0x70,0x9C,0x58,0x80,0xA4,0x40,0x68,0xD4,0x18,0xAC,0xB8,0x24,
0x24,0xFC,0x64,0x94,0xBC,0x70,0xA8,0xCC,0x8C,0xC0,0xD8,0x94,0xDC,0xF4,0xAC,0xDC,
0xE8,0xAC,0xFC,0xFC,0xCC,0xF8,0xF8,0xFC,0xFC,0x00,0xF4,0xE4,0x90,0xFC,0xFC,0xC0,
0x0C,0x0C,0x0C,0x18,0x14,0x10,0x1C,0x1C,0x20,0x28,0x28,0x30,0x38,0x30,0x24,0x38,
0x3C,0x44,0x4C,0x40,0x30,0x4C,0x4C,0x4C,0x5C,0x50,0x40,0x58,0x58,0x58,0x68,0x68,
0x68,0x78,0x84,0x6C,0x68,0x94,0x6C,0x74,0xA4,0x7C,0x98,0x94,0x8C,0x90,0xB8,0x94,
0x98,0xC4,0xA8,0xB0,0xB0,0xB0,0xAC,0xCC,0xB0,0xC4,0xC0,0xBC,0xCC,0xE0,0xD0,0xF0,
0xF0,0xF0,0x1C,0x10,0x08,0x28,0x18,0x0C,0x34,0x10,0x08,0x34,0x20,0x0C,0x38,0x10,
0x20,0x34,0x28,0x20,0x44,0x34,0x08,0x48,0x30,0x18,0x60,0x00,0x00,0x54,0x28,0x20,
0x50,0x40,0x14,0x5C,0x54,0x14,0x84,0x04,0x04,0x68,0x4C,0x34,0x7C,0x38,0x30,0x70,
0x64,0x20,0x7C,0x50,0x50,0xA4,0x34,0x1C,0x94,0x6C,0x00,0x98,0x5C,0x40,0x8C,0x80,
0x34,0x98,0x74,0x54,0xB8,0x54,0x44,0xB0,0x90,0x18,0xB0,0x74,0x5C,0xF4,0x04,0x04,
0xC8,0x78,0x54,0xFC,0x68,0x54,0xE0,0xA4,0x84,0xFC,0x94,0x68,0xFC,0xCC,0x2C,0x10,
0xFC,0x18,0x0C,0x00,0x20,0x1C,0x1C,0x2C,0x24,0x24,0x4C,0x28,0x2C,0x68,0x2C,0x30,
0x84,0x20,0x18,0xB8,0x34,0x3C,0xAC,0x68,0x68,0x94,0x64,0x90,0xFC,0x7C,0xAC,0xFC,
0x00,0xE4,0xFC,0x9C,0x90,0x40,0xA8,0x94,0x54,0xBC,0xA4,0x5C,0xCC,0xB8,0x60,0xE8,
0xD8,0x80,0xEC,0xC4,0xB0,0xFC,0xFC,0x38,0xFC,0xFC,0x7C,0xFC,0xFC,0xA4,0x08,0x08,
0x08,0x10,0x10,0x10,0x18,0x18,0x18,0x28,0x28,0x28,0x34,0x34,0x34,0x4C,0x3C,0x38,
0x44,0x44,0x44,0x48,0x48,0x58,0x58,0x58,0x68,0x74,0x68,0x38,0x78,0x64,0x5C,0x60,
0x60,0x7C,0x84,0x74,0x74,0x84,0x84,0x9C,0xAC,0x8C,0x7C,0xAC,0x98,0x94,0x90,0x90,
0xB8,0xB8,0xB8,0xE8,0xF8,0x8C,0x14,0x10,0x54,0x3C,0x20,0x90,0x70,0x2C,0xB4,0x94,
0x04,0x20,0x64,0x48,0x1C,0x50,0x08,0x34,0x98,0x68,0x30,0x78,0x88,0x40,0x9C,0x0C,
0x48,0xCC,0xBC,0xB8,0x34,0xDC,0xDC,0x3C,0x10,0x00,0x00,0x24,0x00,0x00,0x34,0x00,
0x00,0x48,0x00,0x00,0x60,0x18,0x04,0x8C,0x28,0x08,0xC8,0x18,0x18,0xE0,0x2C,0x2C,
0xE8,0x20,0x20,0xE8,0x50,0x14,0xFC,0x20,0x20,0xE8,0x78,0x24,0xF8,0xAC,0x3C,0x00,
0x14,0x00,0x00,0x28,0x00,0x00,0x44,0x00,0x00,0x64,0x00,0x08,0x80,0x08,0x24,0x98,
0x24,0x3C,0x9C,0x3C,0x58,0xB0,0x58,0x68,0xB8,0x68,0x80,0xC4,0x80,0x94,0xD4,0x94,
0x0C,0x14,0x24,0x24,0x3C,0x64,0x30,0x50,0x84,0x38,0x5C,0x94,0x48,0x74,0xB4,0x54,
0x84,0xC4,0x60,0x94,0xD4,0x78,0xB4,0xEC,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,
0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,
0xFC,0xFC,0x38,0x10,0xFC,0x18,0xF8,0x8C,0x14,0xC8,0x18,0x18,0x23,0x23,0xFF,0x23,
0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0xFC,0xFC,0x38,0x10,0xFC,0x18,0xF8,0x8C,
0x14,0xC8,0x18,0x18,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,
0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,
0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,
0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,
0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,
0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,
0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0xFF,0xFF,0xFF,
};

unsigned char Terrain_Palette[]={
0x00,0x00,0x00,0x27,0x27,0x3B,0x27,0x27,0x3B,0x2F,0x2F,0x47,0x37,0x3B,0x53,0x2F,
0x33,0x4B,0x2B,0x2B,0x43,0x57,0x5F,0x83,0x63,0x6B,0x93,0x6B,0x77,0xA3,0x53,0x57,
0x77,0x4B,0x4F,0x6F,0x47,0x4B,0x67,0x4F,0x53,0x73,0x3A,0x00,0x3A,0x19,0x00,0x19,
0x2C,0x24,0x18,0x48,0x24,0x14,0x5C,0x2C,0x14,0x70,0x30,0x14,0x68,0x3C,0x24,0x7C,
0x40,0x18,0x78,0x4C,0x2C,0xA8,0x08,0x08,0x8C,0x54,0x30,0x84,0x60,0x44,0xA0,0x54,
0x1C,0xC4,0x4C,0x18,0xBC,0x68,0x24,0xB4,0x70,0x3C,0xD0,0x64,0x20,0xDC,0x94,0x34,
0xE0,0x94,0x54,0xEC,0xC4,0x54,0x34,0x44,0x28,0x40,0x6C,0x3C,0x48,0x6C,0x50,0x4C,
0x80,0x50,0x50,0x8C,0x5C,0x5C,0xA0,0x78,0x00,0x00,0x18,0x00,0x10,0x34,0x00,0x08,
0x50,0x24,0x34,0x48,0x30,0x40,0x54,0x14,0x34,0x7C,0x34,0x4C,0x6C,0x40,0x58,0x74,
0x48,0x68,0x8C,0x00,0x70,0x9C,0x58,0x80,0xA4,0x40,0x68,0xD4,0x18,0xAC,0xB8,0x24,
0x24,0xFC,0x64,0x94,0xBC,0x70,0xA8,0xCC,0x8C,0xC0,0xD8,0x94,0xDC,0xF4,0xAC,0xDC,
0xE8,0xAC,0xFC,0xFC,0xCC,0xF8,0xF8,0xFC,0xFC,0x00,0xF4,0xE4,0x90,0xFC,0xFC,0xC0,
0x0C,0x0C,0x0C,0x18,0x14,0x10,0x1C,0x1C,0x20,0x28,0x28,0x30,0x38,0x30,0x24,0x38,
0x3C,0x44,0x4C,0x40,0x30,0x4C,0x4C,0x4C,0x5C,0x50,0x40,0x58,0x58,0x58,0x68,0x68,
0x68,0x78,0x84,0x6C,0x68,0x94,0x6C,0x74,0xA4,0x7C,0x98,0x94,0x8C,0x90,0xB8,0x94,
0x98,0xC4,0xA8,0xB0,0xB0,0xB0,0xAC,0xCC,0xB0,0xC4,0xC0,0xBC,0xCC,0xE0,0xD0,0xF0,
0xF0,0xF0,0x1C,0x10,0x08,0x28,0x18,0x0C,0x34,0x10,0x08,0x34,0x20,0x0C,0x38,0x10,
0x20,0x34,0x28,0x20,0x44,0x34,0x08,0x48,0x30,0x18,0x60,0x00,0x00,0x54,0x28,0x20,
0x50,0x40,0x14,0x5C,0x54,0x14,0x84,0x04,0x04,0x68,0x4C,0x34,0x7C,0x38,0x30,0x70,
0x64,0x20,0x7C,0x50,0x50,0xA4,0x34,0x1C,0x94,0x6C,0x00,0x98,0x5C,0x40,0x8C,0x80,
0x34,0x98,0x74,0x54,0xB8,0x54,0x44,0xB0,0x90,0x18,0xB0,0x74,0x5C,0xF4,0x04,0x04,
0xC8,0x78,0x54,0xFC,0x68,0x54,0xE0,0xA4,0x84,0xFC,0x94,0x68,0xFC,0xCC,0x2C,0x10,
0xFC,0x18,0x0C,0x00,0x20,0x1C,0x1C,0x2C,0x24,0x24,0x4C,0x28,0x2C,0x68,0x2C,0x30,
0x84,0x20,0x18,0xB8,0x34,0x3C,0xAC,0x68,0x68,0x94,0x64,0x90,0xFC,0x7C,0xAC,0xFC,
0x00,0xE4,0xFC,0x9C,0x90,0x40,0xA8,0x94,0x54,0xBC,0xA4,0x5C,0xCC,0xB8,0x60,0xE8,
0xD8,0x80,0xEC,0xC4,0xB0,0xFC,0xFC,0x38,0xFC,0xFC,0x7C,0xFC,0xFC,0xA4,0x08,0x08,
0x08,0x10,0x10,0x10,0x18,0x18,0x18,0x28,0x28,0x28,0x34,0x34,0x34,0x4C,0x3C,0x38,
0x44,0x44,0x44,0x48,0x48,0x58,0x58,0x58,0x68,0x74,0x68,0x38,0x78,0x64,0x5C,0x60,
0x60,0x7C,0x84,0x74,0x74,0x84,0x84,0x9C,0xAC,0x8C,0x7C,0xAC,0x98,0x94,0x90,0x90,
0xB8,0xB8,0xB8,0xE8,0xF8,0x8C,0x14,0x10,0x54,0x3C,0x20,0x90,0x70,0x2C,0xB4,0x94,
0x04,0x20,0x64,0x48,0x1C,0x50,0x08,0x34,0x98,0x68,0x30,0x78,0x88,0x40,0x9C,0x0C,
0x48,0xCC,0xBC,0xB8,0x34,0xDC,0xDC,0x3C,0x10,0x00,0x00,0x24,0x00,0x00,0x34,0x00,
0x00,0x48,0x00,0x00,0x60,0x18,0x04,0x8C,0x28,0x08,0xC8,0x18,0x18,0xE0,0x2C,0x2C,
0xE8,0x20,0x20,0xE8,0x50,0x14,0xFC,0x20,0x20,0xE8,0x78,0x24,0xF8,0xAC,0x3C,0x00,
0x14,0x00,0x00,0x28,0x00,0x00,0x44,0x00,0x00,0x64,0x00,0x08,0x80,0x08,0x24,0x98,
0x24,0x3C,0x9C,0x3C,0x58,0xB0,0x58,0x68,0xB8,0x68,0x80,0xC4,0x80,0x94,0xD4,0x94,
0x0C,0x14,0x24,0x24,0x3C,0x64,0x30,0x50,0x84,0x38,0x5C,0x94,0x48,0x74,0xB4,0x54,
0x84,0xC4,0x60,0x94,0xD4,0x78,0xB4,0xEC,0x14,0x10,0x08,0x18,0x14,0x0C,0x28,0x30,
0x0C,0x10,0x10,0x18,0x14,0x14,0x20,0x2C,0x2C,0x40,0x44,0x4C,0x68,0x04,0x04,0x04,
0x1C,0x18,0x10,0x20,0x1C,0x14,0x24,0x20,0x1C,0x30,0x28,0x1C,0x40,0x38,0x2C,0x54,
0x48,0x34,0x68,0x5C,0x4C,0x90,0x7C,0x64,0x28,0x20,0x10,0x2C,0x24,0x14,0x34,0x2C,
0x18,0x38,0x2C,0x1C,0x3C,0x30,0x1C,0x40,0x34,0x20,0x44,0x38,0x24,0x50,0x44,0x24,
0x58,0x4C,0x28,0x64,0x58,0x2C,0x0C,0x10,0x04,0x14,0x18,0x04,0x1C,0x20,0x08,0x20,
0x28,0x0C,0x34,0x3C,0x10,0x40,0x48,0x10,0x20,0x20,0x30,0x14,0x14,0x14,0x20,0x18,
0x1C,0x20,0x20,0x20,0x28,0x20,0x18,0x28,0x24,0x24,0x30,0x2C,0x2C,0x3C,0x30,0x38,
0x3C,0x38,0x3C,0x48,0x3C,0x30,0x44,0x34,0x40,0x54,0x40,0x48,0x5C,0x64,0x64,0x6C,
0x74,0x78,0x58,0x4E,0x2F,0x4D,0x43,0x2C,0x4B,0x53,0x6F,0x53,0x5B,0x7B,0x5B,0x63,
0x87,0x47,0x3B,0x2B,0x4B,0x3F,0x2F,0x53,0x43,0x33,0x43,0x4B,0x67,0xFF,0xFF,0xFF,
};

unsigned char Cmdicons_Palette[]={
0x00,0x00,0x00,0xFC,0xFC,0x38,0xE7,0xE9,0x2F,0xFD,0xD1,0x39,0xFC,0xCC,0x2C,0xFC,
0xCC,0x2C,0xBC,0xB8,0x34,0xB0,0x90,0x18,0x8C,0x80,0x34,0x70,0x64,0x20,0x5C,0x54,
0x14,0x50,0x40,0x14,0x34,0x20,0x0C,0x28,0x18,0x0C,0x1C,0x10,0x08,0x19,0x00,0x19,
0x2C,0x24,0x18,0x48,0x24,0x14,0x5C,0x2C,0x14,0x70,0x30,0x14,0x68,0x3C,0x24,0x7C,
0x40,0x18,0x78,0x4C,0x2C,0xA8,0x08,0x08,0x8C,0x54,0x30,0x84,0x60,0x44,0xA0,0x54,
0x1C,0xC4,0x4C,0x18,0xBC,0x68,0x24,0xB4,0x70,0x3C,0xD0,0x64,0x20,0xDC,0x94,0x34,
0xE0,0x94,0x54,0xEC,0xC4,0x54,0x34,0x44,0x28,0x40,0x6C,0x3C,0x48,0x6C,0x50,0x4C,
0x80,0x50,0x50,0x8C,0x5C,0x5C,0xA0,0x78,0x00,0x00,0x18,0x00,0x10,0x34,0x00,0x08,
0x50,0x24,0x34,0x48,0x30,0x40,0x54,0x14,0x34,0x7C,0x34,0x4C,0x6C,0x40,0x58,0x74,
0x48,0x68,0x8C,0x00,0x70,0x9C,0x58,0x80,0xA4,0x40,0x68,0xD4,0x18,0xAC,0xB8,0x24,
0x24,0xFC,0x64,0x94,0xBC,0x70,0xA8,0xCC,0x8C,0xC0,0xD8,0x94,0xDC,0xF4,0xAC,0xDC,
0xE8,0xAC,0xFC,0xFC,0xCC,0xF8,0xF8,0xFC,0xFC,0x00,0xF4,0xE4,0x90,0xFC,0xFC,0xC0,
0x0C,0x0C,0x0C,0x18,0x14,0x10,0x1C,0x1C,0x20,0x28,0x28,0x30,0x38,0x30,0x24,0x38,
0x3C,0x44,0x4C,0x40,0x30,0x4C,0x4C,0x4C,0x5C,0x50,0x40,0x58,0x58,0x58,0x68,0x68,
0x68,0x78,0x84,0x6C,0x68,0x94,0x6C,0x74,0xA4,0x7C,0x98,0x94,0x8C,0x90,0xB8,0x94,
0x98,0xC4,0xA8,0xB0,0xB0,0xB0,0xAC,0xCC,0xB0,0xC4,0xC0,0xBC,0xCC,0xE0,0xD0,0xF0,
0xF0,0xF0,0x1C,0x10,0x08,0x28,0x18,0x0C,0x34,0x10,0x08,0x34,0x20,0x0C,0x38,0x10,
0x20,0x34,0x28,0x20,0x44,0x34,0x08,0x48,0x30,0x18,0x60,0x00,0x00,0x54,0x28,0x20,
0x50,0x40,0x14,0x5C,0x54,0x14,0x84,0x04,0x04,0x68,0x4C,0x34,0x7C,0x38,0x30,0x70,
0x64,0x20,0x7C,0x50,0x50,0xA4,0x34,0x1C,0x94,0x6C,0x00,0x98,0x5C,0x40,0x8C,0x80,
0x34,0x98,0x74,0x54,0xB8,0x54,0x44,0xB0,0x90,0x18,0xB0,0x74,0x5C,0xF4,0x04,0x04,
0xC8,0x78,0x54,0xFC,0x68,0x54,0xE0,0xA4,0x84,0xFC,0x94,0x68,0xFC,0xCC,0x2C,0x10,
0xFC,0x18,0x0C,0x00,0x20,0x1C,0x1C,0x2C,0x24,0x24,0x4C,0x28,0x2C,0x68,0x2C,0x30,
0x84,0x20,0x18,0xB8,0x34,0x3C,0xAC,0x68,0x68,0x94,0x64,0x90,0xFC,0x7C,0xAC,0xFC,
0x00,0xE4,0xFC,0x9C,0x90,0x40,0xA8,0x94,0x54,0xBC,0xA4,0x5C,0xCC,0xB8,0x60,0xE8,
0xD8,0x80,0xEC,0xC4,0xB0,0xFC,0xFC,0x38,0xFC,0xFC,0x7C,0xFC,0xFC,0xA4,0x08,0x08,
0x08,0x10,0x10,0x10,0x18,0x18,0x18,0x28,0x28,0x28,0x34,0x34,0x34,0x4C,0x3C,0x38,
0x44,0x44,0x44,0x48,0x48,0x58,0x58,0x58,0x68,0x74,0x68,0x38,0x78,0x64,0x5C,0x60,
0x60,0x7C,0x84,0x74,0x74,0x84,0x84,0x9C,0xAC,0x8C,0x7C,0xAC,0x98,0x94,0x90,0x90,
0xB8,0xB8,0xB8,0xE8,0xF8,0x8C,0x14,0x10,0x54,0x3C,0x20,0x90,0x70,0x2C,0xB4,0x94,
0x04,0x20,0x64,0x48,0x1C,0x50,0x08,0x34,0x98,0x68,0x30,0x78,0x88,0x40,0x9C,0x0C,
0x48,0xCC,0xBC,0xB8,0x34,0xDC,0xDC,0x3C,0x10,0x00,0x00,0x24,0x00,0x00,0x34,0x00,
0x00,0x48,0x00,0x00,0x60,0x18,0x04,0x8C,0x28,0x08,0xC8,0x18,0x18,0xE0,0x2C,0x2C,
0xE8,0x20,0x20,0xE8,0x50,0x14,0xFC,0x20,0x20,0xE8,0x78,0x24,0xF8,0xAC,0x3C,0x00,
0x14,0x00,0x00,0x28,0x00,0x00,0x44,0x00,0x00,0x64,0x00,0x08,0x80,0x08,0x24,0x98,
0x24,0x3C,0x9C,0x3C,0x58,0xB0,0x58,0x68,0xB8,0x68,0x80,0xC4,0x80,0x94,0xD4,0x94,
0x0C,0x14,0x24,0x24,0x3C,0x64,0x30,0x50,0x84,0x38,0x5C,0x94,0x48,0x74,0xB4,0x54,
0x84,0xC4,0x60,0x94,0xD4,0x78,0xB4,0xEC,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,
0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,
0xFC,0xFC,0x38,0x10,0xFC,0x18,0xF8,0x8C,0x14,0xC8,0x18,0x18,0x23,0x23,0xFF,0x23,
0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0xFC,0xFC,0x38,0x10,0xFC,0x18,0xF8,0x8C,
0x14,0xC8,0x18,0x18,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,
0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,
0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,
0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,
0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,
0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,
0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0x23,0x23,0xFF,0xFF,0xFF,0xFF,
};

unsigned char Orange_Palette[]={
0x00,0x00,0x00,
0x00,0x00,0x00,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x10,0x00,0x00,0x10,
0x00,0x00,0x08,0x08,0x08,0x10,0x00,0x00,0x1C,0x10,0x08,0x24,0x00,0x00,0x34,0x10,
0x08,0x34,0x10,0x08,0x28,0x18,0x0C,0x34,0x10,0x08,0x34,0x10,0x08,0x48,0x24,0x14,
0x60,0x18,0x04,0x60,0x18,0x04,0x48,0x24,0x14,0x54,0x28,0x20,0x70,0x30,0x14,0x70,
0x30,0x14,0x70,0x30,0x14,0x70,0x30,0x14,0x8C,0x28,0x08,0x7C,0x40,0x18,0xA4,0x34,
0x1C,0x7C,0x40,0x18,0x78,0x4C,0x2C,0xA4,0x34,0x1C,0xA0,0x54,0x1C,0xC4,0x4C,0x18,
0xA0,0x54,0x1C,0xC4,0x4C,0x18,0xBC,0x68,0x24,0xD0,0x64,0x20,0xB4,0x70,0x3C,0xBC,
0x68,0x24,0xBC,0x68,0x24,0xDC,0x94,0x34,0xE0,0x94,0x54,0xDC,0x94,0x34,0xF8,0xAC,
0x3C,0xEC,0xC4,0x54,0xF4,0xE4,0x90,0xFC,0xFC,0xC0,0xF0,0xF0,0xF0,0xFF,0xFF,0xFF,
0xCC,0xE0,0xD0,0xB0,0xB0,0xB0,0x98,0x94,0x8C,0x84,0x74,0x74,0x68,0x68,0x68,0x5C,
0x64,0x64,0x58,0x58,0x58,0x4C,0x4C,0x4C,0x44,0x44,0x44,0x34,0x34,0x34,0x30,0x2C,
0x2C,0x20,0x20,0x20,0x18,0x18,0x18,0x0C,0x0C,0x0C,0x04,0x04,0x04,
};

unsigned char *Palettes[] = {
	SC_Unit_Palette,
	Terrain_Palette,
	Cmdicons_Palette,
	Orange_Palette,
};


