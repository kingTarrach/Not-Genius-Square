#pragma once
#include "Piece3.h"

Piece3::Piece3()
{
	pieces[0] = (new Board(Vector2f(700, 300), Vector2f(100, 100), Color(100, 149, 237), false, false));
	pieces[1] = (new Board(Vector2f(700, 400), Vector2f(100, 100), Color(100, 149, 237), false, false));
	pieces[2] = (new Board(Vector2f(800, 400), Vector2f(100, 100), Color(100, 149, 237), false, false));
	pieces[3] = (new Board(Vector2f(900, 400), Vector2f(100, 100), Color(100, 149, 237), false, false));


}

void Piece3::MoveUp()
{

	for (int i = 0; i < 4; i++)
	{
		if (pieces[i]->getPosition().y - 100 >= 0.f)
		{
			pieces[i]->move(0, -100);
		}
	}
}
void Piece3::MoveDown()
{
	for (int i = 0; i < 4; i++)
	{
		if (pieces[i]->getPosition().y + 100 <= 500.f)
		{
			pieces[i]->move(0, 100);
		}
	}

}

void Piece3::MoveRight()
{
	for (int i = 0; i < 4; i++)
	{
		if (pieces[i]->getPosition().x + 100 <= 1100.f)
		{
			pieces[i]->move(100, 0);
		}
	}

}

void Piece3::MoveLeft()
{
	for (int i = 0; i < 4; i++)
	{
		if (pieces[i]->getPosition().x - 100 <= 0.f)
		{
			pieces[i]->move(-100, 0);
		}
	}
}


void Piece3::DrawPiece(sf::RenderWindow& window)
{
	for (int i = 0; i < 4; i++)
	{
		window.draw(*pieces[i]);
	}

}