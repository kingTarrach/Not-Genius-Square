#include "GameWorld.h"

gameWorld::gameWorld() {
	gridLength = 8;
	//setNotGeniusCube();
}


//void setNotGeniusCube()
//{
//	setPegPos();
//	gameWorld::setOccupiedPos();
//	setpieces();
//}

void gameWorld::setPegPos()
{
	//we can do this using rand-- just need know how many pegs
	PegPos.clear();
	PegPos.push_back(sf::Vector2i(0, 2));
	PegPos.push_back(sf::Vector2i(6, 0));
	PegPos.push_back(sf::Vector2i(2, 7));


}
void gameWorld::setOccupiedPos()
{
	//here I need to add a method to continuously update the occupuied
}
void gameWorld::setpieces()
{

}

void gameWorld::setTiles()
{
	tiles.clear();
	std::vector<Board*> firstRow;
	std::vector<Board*> secondRow;
	std::vector<Board*> thirdRow;
	std::vector<Board*> fourthRow;
	std::vector<Board*> fifthRow;
	std::vector<Board*> sixthRow;
	firstRow.push_back(new Board(Vector2f(0, 0), Vector2f(100, 100), Color::Magenta, false, false));
	firstRow.push_back(new Board(Vector2f(0, 0), Vector2f(200, 200), Color::Cyan, false, false));
	firstRow.push_back(new Board(Vector2f(0, 0), Vector2f(300, 300), Color::Magenta, false, false));
	firstRow.push_back(new Board(Vector2f(0, 0), Vector2f(400, 400), Color::Cyan, false, false));
	firstRow.push_back(new Board(Vector2f(0, 0), Vector2f(500, 500), Color::Magenta, false, false));
	firstRow.push_back(new Board(Vector2f(0, 0), Vector2f(600, 600), Color::Cyan, false, false));

	secondRow.push_back(new Board(Vector2f(0, 0), Vector2f(100, 100), Color::Magenta, false, false));
	secondRow.push_back(new Board(Vector2f(0, 0), Vector2f(200, 200), Color::Cyan, false, false));
	secondRow.push_back(new Board(Vector2f(0, 0), Vector2f(300, 300), Color::Magenta, false, false));
	secondRow.push_back(new Board(Vector2f(0, 0), Vector2f(400, 400), Color::Cyan, false, false));
	secondRow.push_back(new Board(Vector2f(0, 0), Vector2f(500, 500), Color::Magenta, false, false));
	secondRow.push_back(new Board(Vector2f(0, 0), Vector2f(600, 600), Color::Cyan, false, false));

	Board game[6][6];
}

void gameWorld::initBoard()
{
	float xCord = 0.0;
	float yCord = 0.0;
	for (int i = 0; i < 6; ++i)
	{
		xCord = 0.0;
		for (int z = 0; z < 6; ++z)
		{
			sf::Vector2f location(xCord, yCord);
			//game[i][z].setOrigin(location);
			game[i][z].setPosition(location);
			game[i][z].setFillColor(sf::Color::Black);
			game[i][z].setOutlineThickness(-5);
			game[i][z].setOutlineColor(sf::Color::Yellow);
			game[i][z].setSize(sf::Vector2f(100, 100));
			xCord = xCord + 100;
			game[i][z].hasInit = true;
		}
		yCord = yCord + 100;
	}
}

void gameWorld::initShapes()
{
	int xCord = 0;
	for (int i = 0; i < 9; ++i)
	{
		shapes[i].setShapeNum(i);
		shapes[i].loadTexture(i);

		shapes[i].setPosition(Vector2f(xCord, 1000));
		shapes[i].setScale(Vector2f(.5, .5));
		//shapes[i].setOrigin(Vector2f(xCord, 750));
		xCord = xCord + 150;
	}
}

Board gameWorld::getCell(int x, int y)
{
	return game[x][y];
}

BaseShape gameWorld::getSprite(int x)
{
	return shapes[x];
}

sf::Vector2f gameWorld::getLocation()
{
	return this->location;
}

void gameWorld::genBlock()
{
	int genBlock = 0;
	while (genBlock < 7)
	{
		int X = rand()%6;
		int Y = rand()%6;
		if (game[X][Y].isPeg == false)
		{
			game[X][Y].setFillColor(sf::Color::Yellow);
			++genBlock;
			game[X][Y].setisPeg(true);
		}
	}
}
