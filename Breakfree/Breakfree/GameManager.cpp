#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

#include "Pieces.h"
#include "Levels.h"
#include "Paddle.h"
#include "InputManager.h"

#include <windows.h>

int score = 0;
int lives = 3;

int level = 0;

sf::RenderWindow window;
sf::Font font;

sf::Text text;
std::vector<Piece> pieces;

bool playing = true;

//extern bool right = false, left = false, space = false;

int main()
{
	window.create(sf::VideoMode(800, 600), "Breakfree");
	window.setVerticalSyncEnabled(true);
	//, sf::Style::Close|sf::Style::Titlebar);
	
	if (!font.loadFromFile("Nirmala.ttf"))
		return EXIT_FAILURE;

	Levels lv;
	Paddle pad;
	InputManager input;
	
	while (window.isOpen())
	{
		switch (level)
		{
		case 0:
			lv.loadLv0();
			break;
		}
		while (playing)
		{
			input.ExecuteEvents(window);
			
			pad.Update();
			

			window.clear(); // ------draw graphics here-------

			sf::Text text("Score: " + std::to_string(score), font, 20);
			text.setPosition(660, 220);
			window.draw(text);

			lv.Draw(window);

			window.draw(pad.sprite);
			window.draw(pad.ball);

			window.display(); // -----------------------
		}
	}

	return 0;
}