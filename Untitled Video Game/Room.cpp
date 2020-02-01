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
    setDoorPos();
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

vector<Door> &Room::getDoors() {
    return doors;
}

void Room::setDoorPos() {
    doors[0].move(350, 5);
    doors[1].move(5, 250);
    doors[2].move(700, 250);
    doors[3].move(350, 500);
}
