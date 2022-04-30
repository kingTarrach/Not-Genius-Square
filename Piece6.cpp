#include "Piece6.h"

Piece6::Piece6()
{
	pieces[0] = (new Board(Vector2f(900, 100.f), Vector2f(100, 100), Color(105, 105, 105), false, false));
	pieces[1] = (new Board(Vector2f(900, 200.f), Vector2f(100, 100), Color(105, 105, 105), false, false));
	pieces[2] = (new Board(Vector2f(900, 300.f), Vector2f(100, 100), Color(105, 105, 105), false, false));
	pieces[3] = (new Board(Vector2f(900, 400.f), Vector2f(100, 100), Color(105, 105, 105), false, false));
}

void Piece6::MoveUp()
{

	for (int i = 0; i < 3; i++)
	{
		if (pieces[i]->getPosition().y - 100 >= 0.f)
		{
			pieces[i]->move(0, -100);
		}
	}
}
void Piece6::MoveDown()
{
	for (int i = 0; i < 3; i++)
	{
		if (pieces[i]->getPosition().y + 100 <= 500.f)
		{
			pieces[i]->move(0, 100);
		}
	}

}

void Piece6::MoveLeft()
{
	for (int i = 0; i < 3; i++)
	{
		if (pieces[i]->getPosition().x - 100 >= 0.f)
		{
			pieces[i]->move(-100, 0);
		}
	}
}

void Piece6::MoveRight()
{
	for (int i = 0; i < 3; i++)
	{
		if (pieces[i]->getPosition().x <= 1100.f)
		{
			pieces[i]->move(100, 0);
		}
	}
}

void Piece6::DrawPiece(sf::RenderWindow& window)
{
	for (int i = 0; i < 3; i++)
	{
		window.draw(*pieces[i]);
	}

}