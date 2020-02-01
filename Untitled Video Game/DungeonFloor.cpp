//
// Created by Michael Ivanov on 1/31/2020.
//

#include "DungeonFloor.h"
std::mt19937 random_mt(time(nullptr));

DungeonFloor::DungeonFloor() {
    randomizeRooms();
}
/*
 * A0 B0 C0 D0 E0 F0
 * A1 B1 C1 D1 E1 F1
 * A2 B2 C2 D2 E2 F2
 * A3 B3 C3 D3 E3 F3
 * A4 B4 C4 D4 E4 F4
 * A5 B5 C5 D5 E5 F5
 *
 * Dungeon floor will comprise of a 6 by 6
 * out of these, only 6 will be rooms, rest will not exist
 * These rooms have to be connected and one room is a Boss Room
 * Boss room will only have one entrance
 *
 */
/*      0
 * 1          2
 *      3
 */
void DungeonFloor::randomizeRooms() {
    Room room;
    rooms.emplace("C3", room);
    int doorPos;
    string current = "C3";

    while(rooms.size() != 6){
        doorPos = random(0,3);
        if((current[0] == 'A' && doorPos == 1) || (current[0] == 'F' && doorPos == 2)){
            continue;
        }
        if((current[1] == '0' && doorPos == 0) || (current[1] == '5' && doorPos == 3)){
            continue;
        }
        switch (doorPos){
            case 0:
                current[1]--;
                break;
            case 1:
                current[0]--;
                break;
            case 2:
                current[0]++;
                break;
            case 3:
                current[1]++;
                break;
            default:
                // Hopefully never gets to here ;(
                break;
        }
        rooms.emplace(current, room);
    }
}

const map<string, Room> &DungeonFloor::getRooms() const {
    return rooms;
}

int DungeonFloor::random(int min, int max) {
    std::uniform_int_distribution<int> dist(min, max);
    return dist(random_mt);
}
