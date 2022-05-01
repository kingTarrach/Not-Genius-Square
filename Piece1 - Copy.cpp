#pragma once
#include "Piece1.h"

Piece1::Piece1()
{
	pieces[0] = (new Board(Vector2f(700, 500), Vector2f(100, 100), Color(255, 165, 0), false, false));
	pieces[1] = (new Board(Vector2f(800, 500), Vector2f(100, 100), Color(255, 165, 0), false, false));
	pieces[2] = (new Board(Vector2f(900, 500), Vector2f(100, 100), Color(255, 165, 0), false, false));

}

void Piece1::MoveUp()
{
	
	for (int i = 0; i < 3; i++)
	{
		if (pieces[i]->getPosition().y - 100.f >= 0.f)
		{
			pieces[i]->move(0, -100.f);
			Sleep(100);

		}
	}
}
void Piece1::MoveDown()
{
	for (int i = 0; i < 3; i++)
	{
		if (pieces[i]->getPosition().y + 100.f <= 500.f)
		{
			pieces[i]->move(0, 100.f);
			Sleep(100);

		}
	}
	
}

void Piece1::MoveRight()
{
	for (int i = 0; i < 3; i++)
	{
		if (i == 0)
		{
			if (pieces[i]->getPosition().x + 100.f <= 1100 && pieces[i+1]->getPosition().x + 100.f <= 1100 && pieces[i+2]->getPosition().x + 100.f <= 1100)
			{
				pieces[i]->move(100.f, 0.f);
				Sleep(75);

			}
		}
		if (i == 1)
		{
			if (pieces[i]->getPosition().x + 100.f <= 1100 && pieces[i+1]->getPosition().x + 100.f <= 1100)
			{
				pieces[i]->move(100.f, 0.f);
				Sleep(75);

			}
		}
		else if ( i == 2 && pieces[i]->getPosition().x + 100.f <= 1100)
		{
			pieces[i]->move(100.f, 0.f);
			Sleep(75);

		}
	}

}

void Piece1::MoveLeft()
{
	for (int i = 0; i < 3; i++)
	{
		if (pieces[i]->getPosition().x - 100.f >= 0.f)
		{
			pieces[i]->move(-100.f, 0.f);
			Sleep(75);
		}
	}
}


void Piece1::DrawPiece(sf::RenderWindow& window)
{
	for (int i = 0; i < 3; i++)
	{
		window.draw(*pieces[i]);
	}

}