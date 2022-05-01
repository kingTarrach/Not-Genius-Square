#include <SFML/Graphics.hpp>
#include <iostream>
#include <Windows.h>

#include "rules.h"
#include "menu.h"
#include "myPiece.h"
using sf::Vector2f;
using sf::Color;

int main()
{

	bool isMenu = true;
	bool isRules = false; 

	Menu menu(400, 500);
	Rules rules(400, 500);
	sf::Text text;
	sf::Font font;
	if (!font.loadFromFile("DEBROSEE.ttf"))
	{
		std::cout << "FUKKKKK";
	}


	text.setFont(font);
	text.setString("PIECES");
	text.setCharacterSize(90);
	text.setFillColor(sf::Color(249, 155, 69));
	text.setStyle(sf::Text::Bold);
	text.setPosition(750.f, 0.f);
	

	bool movingPiece = false;
	sf::Vector2u windowSize(1000, 800);
	sf::RenderWindow window(sf::VideoMode(windowSize.x, windowSize.y), "Not Genius Cube");
	sf::RenderWindow Rules(sf::VideoMode(800, 800), "Rules");

	myPiece piece;
	piece.load(9, 50);
	piece.setRelativePosition(sf::Vector2f(50, 50));
	
	while (window.isOpen() && Rules.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event)) {

			if (event.type == sf::Event::Closed) {
				window.close();
			}

			if (event.type == sf::Event::KeyReleased) {
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
		}
			if (event.type == sf::Event::KeyPressed && !isMenu) {
				switch (event.key.code) {
				case sf::Keyboard::A:
					piece.setPosition(piece.getPosition().x - piece.getSize(), piece.getPosition().y);
					std::cout << piece.getPosition().x << ", " << piece.getPosition().y << std::endl;
					break;
				case sf::Keyboard::D:
					piece.setPosition(piece.getPosition().x + piece.getSize(), piece.getPosition().y);
					std::cout << piece.getPosition().x << ", " << piece.getPosition().y << std::endl;
					break;
				case sf::Keyboard::W:
					piece.setPosition(piece.getPosition().x, piece.getPosition().y - piece.getSize());
					std::cout << piece.getPosition().x << ", " << piece.getPosition().y << std::endl;
					break;
				case sf::Keyboard::S:
					piece.setPosition(piece.getPosition().x, piece.getPosition().y + piece.getSize());
					std::cout << piece.getPosition().x << ", " << piece.getPosition().y << std::endl;
					break;
				}
			}
			if (event.type == sf::Event::KeyReleased) {
				switch (event.key.code) {
				case sf::Keyboard::Left:
					if (!isMenu) {
						std::cout << piece.getPosition().x << ", " << piece.getPosition().y << std::endl;
						piece.rotate(270);
					}
					break;
				case sf::Keyboard::Right:
					if (!isMenu) {
						std::cout << piece.getPosition().x << ", " << piece.getPosition().y << std::endl;
						piece.rotate(90);
					}
					break;
				case sf::Keyboard::Up:
					if (isMenu) {

					}
				case sf::Keyboard::Num1:
					std::cout << piece.isOverlapping(sf::Vector2f(125, 125)) << std::endl;
					break;
				}
			}
		
			
		//std::cout << x << ", " << y << std::endl;
		window.clear();
		

		//Get the mouse position relative to screen and convert to vector2f
		sf::Vector2i mousePosition = sf::Mouse::getPosition(window);
		sf::Vector2f worldPosition = window.mapPixelToCoords(mousePosition);		

		if (movingPiece) {
			piece.setPosition(piece.newPosition(worldPosition));
		}

		if (isMenu) {
			menu.DisplayMenu(window);
			Sleep(150);
		}
		else {
			window.draw(piece);
		}

		window.display();		
		
	}
	return 0;
}