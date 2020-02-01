#pragma once

#include <SFML/Graphics.hpp>
#include "TextureManager.h"
class Character : public sf::Sprite {
	//Combat Stats
	float maxHp;
	float curHp;
	float damage;
	float ms;
	float atkSpd;

	sf::Vector2f curVelocity;
	//Position
	float curX;
	float curY;
	float angle;

	//Flags
	bool alive;
	bool moving;

	bool invincible;

	//Take Damage
	bool isInvincible();
	int invulnTime;

public:
	//Constructors
	Character();

	//Getter Functions
	float getCurHp();
	float getMaxHp();
	float getDamage();
	float getMs();
	float getAtkSpd();

	float getCurX();
	float getCurY();
	float getAngle();
	sf::Vector2f getCurVelocity();


	//HP Functions
	void takeDamage(int dmgTaken);
	void heal(int healthGain);

	//Position Functions
	void updatePosition(float x, float y);
	void updateAngle(float x);

	void pointMouseCursor(sf::RenderWindow& win);
	void moveTowardMouse(sf::RenderWindow& win);
	void moveToPos(sf::Vector2f pos);
	void moveToPos(float x, float y);

	//End Game Functions
	void death();
};