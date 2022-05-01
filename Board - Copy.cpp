#include "Board.h"

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