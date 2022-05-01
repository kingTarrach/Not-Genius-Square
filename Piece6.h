#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Board.h"

using sf::Vector2f;
using sf::Color;


class Piece6
{
public:
	Piece6();

	void MoveUp();
	void MoveDown();
	void MoveLeft();
	void MoveRight();

	void DrawPiece(sf::RenderWindow& window);

	bool isClicked() { return clicked; };
private:

	bool clicked = false;
	Board* pieces[4];
};
