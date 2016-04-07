#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include "Pieces.h"

Piece::Piece()
{
	if (!texture.loadFromFile("brick0.png"))
		abort();
	sprite.setTexture(texture);
	sprite.setTextureRect(sf::IntRect(0, 0, 128, 32));
}

Piece::Piece(int type)
{
	if (!texture.loadFromFile("brick" + std::to_string(type) + ".png"))
		abort();
	sprite.setTexture(texture);
	sprite.setTextureRect(sf::IntRect(0, 0, 128, 32));
}

