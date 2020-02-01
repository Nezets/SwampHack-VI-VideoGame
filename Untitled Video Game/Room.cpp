//
// Created by Michael Ivanov on 1/31/2020.
//

#include "Room.h"

Room::Room() {
    setTexture(TextureManager::GetTexture("floor"));
    doorAmount = 0;
    roomID = 0;
    bossRoom = false;
    doorsLocked = false;
    doors.resize(4);
}

int Room::getDoorAmount() const {
    return doorAmount;
}

int Room::getRoomId() const {
    return roomID;
}

bool Room::isBossRoom() const {
    return bossRoom;
}

bool Room::isDoorsLocked() const {
    return doorsLocked;
}
