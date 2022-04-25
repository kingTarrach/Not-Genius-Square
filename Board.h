#pragma once

#include <SFML/Graphics.hpp>

using sf::Vector2f;
using sf::Color;


class Board : public sf::RectangleShape
{
public:
	Board(const Vector2f& pos, const Vector2f& size, const Color& color, bool isoccupied, bool ispeg) : sf::RectangleShape(size);

	bool getisOccupied(void) const; 
	bool getisPeg(void) const; 

	void setisOccupied(bool status); 
	void setisPeg(bool peg); 
private: 

	bool isOccupied = false;
	bool isPeg = false;
};

