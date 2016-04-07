#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include "Paddle.h"

extern bool right, left, space;
std::vector<float> v { 0, 0 };

Paddle::Paddle()
{
	ballStuck = true;

	if (!texture.loadFromFile("paddle.png"))
		abort();
	sprite.setTexture(texture);
	//sprite.setTextureRect(sf::IntRect(0, 0, 128, 16));

	sprite.setPosition(336, 550);

	if (!ballTex.loadFromFile("ball.png"))
		abort();
	ball.setTexture(ballTex);
	//ball.setTextureRect(sf::IntRect(0, 0, 16, 16));
	ball.setPosition(392, 536);
}

void Paddle::Update()
{
	if (!(right && left))
	{
		if (right)
		{
			sprite.move(5, 0);
			if (ballStuck) ball.move(5, 0);
		}
		else if (left)
		{
			sprite.move(-5, 0);
			if (ballStuck) ball.move(-5, 0);
		}
	}

	if (ballStuck && space)
	{
		ballStuck = false;
	}
	else if (!ballStuck)
	{
		// todo: move ball
	}
}

void Paddle::Release()
{
	ballStuck = false;
}