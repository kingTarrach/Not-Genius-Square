#include "selection.h"

Select::Select(float width, float height)
{

	if (!font.loadFromFile("Debrosee-ALPnL.ttf"))
	{
		std::cout << "FUKKKKK";
	}


	text[0].setFont(font);
	text[0].setString("Select Piece");
	text[0].setCharacterSize(50);
	text[0].setFillColor(sf::Color(99, 170, 192));
	text[0].setStyle(sf::Text::Bold);
	text[0].setPosition(sf::Vector2f(50, 30));

	text[1].setFont(font);
	text[1].setString("Orange");
	text[1].setCharacterSize(50);
	text[1].setFillColor(sf::Color(249, 155, 69));
	text[1].setPosition(sf::Vector2f(100, (height / 11) * 2));

	text[2].setFont(font);
	text[2].setString("Green");
	text[2].setCharacterSize(50);
	text[2].setFillColor(sf::Color::White);
	text[2].setPosition(sf::Vector2f(100, (height / 11) * 3));

	text[3].setFont(font);
	text[3].setString("Red");
	text[3].setCharacterSize(50);
	text[3].setFillColor(sf::Color::White);
	text[3].setPosition(sf::Vector2f(100, (height / 11) * 4));

	text[4].setFont(font);
	text[4].setString("Yellow");
	text[4].setCharacterSize(50);
	text[4].setFillColor(sf::Color::White);
	text[4].setPosition(sf::Vector2f(100, (height / 11) * 5));

	text[5].setFont(font);
	text[5].setString("Dark Blue");
	text[5].setCharacterSize(50);
	text[5].setFillColor(sf::Color::White);
	text[5].setPosition(sf::Vector2f(100, (height / 11) * 6));

	text[6].setFont(font);
	text[6].setString("Light Blue");
	text[6].setCharacterSize(50);
	text[6].setFillColor(sf::Color::White);
	text[6].setPosition(sf::Vector2f(100, (height / 11) * 7));

	text[7].setFont(font);
	text[7].setString("Brown");
	text[7].setCharacterSize(50);
	text[7].setFillColor(sf::Color::White);
	text[7].setPosition(sf::Vector2f(100, (height / 11) * 8));

	text[8].setFont(font);
	text[8].setString("Purple");
	text[8].setCharacterSize(50);
	text[8].setFillColor(sf::Color::White);
	text[8].setPosition(sf::Vector2f(100, (height / 11) * 9));

	text[9].setFont(font);
	text[9].setString("Gray");
	text[9].setCharacterSize(50);
	text[9].setFillColor(sf::Color::White);
	text[9].setPosition(sf::Vector2f(100, (height / 11) * 10));

}

void Select::DisplaySelect(sf::RenderWindow& window)
{
	for (int i = 0; i < 10; i++)
	{
		window.draw(text[i]);
	}

}

void Select::MoveUp()
{
	if (this->selected - 1 >= 1)
	{
		text[selected].setFillColor(sf::Color::White);
		selected--;
		text[selected].setFillColor(sf::Color(249, 155, 69));
	}

}

void Select::MoveDown()
{
	if (selected + 1 < 10)
	{
		text[selected].setFillColor(sf::Color::White);
		selected = selected + 1;
		text[selected].setFillColor(sf::Color(249, 155, 69));
	}
}
