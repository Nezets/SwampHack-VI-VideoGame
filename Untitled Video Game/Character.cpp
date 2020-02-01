#include "Character.h"

//Constructors
Character::Character() {

	//Position
	curX = 0;
	curY = 0;
	angle = 0;

	//Starting stats
	maxHp = 100;
	curHp = 100;
	damage = 10;
	ms = 10;
	atkSpd = 10;

	//Level Stats
}

int Character::getCurHp()
{
	return curHp;
}

int Character::getMaxHp()
{
	return maxHp;
}

int Character::getMs()
{
	return 0;
}

int Character::getAtkSpd()
{
	return atkSpd;
}

int Character::getDamage()
{
	return damage;
}

int Character::getCurX()
{
	return curX;
}

int Character::getCurY()
{
	return curY;
}

int Character::getAngle()
{
	return angle;
}



//HP Functions
void Character::takeDamage(int dmgTaken) {
	curHp -= dmgTaken;
	if (curHp <= 0) {
		death();
	}
}

void Character::heal(int healthGain) {
	curHp += healthGain;
	if (curHp > maxHp) {
		curHp = maxHp;
	}
}

void Character::updatePosition(int x, int y)
{
	curX = x;
	curY = y;
}

//End Game Functions
void Character::death() {

}