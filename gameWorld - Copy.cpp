#include "gameWorld.h"

gameWorld::gameWorld() 
{
	gridLength = 8; 
	setNotGeniusCube();
}

void gameWorld::setNotGeniusCube()
{
	/*setPegPos();*/
	setTiles();
}

//void gameWorld::setPegPos()
//{
//	PegPos.clear();
//
//	srand((unsigned int)time(NULL));
//	
//	int x = rand() % 6 + 1;
//	int y = rand() % 6 + 1;
//	int i = 0; 
//
//	int xarr[5]{};
//	int yarr[5]{};
//
//	while (i < 7)
//	{
//		int x = rand() % 6 + 1;
//		int  y = rand() % 6 + 1;
//		
//		if (xarr[x] == 0 && yarr[y] == 0)
//		{
//			xarr[x] = 1; 
//			yarr[y] = 1; 
//
//			PegPos.push_back(sf::Vector2i(x, y));
//			i++;
//		}
//	}
//	
//}

//void gameWorld::setOccupiedPos()
//{
//	
//}

void gameWorld::setTiles()
{
	tiles.clear();

	std::vector<Board*> firstRow;
	std::vector<Board*> secondRow;
	std::vector<Board*> thirdRow;
	std::vector<Board*> fourthRow;
	std::vector<Board*> fifthRow;
	std::vector<Board*> sixthRow;

	firstRow.push_back(new Board(Vector2f(0.f, 0.f), Vector2f(100, 100), Color(99, 170, 192), true, true));
	firstRow.push_back(new Board(Vector2f(100.f, 0.f), Vector2f(100, 100), Color(40, 78, 96), false, false));
	firstRow.push_back(new Board(Vector2f(200.f, 0.f), Vector2f(100, 100), Color(40, 78, 96), false, false));
	firstRow.push_back(new Board(Vector2f(300, 0), Vector2f(100, 100), Color(40, 78, 96), false, false));
	firstRow.push_back(new Board(Vector2f(400, 0), Vector2f(100, 100), Color(40, 78, 96), false, false));
	firstRow.push_back(new Board(Vector2f(500, 0), Vector2f(100, 100), Color(40, 78, 96), false, false));
	firstRow.push_back(new Board(Vector2f(600, 0), Vector2f(100, 100), Color(0, 0, 0), false, false));
	firstRow.push_back(new Board(Vector2f(700, 0), Vector2f(100, 100), Color(0, 0, 0), false, false));
	firstRow.push_back(new Board(Vector2f(800, 0), Vector2f(100, 100), Color(0, 0, 0), false, false));
	firstRow.push_back(new Board(Vector2f(900, 0), Vector2f(100, 100), Color(0, 0, 0), false, false));
	firstRow.push_back(new Board(Vector2f(1000, 0), Vector2f(100, 100), Color(0, 0, 0), false, false));
	firstRow.push_back(new Board(Vector2f(1100, 0), Vector2f(100, 100), Color(0, 0, 0), false, false));


	secondRow.push_back(new Board(Vector2f(0.f, 100.f), Vector2f(100, 100), Color(40, 78, 96), false, false));
	secondRow.push_back(new Board(Vector2f(100, 100), Vector2f(100, 100), Color(99, 170, 192), true, true));
	secondRow.push_back(new Board(Vector2f(200, 100), Vector2f(100, 100), Color(40, 78, 96), false, false));
	secondRow.push_back(new Board(Vector2f(300, 100), Vector2f(100, 100), Color(40, 78, 96), false, false));
	secondRow.push_back(new Board(Vector2f(400, 100), Vector2f(100, 100), Color(99, 170, 192), true, true));
	secondRow.push_back(new Board(Vector2f(500, 100), Vector2f(100, 100), Color(40, 78, 96), false, false));
	secondRow.push_back(new Board(Vector2f(600, 100), Vector2f(100, 100), Color(0, 0, 0), false, false));
	secondRow.push_back(new Board(Vector2f(700, 100), Vector2f(100, 100), Color(0, 0, 0), false, false));
	secondRow.push_back(new Board(Vector2f(800, 100), Vector2f(100, 100), Color(0, 0, 0), false, false));
	secondRow.push_back(new Board(Vector2f(900, 100), Vector2f(100, 100), Color(0, 0, 0), false, false));
	secondRow.push_back(new Board(Vector2f(1000, 100), Vector2f(100, 100), Color(0, 0, 0), false, false));
	secondRow.push_back(new Board(Vector2f(1100, 100), Vector2f(100, 100), Color(0, 0, 0), false, false));

	thirdRow.push_back(new Board(Vector2f(0, 200), Vector2f(100, 100), Color(40, 78, 96), false, false));
	thirdRow.push_back(new Board(Vector2f(100, 200), Vector2f(100, 100), Color(40, 78, 96), false, false));
	thirdRow.push_back(new Board(Vector2f(200, 200), Vector2f(100, 100), Color(40, 78, 96), false, false));
	thirdRow.push_back(new Board(Vector2f(300, 200), Vector2f(100, 100), Color(40, 78, 96), false, false));
	thirdRow.push_back(new Board(Vector2f(400, 200), Vector2f(100, 100), Color(40, 78, 96), false, false));
	thirdRow.push_back(new Board(Vector2f(500, 200), Vector2f(100, 100), Color(40, 78, 96), false, false));
	thirdRow.push_back(new Board(Vector2f(600, 200), Vector2f(100, 100), Color(0, 0, 0), false, false));
	thirdRow.push_back(new Board(Vector2f(700, 200), Vector2f(100, 100), Color(0, 0, 0), false, false));
	thirdRow.push_back(new Board(Vector2f(800, 200), Vector2f(100, 100), Color(0, 0, 0), false, false));
	thirdRow.push_back(new Board(Vector2f(900, 200), Vector2f(100, 100), Color(0, 0, 0), false, false));
	thirdRow.push_back(new Board(Vector2f(1000, 200), Vector2f(100, 100), Color(0, 0, 0), false, false));
	thirdRow.push_back(new Board(Vector2f(1100, 200), Vector2f(100, 100), Color(0, 0, 0), false, false));



	fourthRow.push_back(new Board(Vector2f(0, 300), Vector2f(100, 100), Color(40, 78, 96), false, false));
	fourthRow.push_back(new Board(Vector2f(100, 300), Vector2f(100, 100), Color(40, 78, 96), false, false));
	fourthRow.push_back(new Board(Vector2f(200, 300), Vector2f(100, 100), Color(99, 170, 192), true, true));
	fourthRow.push_back(new Board(Vector2f(300, 300), Vector2f(100, 100), Color(40, 78, 96), false, false));
	fourthRow.push_back(new Board(Vector2f(400, 300), Vector2f(100, 100), Color(40, 78, 96), false, false));
	fourthRow.push_back(new Board(Vector2f(500, 300), Vector2f(100, 100), Color(40, 78, 96), false, false));
	fourthRow.push_back(new Board(Vector2f(600, 300), Vector2f(100, 100), Color(0, 0, 0), false, false));
	fourthRow.push_back(new Board(Vector2f(700, 300), Vector2f(100, 100), Color(0, 0, 0), false, false));
	fourthRow.push_back(new Board(Vector2f(800, 300), Vector2f(100, 100), Color(0, 0, 0), false, false));
	fourthRow.push_back(new Board(Vector2f(900, 300), Vector2f(100, 100), Color(0, 0, 0), false, false));
	fourthRow.push_back(new Board(Vector2f(1000, 300), Vector2f(100, 100), Color(0, 0, 0), false, false));
	fourthRow.push_back(new Board(Vector2f(1100, 300), Vector2f(100, 100), Color(0, 0, 0), false, false));
	

	fifthRow.push_back(new Board(Vector2f(0, 400), Vector2f(100, 100), Color(40, 78, 96), false, false));
	fifthRow.push_back(new Board(Vector2f(100, 400), Vector2f(100, 100), Color(40, 78, 96), false, false));
	fifthRow.push_back(new Board(Vector2f(200, 400), Vector2f(100, 100), Color(40, 78, 96), false, false));
	fifthRow.push_back(new Board(Vector2f(300, 400), Vector2f(100, 100), Color(99, 170, 192), true, true));
	fifthRow.push_back(new Board(Vector2f(400, 400), Vector2f(100, 100), Color(99, 170, 192), true, true));
	fifthRow.push_back(new Board(Vector2f(500, 400), Vector2f(100, 100), Color(40, 78, 96), false, false));
	fifthRow.push_back(new Board(Vector2f(600, 400), Vector2f(100, 100), Color(0, 0, 0), false, false));
	fifthRow.push_back(new Board(Vector2f(700, 400), Vector2f(100, 100), Color(0, 0, 0), false, false));
	fifthRow.push_back(new Board(Vector2f(800, 400), Vector2f(100, 100), Color((0, 0, 0)), false, false));
	fifthRow.push_back(new Board(Vector2f(900, 400), Vector2f(100, 100), Color((0, 0, 0)), false, false));
	fifthRow.push_back(new Board(Vector2f(1000, 400), Vector2f(100, 100), Color(0, 0, 0), false, false));
	fifthRow.push_back(new Board(Vector2f(1100, 400), Vector2f(100, 100), Color(0, 0, 0), false, false));

	sixthRow.push_back(new Board(Vector2f(0, 500), Vector2f(100, 100), Color(40, 78, 96), false, false));
	sixthRow.push_back(new Board(Vector2f(100, 500), Vector2f(100, 100), Color(40, 78, 96), false, false));
	sixthRow.push_back(new Board(Vector2f(200, 500), Vector2f(100, 100), Color(40, 78, 96), false, false));
	sixthRow.push_back(new Board(Vector2f(300, 500), Vector2f(100, 100), Color(40, 78, 96), false, false));
	sixthRow.push_back(new Board(Vector2f(400, 500), Vector2f(100, 100), Color(99, 170, 192), true, true));
	sixthRow.push_back(new Board(Vector2f(500, 500), Vector2f(100, 100), Color(40, 78, 96), false, false));
	sixthRow.push_back(new Board(Vector2f(600, 500), Vector2f(100, 100), Color(0, 0, 0), false, false));
	sixthRow.push_back(new Board(Vector2f(700, 500), Vector2f(100, 100), Color(0, 0, 0), false, false));
	sixthRow.push_back(new Board(Vector2f(800, 500), Vector2f(100, 100), Color(0, 0, 0), false, false));
	sixthRow.push_back(new Board(Vector2f(900, 500), Vector2f(100, 100), Color(0, 0, 0), false, false));
	sixthRow.push_back(new Board(Vector2f(1000, 500), Vector2f(100, 100), Color(0, 0, 0), false, false));
	sixthRow.push_back(new Board(Vector2f(1100, 500), Vector2f(100, 100), Color(0, 0, 0), false, false));


	tiles.push_back(firstRow);
	tiles.push_back(secondRow);
	tiles.push_back(thirdRow);
	tiles.push_back(fourthRow);
	tiles.push_back(fifthRow);
	tiles.push_back(sixthRow);


}
