#include <SFML/Graphics.hpp>
#include "Board.h"

using sf::Vector2f; 
using sf::Color; 

int main()
{


	sf::RenderWindow window(sf::VideoMode(600, 600), "Not Genuis Cube");		

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

			window.clear();
			window.draw(board);
			window.display();
		
	}

	return 0;
}