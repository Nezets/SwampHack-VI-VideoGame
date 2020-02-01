#pragma once
#include <SFML/Graphics.hpp>
#include <map>
#include <string>

using std::vector;

//From Programming 2
// ** UPDATE FILE PATH IN loadTexture() for actual project
using std::map;
using std::string;
using sf::Texture;

class TextureManager
{
	static map<string, Texture> textures;
public:
	static void LoadTexture(string textureName);
	static Texture& GetTexture(string textureName);
	static void ClearTextures();
};

