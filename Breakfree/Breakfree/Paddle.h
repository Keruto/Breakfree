#pragma once
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

class Paddle
{
public:
	Paddle();
	void Update();
	void Release();
	bool ballStuck;

	sf::Sprite sprite;
	sf::Texture texture;	
	sf::Sprite ball;
	sf::Texture ballTex;
};