#include "TextureManager.h"

map<string, Texture> TextureManager::textures;

void TextureManager::loadTexture(string textureName)
{
	//UPDATE THIS
	string path = "images/" + textureName + ".png";
	textures[textureName].loadFromFile(path);

}

Texture& TextureManager::getTexture(string textureName)
{
	// TODO: insert return statement here
	if (textures.find(textureName) == textures.end())
		loadTexture(textureName);
	return textures[textureName];
}

void TextureManager::clearTextures()
{
	textures.clear();
}