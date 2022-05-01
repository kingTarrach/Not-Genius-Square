#include "menu.h"

Menu::Menu(float width, float height)
{
	this->select = 1;
	if (!font.loadFromFile("DEBROSEE-ALPnL.ttf"))
	{
		std::cout << "FUKKKKK";
	}


	text[0].setFont(font);
	text[0].setString("NOT GENIUS CUBE");
	text[0].setCharacterSize(90);
	text[0].setFillColor(sf::Color(217, 89, 128));
	text[0].setStyle(sf::Text::Bold);
	text[0].setPosition(sf::Vector2f(width / 2, (height / 5) * 1));

	text[1].setFont(font);
	text[1].setString("PLAY");
	text[1].setCharacterSize(90);
	text[1].setFillColor(sf::Color(249, 155, 69));
	text[1].setStyle(sf::Text::Bold);
	text[1].setPosition(sf::Vector2f(width / 2, (height / 5) * 2));

	text[2].setFont(font);
	text[2].setString("RULES");
	text[2].setCharacterSize(90);
	text[2].setFillColor(sf::Color::White);
	text[2].setStyle(sf::Text::Bold);
	text[2].setPosition(sf::Vector2f(width / 2, (height / 5) * 3));

	text[3].setFont(font);
	text[3].setString("EXIT");
	text[3].setCharacterSize(90);
	text[3].setFillColor(sf::Color::White);
	text[3].setStyle(sf::Text::Bold);
	text[3].setPosition(sf::Vector2f(width / 2, (height / 5) * 4));


}

void Menu::DisplayMenu(sf::RenderWindow& window)
{
	for (int i = 0; i < 4; i++)
	{
		window.draw(text[i]);
	}

}

void Menu::MoveUp()
{

	if (select - 1 >= 1)
	{
		std::cout << select << std::endl;
		text[select].setFillColor(sf::Color::White);
		select -= 1;
		text[select].setFillColor(sf::Color(249, 155, 69));
		//std::cout << selected << std::endl;
	}

}

void Menu::MoveDown()
{
	if (select + 1 < 4)
	{
		std::cout << select << std::endl;
		text[select].setFillColor(sf::Color::White);
		select += 1;
		text[select].setFillColor(sf::Color(249, 155, 69));
		std::cout << select << std::endl;
	}
}
