//
// Created by Michael Ivanov on 1/31/2020.
//

#ifndef ROUGEGAME_DUNGEONFLOOR_H
#define ROUGEGAME_DUNGEONFLOOR_H

#include "Room.h"


class DungeonFloor {
    map<int, Room> rooms;
public:
    DungeonFloor();
    void randomizeRooms();

    const vector<Room> &getRooms() const;
};


#endif //ROUGEGAME_DUNGEONFLOOR_H
