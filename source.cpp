#include <SFML/Graphics.hpp>
#include <time.h>
#include "Shape.h"
#include "BaseShape.h"
#include "Board.h"
#include "GameWorld.h"

using sf::Vector2f;
using std::cout;
using std::endl;
int main()
{
	srand(time(NULL));
	float dt;
	sf::Clock dt_clock;
	sf::RenderWindow window(sf::VideoMode(1500, 1500),"Title");
	window.setFramerateLimit(60);
	sf::Event event;
	BaseShape pieces[9];
	gameWorld world;
	world.initBoard();
	world.genBlock();
	world.initShapes();
	//if(world.game[6][6])
	while (window.isOpen())
	{
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			//cout<< "Left mouse button"<<endl;
			////cout << sf::Mouse::getPosition().x << endl;
			//cout << sf::Mouse::getPosition(window).x << endl;
			for (int i = 0; i < 9; i++)
			{
				if (world.getSprite(i).Sprite::getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window))))
				{
					cout << "Clicked on piece" << i << endl;
					world.getSprite(i).setMove(true);
				}
			}
			for (int i = 0; i < 9; ++i)
			{
				// this is where displaying the shape on the board should go
				//shapes have bool moveble and this should be checked, its updated in code above

				//then another while statement that moves the colored parts of array around until user hits enter
				//then error checking
			}
		}
		window.clear();
		for (int i = 0; i < 6; ++i)
		{
			for (int z = 0; z < 6; ++z)
			{
				window.draw(world.getCell(i,z));
				//std::cout << "Here" << i << z << std::endl;
			}
			
		}
		for (int i = 0; i < 9; ++i)
		{
			window.draw(world.getSprite(i));
		}
		/*for (int i = 0; i < 9; ++i)
		{
			pieces[i].loadTexture(i);
			pieces[i].Sprite::scale(sf::Vector2f(.5, .5));
			window.draw(pieces[i]);
		}*/
		window.display();
	}
	return 0;
}