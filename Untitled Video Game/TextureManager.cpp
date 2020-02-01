#include "TextureManager.h"

map<string, Texture> TextureManager::textures;

void TextureManager::LoadTexture(string textureName)
{
	//UPDATE THIS
	string path = "images/" + textureName + ".png";
	textures[textureName].loadFromFile(path);

}

Texture& TextureManager::GetTexture(string textureName)
{
	// TODO: insert return statement here
	if (textures.find(textureName) == textures.end())
		LoadTexture(textureName);
	return textures[textureName];
}

void TextureManager::ClearTextures()
{
	textures.clear();
}