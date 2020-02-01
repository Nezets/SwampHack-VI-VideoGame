#pragma once

#include <SFML/Graphics.hpp>

class Character {
	//Combat Stats
	int maxHp;
	int curHp;
	int damage;
	int ms;
	int atkSpd;

	//Position
	int curX;
	int curY;
	int angle;

	//Flags
	bool alive;

public:
	//Constructors
	Character();

	//Getter Functions
	int getCurHp();
	int getMaxHp();
	int getDamage();
	int getMs();
	int getAtkSpd();

	int getCurX();
	int getCurY();
	int getAngle();

	//HP Functions
	void takeDamage(int dmgTaken);
	void heal(int healthGain);

	//Position Functions
	void updatePosition(int x, int y);

	//End Game Functions
	void death();
};