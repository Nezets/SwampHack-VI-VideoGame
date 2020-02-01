#include <iostream>
#include "TextureManager.h"
#include "DungeonFloor.h"
#include "PC.h"
#include "Bullet.h"
#include "BulletManager.h"
#include "ProgressBar.h"

int main() {
	//SFML Stuff
	sf::RenderWindow window(sf::VideoMode(800, 600), "Rouge Dungeon");
	window.setFramerateLimit(60);

	//Objects
	DungeonFloor floor1;
	PC pc;
	pc.setPosition(300, 300);
	BulletManager bullets = BulletManager();
	sf::Sprite crosshair;
	crosshair.setTexture(TextureManager::GetTexture("Crosshair"));


	// run the program as long as the window is open
	while (window.isOpen())
	{
		// check all the window's events that were triggered since the last iteration of the loop
		sf::Event event;
		Bullet newBullet(pc.getDamage());
		while (window.pollEvent(event))
		{
			// "close requested" event: we close the window
			if (event.type == sf::Event::Closed)
				window.close();
			if (event.type == sf::Event::MouseButtonPressed) {
				Bullet* newBullet = new Bullet(pc.getDamage());
				newBullet->setPosition(pc.getPosition());
				newBullet->rotate(pc.getAngle());
				bullets.addBullet(newBullet);
			}

			
		}
		if (event.type == sf::Event::KeyPressed) {
			if (event.key.code == sf::Keyboard::A || event.key.code == sf::Keyboard::Left) {
				pc.move(pc.getMs() * -1.f, 0.f);
			}
			if (event.key.code == sf::Keyboard::W || event.key.code == sf::Keyboard::Up) {
				pc.move(0.f, pc.getMs());
			}
			if (event.key.code == sf::Keyboard::D || event.key.code == sf::Keyboard::Right) {
				pc.move(pc.getMs(), 0.f);
			}
			if (event.key.code == sf::Keyboard::S || event.key.code == sf::Keyboard::Down) {
				pc.move(0.f, pc.getMs() * -1.f);
			}
		}

		window.clear();

		ProgressBar* bar = new ProgressBar(window);
		bullets.updateBullets(window);
		//Stuff to upload because mess
		window.draw(pc);
		pc.pointMouseCursor(window);
		crosshair.setPosition(sf::Mouse::);
		window.draw(crosshair);
		window.display();

	}

	return 0;
}