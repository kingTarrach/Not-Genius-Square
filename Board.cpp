#include "Board.h"


Board::Board(const Vector2f & pos, const Vector2f & size, const Color & color, bool isoccupied, bool ispeg) : sf::RectangleShape(size)
{
	this->setFillColor(color);
	this->setPosition(pos);

	this->isOccupied = isoccupied; 
	this->isPeg = ispeg; 
}

bool Board::getisOccupied(void) const
{
	return this->isOccupied;
}
bool Board::getisPeg(void) const
{
	return this->isPeg; 
}

void Board::setisOccupied(bool status)
{
	this->isOccupied = status; 
}
void Board::setisPeg(bool peg)
{
	this->isPeg = peg; 
}