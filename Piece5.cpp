#pragma once
#include "Piece5.h"

Piece5::Piece5()
{
	pieces[0] = (new Board(Vector2f(700, 0.f), Vector2f(100, 100), Color::Red, false, false));
	pieces[1] = (new Board(Vector2f(700, 100.f), Vector2f(100, 100), Color::Red, false, false));
	pieces[2] = (new Board(Vector2f(600, 100.f), Vector2f(100, 100), Color::Red, false, false));
	pieces[3] = (new Board(Vector2f(600, 200.f), Vector2f(100, 100), Color::Red, false, false));

}

void Piece5::MoveUp()
{

	for (int i = 0; i < 4; i++)
	{
		if (pieces[i]->getPosition().y - 100 >= 0.f)
		{
			pieces[i]->move(0, -100);
		}
	}
}
void Piece5::MoveDown()
{
	for (int i = 0; i < 4; i++)
	{
		if (pieces[i]->getPosition().y + 100 <= 500.f)
		{
			pieces[i]->move(0, 100);
		}
	}

}

void Piece5::moveLeft()
{

	for (int i = 0; i < 4; i++)
	{
		if (pieces[i]->getPosition().x > 600.f)
		{
			pieces[i]->move(-100, 0);
		}
	}
	
}

void Piece5::moveRight()
{
	for (int i = 0; i < 4; i++)
	{
		if (pieces[i]->getPosition().x < 1200.f)
		{
			pieces[i]->move(100, 0);
		}
	}
}

void Piece5::DrawPiece(sf::RenderWindow& window)
{
	for (int i = 0; i < 4; i++)
	{
		window.draw(*pieces[i]);
	}

}