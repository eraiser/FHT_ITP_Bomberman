#include "../objects/GameItem.h"

#include <string>
#include <iostream>

GameItem::GameItem (std::string texturePath, int x, int y)
{
	texture = new sf::Texture;
	sprite = new sf::Sprite;

	if (!texture->loadFromFile (texturePath))
	{
		std::cout << "Nicht geladen" << std::endl;
	}

	sprite->setTexture (*texture);
	sprite->setPosition (x, y);
}