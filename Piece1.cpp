#pragma once
#include "Piece1.h"

Piece::Piece()
{
	pieces[0] = (new Board(Vector2f(600, 0.f), Vector2f(100, 100), Color::White, false, false));
	pieces[1] = (new Board(Vector2f(700, 0.f), Vector2f(100, 100), Color::White, false, false));
	pieces[2] = (new Board(Vector2f(800, 0.f), Vector2f(100, 100), Color::White, false, false));

}

void Piece::MoveUp()
{
	
	for (int i = 0; i < 3; i++)
	{
		if (pieces[i]->getPosition().y - 100 >= 0.f)
		{
			pieces[i]->move(0, -100);
		}
	}
}
void Piece::MoveDown()
{
	for (int i = 0; i < 3; i++)
	{
		if (pieces[i]->getPosition().y + 100 <= 500.f)
		{
			pieces[i]->move(0, 100);
		}
	}
	
}

void Piece::DrawPiece(sf::RenderWindow& window)
{
	for (int i = 0; i < 3; i++)
	{
		window.draw(*pieces[i]);
	}

}