#include "movement.h"
/*
Here is the movement code for running the in the apllication,
It has the code for clicking and movement using wasd
NEEEDS:
	rotation 
	error checking for bounds, may need to include the board.h to pass the game board into the function
	Test the rest of the shapes need to be added
*/

using std::cout;
using std::endl;

bool collisionOnPlace(square* arr, int index);

void square:: moveSquares()
{
	const float gridSize = 50.f;
	const float moveSpeed = 50.f;
	sf::Vector2f velocity;

	sf::RenderWindow window(sf::VideoMode(600, 600), "SFML WORKS!");
	window.setFramerateLimit(120);
	square square1(sf::Vector2f(0, 0), sf::Vector2f(gridSize, gridSize), sf::Color::Green);
	square square2(sf::Vector2f(0, 50), sf::Vector2f(gridSize, gridSize), sf::Color::Magenta);
	square array[2] = { square1, square2 };

	float dt;
	sf::Clock dt_clock;



	while (window.isOpen())
	{
		dt = dt_clock.restart().asSeconds();

		sf::Event event;

		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			//cout<< "Left mouse button"<<endl;
			////cout << sf::Mouse::getPosition().x << endl;
			//cout << sf::Mouse::getPosition(window).x << endl;
			for (int i = 0; i < 2; i++)
			{
				if (array[i].getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window))))
				{
					cout << "Clicked on: square" << i << endl;
					array[i].moveable = true;
				}
			}
		}

		for (int i = 0; i < 2; i++)
		{
			if (array[i].moveable == true)
			{
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
				{
					array[i].move(0, -50);
					Sleep(100);
				}
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
				{
					array[i].move(-50, 0);
					Sleep(150);
				}
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
				{
					array[i].move(0, 50);
					Sleep(150);
				}
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
				{
					array[i].move(50, 0);
					Sleep(150);
				}
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))
				{
					//check piece function from abstract class
					bool check = collisionOnPlace(array, i);
					if (check == false)
					{
						array[i].moveable = false;
						Sleep(150);
					}
				}
			}
		}

		window.clear();

		for (int i = 0; i < 2; i++)
		{
			window.draw(array[i]);
		}


		window.display();
	}
}

bool collisionOnPlace(square* arr, int index)
{
	for (int i = 0; i < 2; i++)
	{
		if (i != index && arr[index].getGlobalBounds().intersects(arr[i].getGlobalBounds())) //change to checking whole board for isOccupied()
		{
			cout << "Cannot place here, plot occupied" << endl;
			return true;
		}
	}
	return false;
}