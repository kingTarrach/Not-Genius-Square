#include <SFML/Graphics.hpp>
#include "gameWorld.h"
#include "Board.h"
#include "selection.h"
#include "myPiece.h"
#include "rules.h"

#include <iostream>
#include "Piece1.h"
#include "Piece2.h"
#include "Piece3.h"
#include "Piece4.h"
#include "Piece5.h"
#include "Piece6.h"
#include "Piece7.h"
#include "Piece8.h"
#include "Piece9.h"

#include "menu.h"
using sf::Vector2f; 
using sf::Color; 

#define ORANGE 1
#define GREEN 2
#define RED 3
#define YELLOW 4
#define DARK_BLUE 5
#define LIGHT_BLUE 6
#define BROWN 7
#define PURPLE 8
#define GRAY 9

int main()
{

	sf::Texture texture;
	if (!texture.loadFromFile("TileNumbers.png"))
	{
		// error...
	}
	sf::Sprite sprite;
	sprite.setTexture(texture);
	sprite.setPosition(Vector2f(550, 500));
	sprite.setScale(sf::Vector2f(0.25, .25));

	//Some number that isn;t 0-8
	int i = 100;

	gameWorld world = gameWorld();
	bool isMenu = true;
	bool isRules = false;

	Menu menu(400, 800);
	Rules rules(1200, 1200);

	bool movingPiece = false;
	sf::Vector2u windowSize(1500, 900);
	sf::RenderWindow window(sf::VideoMode(windowSize.x, windowSize.y), "Not Genuis Cube");
	sf::RenderWindow Rules(sf::VideoMode(800, 800), "Rules");

	myPiece piece[9];

	for (int i = 0; i < 9; i++)
	{
		piece[i].load(i + 1, 100);
	}

	piece[0].setRelativePosition(Vector2f(800, 300));
	piece[1].setRelativePosition(Vector2f(1000, 300));
	piece[2].setRelativePosition(Vector2f(1200, 300));
	piece[3].setRelativePosition(Vector2f(0, 0));
	piece[4].setRelativePosition(Vector2f(700, 0));
	piece[5].setRelativePosition(Vector2f(1000, 0));
	piece[6].setRelativePosition(Vector2f(1300, 0));
	piece[7].setRelativePosition(Vector2f(700, 600));
	piece[8].setRelativePosition(Vector2f(1100, 700));


	while (window.isOpen() && Rules.isOpen())
	{
		
		sf::Event event;
		while (window.pollEvent(event)) {

			if (event.type == sf::Event::Closed) {
				window.close();
			}

			if (event.type == sf::Event::KeyReleased && isMenu) {
				switch (event.key.code) {
				case sf::Keyboard::Up:
					menu.MoveUp();
					Sleep(100);
					break;
				case sf::Keyboard::Down:

					menu.MoveDown();
					Sleep(100);

					break;
				case sf::Keyboard::Return:
					switch (menu.GetPressedItem())
					{
					case 1:
						std::cout << "Play Selected" << std::endl;

						isMenu = false;

						break;
					case 2:
						std::cout << "Rules Selected" << std::endl;

						sf::Event event;
						while (Rules.pollEvent(event)) {

							if (event.type == sf::Event::Closed) {
								Rules.close();
							}

							Rules.clear();
							Rules.draw(sprite);
							rules.DisplayRules(Rules);
							Rules.display();
						}
						break;
					case 3:
						std::cout << "Exit" << std::endl;
						window.close();
						break;

					}

				}
			}

			if (event.type == sf::Event::KeyPressed && i >= 0 && i <= 8 && (!isMenu))
			{
				switch (event.key.code) {
				case sf::Keyboard::A:
					piece[i].setPosition(piece[i].getPosition().x - piece[i].getSize(), piece[i].getPosition().y);
					std::cout << piece[i].getPosition().x << ", " << piece[i].getPosition().y << std::endl;
					break;
				case sf::Keyboard::D:
					piece[i].setPosition(piece[i].getPosition().x + piece[i].getSize(), piece[i].getPosition().y);
					std::cout << piece[i].getPosition().x << ", " << piece[i].getPosition().y << std::endl;
					break;
				case sf::Keyboard::W:
					piece[i].setPosition(piece[i].getPosition().x, piece[i].getPosition().y - piece[i].getSize());
					std::cout << piece[i].getPosition().x << ", " << piece[i].getPosition().y << std::endl;
					break;
				case sf::Keyboard::S:
					piece[i].setPosition(piece[i].getPosition().x, piece[i].getPosition().y + piece[i].getSize());
					std::cout << piece[i].getPosition().x << ", " << piece[i].getPosition().y << std::endl;
					break;
				}
			}
			if (event.type == sf::Event::KeyReleased && (!isMenu))
			{
				switch (event.key.code) {
				case sf::Keyboard::Left:
					std::cout << piece[i].getOrigin().x << ", " << piece[i].getOrigin().y << std::endl;
					std::cout << piece[i].getPosition().x << ", " << piece[i].getPosition().y << std::endl;
					piece[i].rotate(270);
					//piece.setPosition(piece.getPosition().x + piece.getSize(), piece.getPosition().y + piece.getSize());
					break;
				case sf::Keyboard::Right:
					std::cout << piece[i].getOrigin().x << ", " << piece[i].getOrigin().y << std::endl;
					std::cout << piece[i].getPosition().x << ", " << piece[i].getPosition().y << std::endl;
					piece[i].rotate(90);
					//piece.setPosition(piece.getPosition().x, piece.getPosition().y + piece.getSize());
					break;
				case sf::Keyboard::Num1:
					i = 0;
					break;
				case sf::Keyboard::Num2:
					i = 1;
					break;
				case sf::Keyboard::Num3:
					i = 2;
					break;
				case sf::Keyboard::Num4:
					i = 3;
					break;
				case sf::Keyboard::Num5:
					i = 4;
					break;
				case sf::Keyboard::Num6:
					i = 5;
					break;
				case sf::Keyboard::Num7:
					i = 6;
					break;
				case sf::Keyboard::Num8:
					i = 7;
					break;
				case sf::Keyboard::Num9:
					i = 8;
					break;
				case sf::Keyboard::Enter:
					i = 100;
					break;
				}
			}


		}
		//std::cout << x << ", " << y << std::endl;
		window.clear();

		if (isMenu) 
		{
			menu.DisplayMenu(window);
			
		}
		else {

			for (int c = 0; c < 6; c++)
			{
				for (int d = 0; d < 12; d++)
				{
					window.draw(*(world.tiles[c][d]));
				}
			}
			for (int j = 0; j < 9; j++)
			{
				window.draw(piece[j]);
			}
		}
	

		window.display();
	}
	return 0;
}
