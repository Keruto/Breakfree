#pragma once
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

class Levels
{
public:
	Levels();
	void loadLv0();
	void Draw(sf::RenderWindow &window);
};