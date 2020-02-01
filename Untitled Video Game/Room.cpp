//
// Created by Michael Ivanov on 1/31/2020.
//

#include "Room.h"

Room::Room() {
	setTexture(TextureManager::GetTexture("floor"));
	doorAmount = 0;
	roomID = "";
	bossRoom = false;
	doorsLocked = false;
	doors.resize(4);
}

int Room::getDoorAmount() const {
	return doorAmount;
}

string Room::getRoomId() {
	return roomID;
}

bool Room::isBossRoom() const {
	return bossRoom;
}

bool Room::isDoorsLocked() const {
	return doorsLocked;
}

void Room::incrementDoorAmount() {
	Room::doorAmount++;
}

void Room::setRoomId(string roomId) {
	roomID = roomId;
}

vector<Door>& Room::getDoors() {
	return doors;
}