#include <SFML/Graphics.hpp>
#include <iostream>
#include <Windows.h>

#include "menu.h"
#include "myPiece.h"
using sf::Vector2f;
using sf::Color;

int main()
{

	bool movingPiece = false;
	sf::Vector2u windowSize(1000, 800);
	sf::RenderWindow window(sf::VideoMode(windowSize.x, windowSize.y), "Not Genuis Cube");
	myPiece piece;
	piece.load(6, sf::Vector2f(50, 50), 50);
	std::cout << piece.getOrigin().x << ", " << piece.getOrigin().y << std::endl;
	std::cout << piece.getPosition().x << ", " << piece.getPosition().y << std::endl;
	
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event)) {

			if (event.type == sf::Event::Closed) {
				window.close();
			}
			if (event.type == sf::Event::KeyPressed) {
				switch (event.key.code) {
				case sf::Keyboard::A:
					piece.setPosition(piece.getPosition().x - piece.getSize(), piece.getPosition().y);
					std::cout << piece.getOrigin().x << ", " << piece.getOrigin().y << std::endl;
					std::cout << piece.getPosition().x << ", " << piece.getPosition().y << std::endl;
					break;
				case sf::Keyboard::D:
					piece.setPosition(piece.getPosition().x + piece.getSize(), piece.getPosition().y);
					std::cout << piece.getOrigin().x << ", " << piece.getOrigin().y << std::endl;
					std::cout << piece.getPosition().x << ", " << piece.getPosition().y << std::endl;
					break;
				case sf::Keyboard::W:
					piece.setPosition(piece.getPosition().x, piece.getPosition().y - piece.getSize());
					std::cout << piece.getOrigin().x << ", " << piece.getOrigin().y << std::endl;
					std::cout << piece.getPosition().x << ", " << piece.getPosition().y << std::endl;
					break;
				case sf::Keyboard::S:
					piece.setPosition(piece.getPosition().x, piece.getPosition().y + piece.getSize());
					std::cout << piece.getOrigin().x << ", " << piece.getOrigin().y << std::endl;
					std::cout << piece.getPosition().x << ", " << piece.getPosition().y << std::endl;
					break;
				}
			}
			if (event.type == sf::Event::KeyReleased) {
				switch (event.key.code) {
				case sf::Keyboard::Left:
					std::cout << piece.getOrigin().x << ", " << piece.getOrigin().y << std::endl;
					std::cout << piece.getPosition().x << ", " << piece.getPosition().y << std::endl;
					piece.rotate(270);
					//piece.setPosition(piece.getPosition().x + piece.getSize(), piece.getPosition().y + piece.getSize());
					break;
				case sf::Keyboard::Right:
					std::cout << piece.getOrigin().x << ", " << piece.getOrigin().y << std::endl;
					std::cout << piece.getPosition().x << ", " << piece.getPosition().y << std::endl;
					piece.rotate(90);
					//piece.setPosition(piece.getPosition().x, piece.getPosition().y + piece.getSize());
					break;
				}
			}
		}
		
		//std::cout << x << ", " << y << std::endl;
		window.clear();
		

		//Get the mouse position relative to screen and convert to vector2f
		sf::Vector2i mousePosition = sf::Mouse::getPosition(window);
		sf::Vector2f worldPosition = window.mapPixelToCoords(mousePosition);

		//std::cout << piece.getOrigin().x << ", " << piece.getOrigin().y << std::endl;
		//std::cout << mousePosition.x << ", " << mousePosition.y << std::endl;
		//std::cout << piece.getPosition().x << ", " << piece.getPosition().y << std::endl;

		

		if (movingPiece) {
			piece.setPosition(piece.newPosition(worldPosition));
		}
		window.draw(piece);
		window.display();		
		
	}
	return 0;
}