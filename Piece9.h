#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Board.h"

using sf::Vector2f;
using sf::Color;


class Piece9
{
public:
	Piece9();

	void MoveUp();
	void MoveDown();
	void MoveRight();
	void MoveLeft();

	void DrawPiece(sf::RenderWindow& window);

	bool isClicked() { return clicked; };
private:

	bool clicked = false;
	Board* pieces[2];
};

