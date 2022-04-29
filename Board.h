#pragma once

#include <SFML/Graphics.hpp>

using sf::Vector2f;
using sf::Color;


class Board : public sf::RectangleShape
{
	friend class gameWorld;
public:
	Board();
	Board(const Vector2f& pos, const Vector2f& size, const Color& color, bool isoccupied, bool ispeg) : sf::RectangleShape(size)
	{
		this->setFillColor(color);
		this->setPosition(pos);
		this->setOutlineThickness(5);
		this->setOutlineColor(sf::Color(249, 155, 69));
		this->isOccupied = isoccupied;
		this->isPeg = ispeg;
	}

	bool getisOccupied(void) const;
	bool getisPeg(void) const;

	void setisOccupied(bool status);
	void setisPeg(bool peg);
private:
	bool hasInit = false;
	bool isOccupied = false;
	bool isPeg = false;
};
