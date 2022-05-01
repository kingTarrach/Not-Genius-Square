#pragma once

#include <SFML/Graphics.hpp>
#include <Windows.h>

using sf::Vector2f;
using sf::Color;


class Board : public sf::RectangleShape
{
	friend class gameWorld;
public:

	Board(const Vector2f& pos, const Vector2f& size, const Color& color, bool isoccupied, bool ispeg) : 
		sf::RectangleShape(size)
	{
		this->setFillColor(color);
		this->setPosition(pos);
		this->setOutlineThickness(2);
		this->setOutlineColor(sf::Color(0, 0, 0));

		//this->setOutlineColor(sf::Color(249, 155, 69));


		this->isOccupied = isOccupied;
		this->isPeg = ispeg;
	}
	bool getisOccupied(void) const; 
	bool getisPeg(void) const; 
	void setisOccupied(bool status); 
	void setisPeg(bool peg); 
private: 

	bool isOccupied = false;
	bool isPeg = false;
};

