--
-- unit-zerg-defiler-mound
--


DefineAnimations("animations-zerg-defiler-mound", {
  Still = {
    "frame 1", "wait 2", "frame 2", "wait 2", "frame 1", "wait 2",
    "frame 0", "wait 2",
  },
})


DefineUnitType("unit-zerg-defiler-mound", {
  Shadow = {"file", "zerg/units/defiler mound shadow.png", "size",  {128, 128}},
  Animations = "animations-zerg-defiler-mound", Icon = "icon-zerg-defiler-mound",
  Costs = {"time", 200, "minerals", 100, "gas", 100},
  RepairHp = 4,
  RepairCosts = {"minerals", 1, "gas", 1},
  Construction = "construction-zerg",
  Speed = 0,
  DrawLevel = 30,
  TileSize = {4, 2}, BoxSize = {127, 63},
  SightRange = 4,
  Armor = 20, BasicDamage = 20, PiercingDamage = 5, Missile = "missile-none",
  Priority = 15, AnnoyComputerFactor = 20,
  Points = 170,
  Corpse = "unit-destroyed-3x3-place",
  ExplodeWhenKilled = "missile-terran-explosion-large",
  Type = "land",
  RightMouseAction = "attack",
  RegenerationRate = 1,
  CanAttack = true,
  BuilderLost = true,
  CanTargetLand = true,
  Building = true, VisibleUnderFog = true,
  Sounds = {
    "selected", "zerg-defiler-mound-selected",
    "ready", "zerg-building-ready",
    "help", "zerg-base-attacked",
    "dead", "zerg-building-blowup"} } )
