#include "Bullet.h"

Bullet::Bullet(int damage_) {
	damage = damage_;
}

int Bullet::getDamage()
{
	return damage;
}
