//
// Created by Michael Ivanov on 1/31/2020.
//

#ifndef ROUGEGAME_DUNGEONFLOOR_H
#define ROUGEGAME_DUNGEONFLOOR_H

#include <random>
#include "Room.h"
#include "ctime"



class DungeonFloor {
    map<string, Room> rooms;
public:
    DungeonFloor();
    void randomizeRooms();
    void setDoorAmounts();
    int random(int min, int max);
    const map<string, Room> &getRooms() const;
};


#endif //ROUGEGAME_DUNGEONFLOOR_H
