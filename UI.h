#include "ProgressBar.h"

#pragma once

class UI
{
private:
	ProgressBar* healthBar;
	ProgressBar* XPBar;


public:
	UI();
	void draw(sf::RenderWindow& window, PC* player);
};

