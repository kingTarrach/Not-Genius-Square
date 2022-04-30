#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Board.h"

using sf::Vector2f;
using sf::Color;


class Piece
{
public:
	Piece();

	void MoveUp();
	void MoveDown();

	void DrawPiece(sf::RenderWindow& window);

	bool isClicked(){ return clicked; };
private:

	bool clicked = false;
	Board* pieces[3];
};
