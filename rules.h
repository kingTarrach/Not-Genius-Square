#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

using sf::Vector2f;
using sf::Color;


class Rules
{
public:
	Rules(float width, float height);

	void DisplayRules(sf::RenderWindow& window);
	int GetPressedItem() { return select; };

private:
	sf::Font font;
	int select = 2;
	sf::Text text[2];
};