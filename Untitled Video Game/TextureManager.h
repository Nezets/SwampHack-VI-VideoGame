#pragma once
#include <SFML/Graphics.hpp>
#include <map>
#include <string>

//From Programming 2
// ** UPDATE FILE PATH IN loadTexture() for actual project
using std::map;
using std::string;
using sf::Texture;

class TextureManager
{
	static map<string, Texture> textures;
public:
	static void loadTexture(string textureName);
	static Texture& getTexture(string textureName);
	static void clearTextures();
};

