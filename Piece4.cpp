#pragma once
#include "Piece4.h"

Piece4::Piece4()
{
	pieces[0] = (new Board(Vector2f(600, 0.f), Vector2f(100, 100), Color(0, 0, 250), false, false));

}

void Piece4::MoveUp()
{

	if (pieces[0]->getPosition().y - 100 >= 0.f)
	{
		pieces[0]->move(0, -100);
	}
}

void Piece4::MoveDown()
{

	if (pieces[0]->getPosition().y + 100 <= 500.f)
	{
		pieces[0]->move(0, 100);
	}

}

void Piece4::moveLeft()
{
	if (pieces[0]->getPosition().x > 600.f) {
		pieces[0]->move(-100, 0);
	}
}

void Piece4::moveRight()
{
	if (pieces[0]->getPosition().x < 1200.f) {
		pieces[0]->move(100, 0);
	}
}

void Piece4::DrawPiece(sf::RenderWindow& window)
{
	window.draw(*pieces[0]);

}