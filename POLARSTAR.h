#ifndef POLARSTAR_h
#define POLARSTAR_h

#include "Arduino.h";

const int POLARSTAR[] =
	{
	1012, //  0 = VR_phase
	1014, //  1 = VY_phase
	1016, //  2 = VB_phase
	1024, //  3 = IR_phase
	1026, //  4 = IY_phase
	1028,	//  5 = IB_phase
	1032,	//  6 = Watts_R_phase
	1034,	//  7 = Watts_Y_phase
	1036,	//  8 = Watts_B_phase
	1044,	//  9 = VA_R
	1046,	// 10 = VA_Y
	1048,	// 11 = VA_B
	1038,	// 12 = VAR_R
	1040,	// 13 = VAR_Y
	1042,	// 14 = VAR_B
	1050,	// 15 = pfR
	1052,	// 16 = pfY
	1054,	// 17 = pfB
	1060,	// 18 = Average line to neutral voltage*
	1000,	// 19 = Average line to line voltage
	1002,	// 20 = Total current
	1004,	// 21 = Total Watt power
	1008,	// 22 = Total VA
	1006,	// 23 = Total VAR
	1056,	// 24 = Frequency
	1108,	// 25 = Max watt demand
	1124,	// 26 = Max VA demand
	1018,	// 27 = vRY
	1020,	// 28 = vYB
	1022,	// 29 = vRB
	1030,	// 30 = Neutral current
	1255,	// 31 = THD Voltage_R
	1257,	// 32 = THD Voltage_Y
	1259,	// 33 = THD Voltage_B
	1261,	// 34 = THD Current_R
	1263,	// 35 = THD Current_Y
	1265,	// 36 = THD Current_B
	1251,	// 37 = THD Average line to neutral volts
	1253,	// 38 = THD Avg line current
	1096,	// 39 = Maximum Current demand R_phase
	1098,	// 40 = Maximum Current demand Y_phase
	1100,	// 41 = Maximum Current demand B_phase
	1255,	// 42 = THD vRY
	1257,	// 43 = THD vYB
	1259,	// 44 = THD vRB
	1251,	// 45 = THD Average line to line volts
	1126,	// 46 = Average power factor pfA
	1135	// 47 = Watt_hr
 
//	0xFFFF	// 48 = Load hours
};

#endif
