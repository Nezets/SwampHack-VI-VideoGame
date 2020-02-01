
//
// Created by Michael Ivanov on 1/31/2020.
//

#include "Door.h"

Door::Door() {
	setTexture(TextureManager::GetTexture("door"));
	locked = false;
	bossDoor = false;
	visable = false;
}

bool Door::isLocked() const {
	return locked;
}

bool Door::isBossDoor() const {
	return bossDoor;
}

void Door::setLocked(bool locked) {
	Door::locked = locked;
}

void Door::setBossDoor(bool bossDoor) {
	Door::bossDoor = bossDoor;
}

void Door::setVisable(bool visable) {
	Door::visable = visable;
}