/*
 * WorldMap.h
 *
 *      Author: Andreas Volz
 */

#ifndef WORLDMAP_H_
#define WORLDMAP_H_

// C++
#include <cstring>
#include <cstdint>
#include <cstdlib>
#include <vector>
#include <string>

#define SC_IsUnitMineral(x) ((x) == 176 || (x) == 177 || (x) == 178)  /// sc unit mineral
#define SC_UnitGeyser	    188	    /// sc unit geyser
#define SC_TerranSCV	    7	    /// terran scv
#define SC_ZergDrone	    41	    /// zerg drone
#define SC_ProtossProbe	    64	    /// protoss probe
#define SC_TerranCommandCenter	106 /// terran command center
#define SC_ZergHatchery	    131	    /// zerg hatchery
#define SC_ProtossNexus	    154	    /// protoss nexus
#define SC_StartLocation	214	    /// sc start location

#define PlayerMax 16

#define SettingsPresetMapDefault  -1  /// Special: Use map supplied
#define SettingsNumUnitsMapDefault  SettingsPresetMapDefault
#define SettingsNumUnits1    0

class Unit
{
public:
  Unit() :
    X(0),
    Y(0),
    Type(0),
    Properties(0),
    ValidElements(0),
    Player(0),
    HitPointsPercent(0),
    ShieldPointsPercent(0),
    EnergyPointsPercent(0),
    ResourceAmount(0),
    NumUnitsIn(0),
    StateFlags(0)
  {

  }

  ~Unit()
  {

  }


  unsigned short X;
  unsigned short Y;
  unsigned short Type;
  unsigned short Properties;
  unsigned short ValidElements;
  unsigned char Player;
  unsigned char HitPointsPercent;
  unsigned char ShieldPointsPercent;
  unsigned char EnergyPointsPercent;
  unsigned int ResourceAmount;
  unsigned short NumUnitsIn;
  unsigned char StateFlags;
};

typedef struct Location
{
  unsigned int StartX;
  unsigned int StartY;
  unsigned int EndX;
  unsigned int EndY;
  unsigned short StringNumber;
  unsigned short Flags;
} Location;

typedef struct TriggerCondition
{
  unsigned int Location;
  unsigned int Group;
  unsigned int QualifiedNumber;
  unsigned short UnitType;
  unsigned char CompType;
  unsigned char Condition;
  unsigned char ResType;
  unsigned char Flags;
} TriggerCondition;

typedef struct TriggerAction
{
  unsigned int Source;
  unsigned int TriggerNumber;
  unsigned int WavNumber;
  unsigned int Time;
  unsigned int FirstGroup;
  unsigned int SecondGroup;
  unsigned short Status;
  unsigned char Action;
  unsigned char NumUnits;
  unsigned char ActionFlags;
} TriggerAction;

typedef struct Trigger
{
  TriggerCondition TriggerConditions[16];
  TriggerAction TriggerActions[64];
} Trigger;

typedef struct WorldMap
{
  int MapWidth;
  int MapHeight;
  char *MapTerrainName;
  char *Description;
  int PlayerRace[PlayerMax];
  int PlayerType[PlayerMax];
  int *Tiles;
  struct
  {
    int X;
    int Y;
  } PlayerStart[PlayerMax];
  std::vector<Location> Locations;
  std::vector<Trigger> Triggers;
  std::vector<Unit> Units;
  std::vector<std::string> Strings;

  WorldMap() :
      MapWidth(0), MapHeight(0), MapTerrainName(NULL), Description(NULL), Tiles(
          NULL)
  {
    memset(PlayerRace, 0, sizeof(PlayerRace));
    memset(PlayerType, 0, sizeof(PlayerType));
    memset(PlayerStart, 0, sizeof(PlayerStart));
  }
} WorldMap;

#endif /* WORLDMAP_H_ */
