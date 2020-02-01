#include "Enemy.h"
Enemy::Enemy(short x) {
	enemyType = x;
	if (x == 1) {
		meleeRange = true;
		//setTexture
	}
	else if (x == 2) {
		meleeRange = false;
		//setTexture
		setMs(0.f);
	}
}

short Enemy::getType()
{
	return enemyType;
}
