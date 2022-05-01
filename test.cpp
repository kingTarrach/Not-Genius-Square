#include "test.h"

void Test::testClickLoc()
{
	sf::RenderWindow window(sf::VideoMode(600, 600), "Test");

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

			if (event.type == sf::Event::MouseButtonPressed)
			{
				if (event.mouseButton.button == sf::Mouse::Left)
				{
					std::cout << sf::Mouse::getPosition().x << "," << sf::Mouse::getPosition().y << std::endl;
				}
			}
		}

	
		window.clear();
		window.display();
	}
}

void Test::testShapeCoor()
{
	sf::RenderWindow window(sf::VideoMode(600, 600), "Test");
	myPiece piece;
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

		}
		std::cout << piece.getPosition().x << "," << piece.getPosition().y << std::endl;

		window.clear();
		window.draw(piece);
		window.display();
	}
	

	std::cout << piece.getPosition().x << "," << piece.getPosition().y << std::endl;
}

void Test::testRotate()
{
	sf::RenderWindow window(sf::VideoMode(600, 600), "Test");
	myPiece piece;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
	
		}
		piece.rotate(270);
		Sleep(150);
		piece.rotate(90);

		window.clear();
		window.draw(piece);
		window.display();
	}
	

	
}

void Test::testInput()
{
	sf::RenderWindow window(sf::VideoMode(600, 600), "Test");
	std::string chars;
	chars.reserve(100);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

			else if (event.type == sf::Event::KeyPressed) {
				const sf::Keyboard::Key keycode = event.key.code;
				if (keycode >= sf::Keyboard::A && keycode <= sf::Keyboard::Z) {
					char chr = static_cast<char>(keycode - sf::Keyboard::A + 'a');
					chars.push_back(chr);
				}
			}
		}
		std::cout << chars << std::endl;


		window.clear();
		window.display();
	}

}

void Test::testShapeMove()
{
	sf::RenderWindow window(sf::VideoMode(600, 600), "Test");
	myPiece piece;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

			if (event.type == sf::Event::KeyPressed)
			{
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
		}


		window.clear();
		window.draw(piece);
		window.display();
	}
}