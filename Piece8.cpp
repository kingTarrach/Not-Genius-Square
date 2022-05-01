#include "Piece8.h"

Piece8::Piece8()
{
	pieces[0] = (new Board(Vector2f(1100, 0.f), Vector2f(100, 100), Color(138, 43, 226), false, false));
	pieces[1] = (new Board(Vector2f(1100, 100.f), Vector2f(100, 100), Color(138, 43, 226), false, false));
	pieces[2] = (new Board(Vector2f(1000, 100.f), Vector2f(100, 100), Color(138, 43, 226), false, false));
}

void Piece8::MoveUp()
{

	for (int i = 0; i < 3; i++)
	{
		if (pieces[i]->getPosition().y - 100 >= 0.f)
		{
			pieces[i]->move(0, -100);
		}
	}
}
void Piece8::MoveDown()
{
	for (int i = 0; i < 3; i++)
	{
		if (pieces[i]->getPosition().y + 100 <= 500.f)
		{
			pieces[i]->move(0, 100);
		}
	}

}

void Piece8::MoveLeft()
{
	for (int i = 0; i < 3; i++)
	{
		if (pieces[i]->getPosition().x - 100 >= 0.f)
		{
			pieces[i]->move(-100, 0);
		}
	}
}

void Piece8::MoveRight()
{
	for (int i = 0; i < 3; i++)
	{
		if (pieces[i]->getPosition().x <= 1100.f)
		{
			pieces[i]->move(100, 0);
		}
	}
}

void Piece8::DrawPiece(sf::RenderWindow& window)
{
	for (int i = 0; i < 3; i++)
	{
		window.draw(*pieces[i]);
	}

}