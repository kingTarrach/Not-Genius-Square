#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

using sf::Vector2f;
using sf::Color;


class Menu
{
public:
	Menu(float width, float height);
	
	void MoveUp(); 
	void MoveDown();

	void DisplayMenu(sf::RenderWindow& window);
	int GetPressedItem() { return selected; };
	
private: 
	sf::Font font; 
	int selected = 1; 
	sf::Text text[4];
};
