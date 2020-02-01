//
// Created by Michael Ivanov on 1/31/2020.
//

#ifndef ROUGEGAME_DOOR_H
#define ROUGEGAME_DOOR_H


#include <SFML/Graphics/Sprite.hpp>
#include "TextureManager.h"

class Door : public sf::Sprite {
    bool locked;
    bool bossDoor;
public:
    Door();

    bool isLocked() const;
    bool isBossDoor() const;
    void setLocked(bool locked);
    void setBossDoor(bool bossDoor);

};


#endif //ROUGEGAME_DOOR_H
