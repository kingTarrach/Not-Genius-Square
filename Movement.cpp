
if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
{
	//cout<< "Left mouse button"<<endl;
	////cout << sf::Mouse::getPosition().x << endl;
	//cout << sf::Mouse::getPosition(window).x << endl;
	for (int i = 0; i < 9; i++)
	{
		if (piecesArray[i].getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window))))
		{
			cout << "Clicked on: square" << i << endl;
			piecesArray[i].isOccupied = true;
		}
	}
}

for (int i = 0; i < 9; i++)
{
	if (piecesArray[i].isOccupied = true)
	{
		switch i:
		{
		case 1:
		{
			switch (event.type)
			{
			case sf::Event::KeyPressed:
			{
				switch (event.key.code)
				{
				case sf::Keyboard::W:
				{
					piece1.MoveUp();
					Sleep(150);
					break;
				}
				case sf::Keyboard::S:
				{
					piece1.MoveDown();
					Sleep(150);
					break;
				}
				case sf::Keyboard::A:
				{
					piece1.MoveLeft();
					Sleep(150);
					break;
				}
				case sf::Keyboard::D:
				{
					piece1.MoveRight();
					Sleep(150);
					break;
				}
				case sf::Keyboard::Enter:
				{
					piece1.isOccupied = false;
					break;
				}
				}
			}
			}
		}
		case 2:
		{
			switch (event.type)
			{
			case sf::Event::KeyPressed:
			{
				switch (event.key.code)
				{
				case sf::Keyboard::W:
				{
					piece2.MoveUp();
					Sleep(150);
					break;
				}
				case sf::Keyboard::S:
				{
					piece2.MoveDown();
					Sleep(150);
					break;
				}
				case sf::Keyboard::A:
				{
					piece2.MoveLeft();
					Sleep(150);
					break;
				}
				case sf::Keyboard::D:
				{
					piece2.MoveRight();
					Sleep(150);
					break;
				}
				case sf::Keyboard::Enter:
				{
					piece2.isOccupied = false;
					break;
				}
				}

			}
			}
		}
		case 3:
		{
			switch (event.type)
			{
			case sf::Event::KeyPressed:
			{
				switch (event.key.code)
				{
				case sf::Keyboard::W:
				{
					piece3.MoveUp();
					Sleep(150);
					break;
				}
				case sf::Keyboard::S:
				{
					piece3.MoveDown();
					Sleep(150);
					break;
				}
				case sf::Keyboard::A:
				{
					piece3.MoveLeft();
					Sleep(150);
					break;
				}
				case sf::Keyboard::D:
				{
					piece3.MoveRight();
					Sleep(150);
					break;
				}
				case sf::Keyboard::Enter:
				{
					piece3.isOccupied = false;
					break;
				}
				}
			}
			}
		}
		case 4:
		{
			switch (event.type)
			{
			case sf::Event::KeyPressed:
			{
				switch (event.key.code)
				{
				case sf::Keyboard::W:
				{
					piece4.MoveUp();
					Sleep(150);
					break;
				}
				case sf::Keyboard::S:
				{
					piece4.MoveDown();
					Sleep(150);
					break;
				}
				case sf::Keyboard::A:
				{
					piece4.MoveLeft();
					Sleep(150);
					break;
				}
				case sf::Keyboard::D:
				{
					piece4.MoveRight();
					Sleep(150);
					break;
				}
				case sf::Keyboard::Enter:
				{
					piece4.isOccupied = false;
					break;
				}
				}
			}
			}
		}
		case 5:
		{
			switch (event.type)
			{
			case sf::Event::KeyPressed:
			{
				switch (event.key.code)
				{
				case sf::Keyboard::W:
				{
					piece5.MoveUp();
					Sleep(150);
					break;
				}
				case sf::Keyboard::S:
				{
					piece5.MoveDown();
					Sleep(150);
					break;
				}
				case sf::Keyboard::A:
				{
					piece5.MoveLeft();
					Sleep(150);
					break;
				}
				case sf::Keyboard::D:
				{
					piece5.MoveRight();
					Sleep(150);
					break;
				}
				case sf::Keyboard::Enter:
				{
					piece5.isOccupied = false;
					break;
				}
				}
			}
			}
		}
		case 6:
		{
			switch (event.type)
			{
			case sf::Event::KeyPressed:
			{
				switch (event.key.code)
				{
				case sf::Keyboard::W:
				{
					piece6.MoveUp();
					Sleep(150);
					break;
				}
				case sf::Keyboard::S:
				{
					piece6.MoveDown();
					Sleep(150);
					break;
				}
				case sf::Keyboard::A:
				{
					piece6.MoveLeft();
					Sleep(150);
					break;
				}
				case sf::Keyboard::D:
				{
					piece6.MoveRight();
					Sleep(150);
					break;
				}
				case sf::Keyboard::Enter:
				{
					piece6.isOccupied = false;
					break;
				}
				}
			}
			}
		}
		case 7:
		{
			switch (event.type)
			{
			case sf::Event::KeyPressed:
			{
				switch (event.key.code)
				{
				case sf::Keyboard::W:
				{
					piece7.MoveUp();
					Sleep(150);
					break;
				}
				case sf::Keyboard::S:
				{
					piece7.MoveDown();
					Sleep(150);
					break;
				}
				case sf::Keyboard::A:
				{
					piece7.MoveLeft();
					Sleep(150);
					break;
				}
				case sf::Keyboard::D:
				{
					piece7.MoveRight();
					Sleep(150);
					break;
				}
				case sf::Keyboard::Enter:
				{
					piece7.isOccupied = false;
					break;
				}
				}

			}
			}
		}
		case 8:
		{
			switch (event.type)
			{
			case sf::Event::KeyPressed:
			{
				switch (event.key.code)
				{
				case sf::Keyboard::W:
				{
					piece8.MoveUp();
					Sleep(150);
					break;
				}
				case sf::Keyboard::S:
				{
					piece8.MoveDown();
					Sleep(150);
					break;
				}
				case sf::Keyboard::A:
				{
					piece8.MoveLeft();
					Sleep(150);
					break;
				}
				case sf::Keyboard::D:
				{
					piece8.MoveRight();
					Sleep(150);
					break;
				}
				case sf::Keyboard::Enter:
				{
					piece8.isOccupied = false;
					break;
				}
				}
			}
			}
		}

		case 9:
		{
			switch (event.type)
			{
			case sf::Event::KeyPressed:
			{
				switch (event.key.code)
				{
				case sf::Keyboard::W:
				{
					piece9.MoveUp();
					Sleep(150);
					break;
				}
				case sf::Keyboard::S:
				{
					piece9.MoveDown();
					Sleep(150);
					break;
				}
				case sf::Keyboard::A:
				{
					piece9.MoveLeft();
					Sleep(150);
					break;
				}
				case sf::Keyboard::D:
				{
					piece9.MoveRight();
					Sleep(150);
					break;
				}
				case sf::Keyboard::Enter:
				{
					piece9.isOccupied = false;
					break;
				}
				}
			}
			}
		}
		}
	}
}



