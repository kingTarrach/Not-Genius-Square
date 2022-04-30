#include "Piece7.h"

Piece7::Piece7()
{
	pieces[0] = (new Board(Vector2f(1000, 200.f), Vector2f(100, 100), Color(0, 255, 127), false, false));
	pieces[1] = (new Board(Vector2f(1000, 300.f), Vector2f(100, 100), Color(0, 255, 127), false, false));
	pieces[2] = (new Board(Vector2f(1100, 200.f), Vector2f(100, 100), Color(0, 255, 127), false, false));
	pieces[3] = (new Board(Vector2f(1100, 300.f), Vector2f(100, 100), Color(0, 255, 127), false, false));
}

void Piece7::MoveUp()
{

	for (int i = 0; i < 3; i++)
	{
		if (pieces[i]->getPosition().y - 100 >= 0.f)
		{
			pieces[i]->move(0, -100);
		}
	}
}
void Piece7::MoveDown()
{
	for (int i = 0; i < 3; i++)
	{
		if (pieces[i]->getPosition().y + 100 <= 500.f)
		{
			pieces[i]->move(0, 100);
		}
	}

}

void Piece7::MoveLeft()
{
	for (int i = 0; i < 3; i++)
	{
		if (pieces[i]->getPosition().x - 100 >= 0.f)
		{
			pieces[i]->move(-100, 0);
		}
	}
}

void Piece7::MoveRight()
{
	for (int i = 0; i < 3; i++)
	{
		if (pieces[i]->getPosition().x <= 1100.f)
		{
			pieces[i]->move(100, 0);
		}
	}
}

void Piece7::DrawPiece(sf::RenderWindow& window)
{
	for (int i = 0; i < 3; i++)
	{
		window.draw(*pieces[i]);
	}

}