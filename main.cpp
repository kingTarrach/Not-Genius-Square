#include <SFML/Graphics.hpp>
#include "gameWorld.h"
#include "Board.h"
#include <iostream>

#include "menu.h"
using sf::Vector2f; 
using sf::Color; 

int main()
{
	gameWorld world = gameWorld();
	
	//Board board(Vector2f(0, 0), Vector2f(50, 100), sf::Color::Magenta, false, false);

	sf::RenderWindow window(sf::VideoMode(1000, 600), "Not Genuis Cube");	
	Menu menu(500, 500);
	sf::Text text;
	
	sf::Font font;
	if(!font.loadFromFile("Debrosee-ALPnL.ttf"))
	{
		std::cout << "FUKKKKK"; 
	}


	text.setFont(font);
	text.setString("PIECES");
	text.setCharacterSize(90);
	text.setFillColor(sf::Color(249, 155, 69));
	text.setStyle(sf::Text::Bold);
	text.setPosition(750.f, 0.f);





	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		switch (event.type)
		{
		case sf::Event::KeyReleased:
			switch (event.key.code)
			{
			case sf::Keyboard::Up:
				menu.MoveUp();
				break;
			case sf::Keyboard::Down:
				menu.MoveDown();
				break;
			case sf::Keyboard::Return:
				switch (menu.GetPressedItem())
				{
				case 0:
					break;
				case 1:
					window.clear();

		for (int c = 0; c < 6; c++) {
			for (int d = 0; d < 10; d++) {
				window.draw(*(world.tiles[c][d]));
				}
		}

		window.display();

	}
					break; 
				case 2:
					std::cout << "rules"; 
					break; 
				case 3:
						
					break; 

				}
				
			}
			break;
		}

			window.clear();

			menu.DisplayMenu(window);
	
				
			window.display();
		
	

	return 0;
}