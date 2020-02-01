#include "BulletManager.h"

BulletManager::BulletManager()
{
	
}

BulletManager::~BulletManager()
{
	for (Bullet* bullet : bullets) {
		delete bullet;
	}
}

void BulletManager::addBullet(Bullet* bullet)
{
	bullets.push_back(bullet);

}

void BulletManager::updateBullets(sf::RenderWindow& window)
{
	for (Bullet* bullet : bullets) {
		bullet->moveTowardMouse(window);
		window.draw(*bullet);
	}
}

bool BulletManager::bulletCollision(Character& obj)
{
	for (auto& bullet : bullets) {
		if (bullet->getGlobalBounds().intersects(obj.getGlobalBounds())) {
			return true;
		}
	}
	return false;
}
