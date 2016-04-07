#pragma once
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

class Piece
{
public:
	Piece();
	Piece(int type);
	sf::Texture texture;
	sf::Sprite sprite;
};