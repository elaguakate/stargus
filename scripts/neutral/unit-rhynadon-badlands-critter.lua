DefineAnimations("animations-rhynadon-badlands-critter", {
  Still = {
    "frame 0", "wait 125",
  },
})

DefineUnitType("unit-critter-rhynadon", {
  Shadow = {"file", "neutral/units/rhynadon badlands critter shadow.png", "size", {104, 104}},
  Animations = "animations-rhynadon-badlands-critter", Icon = "icon-rhynadon-badlands-critter",
  NeutralMinimapColor = {0, 228, 252},
  Speed = 0,
  DrawLevel = 5,
  TileSize = {2, 1}, BoxSize = {63, 31},
  SightRange = 0,
  BasicDamage = 0, PiercingDamage = 0, Missile = "missile-none",
  Priority = 0,
  Type = "land",
  LandUnit = true,
  organic = true,
})
