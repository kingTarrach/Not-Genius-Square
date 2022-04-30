#pragma once
#include "Piece9.h"

Piece9::Piece9()
{
	pieces[0] = (new Board(Vector2f(900, 0), Vector2f(100, 100), Color::White, false, false));
	pieces[1] = (new Board(Vector2f(1000, 0), Vector2f(100, 100), Color::White, false, false));


}

void Piece9::MoveUp()
{

	for (int i = 0; i < 2; i++)
	{
		if (pieces[i]->getPosition().y - 100 >= 0.f)
		{
			pieces[i]->move(0, -100);
		}
	}
}
void Piece9::MoveDown()
{
	for (int i = 0; i < 2; i++)
	{
		if (pieces[i]->getPosition().y + 100 <= 500.f)
		{
			pieces[i]->move(0, 100);
		}
	}

}

void Piece9::MoveRight()
{
	for (int i = 0; i < 2; i++)
	{
		if (pieces[i]->getPosition().x + 100 <= 1100.f)
		{
			pieces[i]->move(100, 0);
		}
	}

}

void Piece9::MoveLeft()
{
	for (int i = 0; i < 2; i++)
	{
		if (pieces[i]->getPosition().x - 100 <= 0.f)
		{
			pieces[i]->move(-100, 0);
		}
	}
}


void Piece9::DrawPiece(sf::RenderWindow& window)
{
	for (int i = 0; i < 2; i++)
	{
		window.draw(*pieces[i]);
	}

}