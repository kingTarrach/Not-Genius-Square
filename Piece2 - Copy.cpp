#pragma once
#include "Piece2.h"

Piece2::Piece2()
{
	pieces[0] = (new Board(Vector2f(600, 100), Vector2f(100, 100), Color(248, 213, 104), false, false));
	pieces[1] = (new Board(Vector2f(700, 100), Vector2f(100, 100), Color(248, 213, 104), false, false));
	pieces[2] = (new Board(Vector2f(800, 100), Vector2f(100, 100), Color(248, 213, 104), false, false));
	pieces[3] = (new Board(Vector2f(700, 0.f), Vector2f(100, 100), Color(248, 213, 104), false, false));


}

void Piece2::MoveUp()
{

	for (int i = 0; i < 4; i++)
	{
		if (pieces[i]->getPosition().y - 100 >= 0.f)
		{
			pieces[i]->move(0, -100);
		}
	}
}
void Piece2::MoveDown()
{
	for (int i = 0; i < 4; i++)
	{
		if (pieces[i]->getPosition().y + 100 <= 500.f)
		{
			pieces[i]->move(0, 100);
		}
	}

}

void Piece2::MoveRight()
{
	for (int i = 0; i < 4; i++)
	{
		if (pieces[i]->getPosition().x + 100 <= 1100.f)
		{
			pieces[i]->move(100, 0);
		}
	}

}

void Piece2::MoveLeft()
{
	for (int i = 0; i < 4; i++)
	{
		if (pieces[i]->getPosition().x - 100 <= 0.f)
		{
			pieces[i]->move(-100, 0);
		}
	}
}


void Piece2::DrawPiece(sf::RenderWindow& window)
{
	for (int i = 0; i < 4; i++)
	{
		window.draw(*pieces[i]);
	}

}