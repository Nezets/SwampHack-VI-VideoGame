#include "EnemyList.h"

void EnemyList::add(Enemy& enemy)
{
	//enemies.push_back(enemy);
}

void EnemyList::updateEnemies(sf::RenderWindow&window, sf::Vector2f pcPos)
{
	for (auto& enemy : enemies) {
		if (enemy->getType() == 1) {
			enemy->moveToPos(pcPos);
		}
		else if (enemy->getType() == 2) {
			
			//if(counter >= )
			Bullet* newBullet = new Bullet(enemy->getDamage());
			newBullet->setPosition(enemy->getPosition());
		}


		window.draw(*enemy);
	}
	//enemyBullets.updateBullets();
}
