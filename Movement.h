#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>
#include <Windows.h>
#include "BaseShape.h"

class square : public sf::RectangleShape
{
public:
	square(const sf::Vector2f& pos, const sf::Vector2f& size, const sf::Color& color) : sf::RectangleShape(size)
	{
		this->setFillColor(color);
		this->setPosition(pos);
	}
	bool moveable = false;
	void moveSquares();
};
