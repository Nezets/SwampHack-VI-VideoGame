#include <iostream>
#include "TextureManager.h"
#include "DungeonFloor.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Rouge Dungeon");
    window.setFramerateLimit(60);
    DungeonFloor floor1;

    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        window.draw(floor1.getRooms()[0]);
        window.display();

    }

    return 0;
}