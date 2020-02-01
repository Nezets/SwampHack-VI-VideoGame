#pragma once
#include "Character.h"
class PC : public Character{

	//Level Stats
	int exp;
	int dmgLevel;
	int msLevel;
	int atkSpdLevel;

	//Flags
public:
	PC();


	//Exp Functions
	void expGain(int exp);
	void upgradeLevel(short type);

	int getExp();

	//Level Stuff
	int getDmgLevel();
	int getMsLevel();
	int getAtkSpdLevel();

};

