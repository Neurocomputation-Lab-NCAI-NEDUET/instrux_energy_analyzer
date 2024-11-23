#ifndef Parameters_var_h
#define Parameters_var_h

#include "Arduino.h";

String parameter_names[]=
{
  "vR",    //  0 = VR_phase
  "vY",   //  1 = VY_phase
  "vB",   //  2 = VB_phase
  "cR",   //  3 = IR_phase
  "cY",   //  4 = IY_phase
  "cB",   //  5 = IB_phase
  "rlR",  //  6 = Watts_R_phase
  "rlY",  //  7 = Watts_Y_phase
  "rlB",  //  8 = Watts_B_phase
  "atR",  //  9 = VA_R
  "atY",  // 10 = VA_Y
  "atB",  // 11 = VA_B
  "reR",  // 12 = VAR_R
  "reY",  // 13 = VAR_Y
  "reB",  // 14 = VAR_B
  "pfR",  // 15 = pfR
  "pfY",  // 16 = pfY
  "pfB",  // 17 = pfB
  "vLN",  // 18 = Average line to neutral voltage
  "vLL",  // 19 = Average line to line voltage
  "cT",   // 20 = Total current
  "rlT",  // 21 = Total Watt power
  "atT",  // 22 = Total VA
  "reT",  // 23 = Total VAR
  "f",    // 24 = Frequency
  "mpT",  // 25 = Max watt demand
  "maT",  // 26 = Max VA demand
  "vRY",  // 27 = vRY
  "vYB",  // 28 = vYB
  "vRB",  // 29 = vRB
  "cN",   // 30 = Neutral current
  "tvR",  // 31 = THD Voltage_R
  "tvY",  // 32 = THD Voltage_Y
  "tvB",  // 33 = THD Voltage_B
  "tcR",  // 34 = THD Current_R
  "tcY",  // 35 = THD Current_Y
  "tcB",  // 36 = THD Current_B
  "tvLN", // 37 = THD Average line to neutral volts
  "tcLN", // 38 = THD Avg line current
  "mcR",  // 39 = Maximum Current demand R_phase
  "mcY",  // 40 = Maximum Current demand Y_phase
  "mcB",  // 41 = Maximum Current demand B_phase
  "tvRY", // 42 = THD vRY (fetched till here)
  "tvYB", // 43 = THD vYB
  "tvRB", // 44 = THD vRB
  "tvLL", // 45 = THD Average line to line volts
  "pfA",  // 46 = Average power factor pfA
  "en",   // 47 = Watt_hr
  "eT"    // 48 = Load hours 
  };

#endif
