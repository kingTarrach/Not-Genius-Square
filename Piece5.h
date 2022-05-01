#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Board.h"

using sf::Vector2f;
using sf::Color;


class Piece5
{
public:
	Piece5();

	void MoveUp();
	void moveLeft();
	void moveRight();
	void MoveDown();

	void DrawPiece(sf::RenderWindow& window);

	bool isClicked() { return clicked; };
private:

	bool clicked = false;
	Board* pieces[4];
};