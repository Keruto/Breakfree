#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include "Pieces.h"
#include "Levels.h"
#include "Paddle.h"

extern sf::RenderWindow window;

const int num = 36;
Piece* pieces;

Levels::Levels()
{
}

void Levels::loadLv0()
{
	float x = 0, y = 0;
	int placed = 0;

	pieces = new Piece[num];

	for (int i = 0; i < num; i++)
	{
		pieces[i] = *new Piece(1);

		pieces[i].sprite.move(x, y);
		x += 128;
		placed++;
		if (placed == 6)
		{
			x = 0;
			y += 32;
			placed = 0;
		}
	}
}

void Levels::Draw(sf::RenderWindow &window)
{
	for (int i = 0; i < num; i++)
	{
		window.draw(pieces[i].sprite);
	}
}

