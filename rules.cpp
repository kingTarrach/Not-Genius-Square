#include "rules.h"

Rules::Rules(float width, float height)
{
	this->select = 1;
	if (!font.loadFromFile("DEBROSEE.ttf"))
	{
		std::cout << "FUKKKKK";
	}


	text[0].setFont(font);
	text[0].setString("RULES");
	text[0].setCharacterSize(90);
	text[0].setFillColor(sf::Color(217, 89, 128));
	text[0].setStyle(sf::Text::Bold);
	text[0].setPosition(sf::Vector2f(width / 2, 100));

	text[1].setFont(font);
	text[1].setString(
		"--->You will move each piece one by one\n"
		"--->Select the Pieces using the number system displayed\n"
		"---> Use WASD to move the piece in cardinal directions.\n"
		"---> Use arrow keys to rotate the piece.\n"
		"---> Press enter to set the piece down, \ndo not set the piece down over a peg\n or another one of your pieces\n"
		"doing so will result in an inability to\n solve the puzzle correctly\n"
		"---> The game is won when all board tiles\n are occupied with no overlap.\n");
	text[1].setCharacterSize(30);
	text[1].setFillColor(sf::Color(249, 155, 69));
	text[1].setPosition(sf::Vector2f(25, 300));

}

void Rules::DisplayRules(sf::RenderWindow& window)
{
	for (int i = 0; i < 2; i++)
	{
		window.draw(text[i]);
	}

}