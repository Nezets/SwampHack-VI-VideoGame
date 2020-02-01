//
// Created by Michael Ivanov on 1/31/2020.
//

#include "DungeonFloor.h"

DungeonFloor::DungeonFloor() {
    randomizeRooms();
}

void DungeonFloor::randomizeRooms() {

}

const vector<Room> &DungeonFloor::getRooms() const {
    return rooms;
}
