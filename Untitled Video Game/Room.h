//
// Created by Michael Ivanov on 1/31/2020.
//

#ifndef ROUGEGAME_ROOM_H
#define ROUGEGAME_ROOM_H


#include <SFML/Graphics/Sprite.hpp>
#include "TextureManager.h"
#include "Door.h"

/*
 * 00 01 02 03 04 05
 * 06 07 08 09 10 11
 * 12 13 14 15 16 17
 * 18 19 20 21 22 23
 * 24 25 26 27 28 29
 * 30 31 32 33 34 35
 *
 * Dungeon floor will comprise of a 6 by 6
 * out of these, only 6 will be rooms, rest will not exist
 * These rooms have to be connected and one room is a Boss Room
 * Boss room will only have one entrance
 *
 */



class Room : public sf::Sprite {
    //Rooms have up to 4 doors, and must have at least one
    int doorAmount;
    // Look above for context on room IDs
    int roomID;
    bool bossRoom;
    // All doors will be locked when player enters a room, they open when all enemies are gone
    bool doorsLocked;

    vector<Door> doors;
    /*      0
     * 1          2
     *      3
     */

public:
    Room();
    int getDoorAmount() const;

    int getRoomId() const;

    bool isBossRoom() const;

    bool isDoorsLocked() const;


};


#endif //ROUGEGAME_ROOM_H
