#include "gameWorld.h"

gameWorld::gameWorld() {
	gridLength = 8; 
	setNotGeniusCube();

}


void setNotGeniusCube()
{
	setPegPos();
	setOccupiedPos();
	setpieces();
}

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
	firstRow.push_back(new Board(Vector2f(0, 0), Vector2f(100, 100), Color::Magenta, false, false));
	firstRow.push_back(new Board(Vector2f(0, 0), Vector2f(200, 200), Color::Cyan, false, false));
	firstRow.push_back(new Board(Vector2f(0, 0), Vector2f(300, 300), Color::Magenta, false, false));
	firstRow.push_back(new Board(Vector2f(0, 0), Vector2f(400, 400), Color::Cyan, false, false));
	firstRow.push_back(new Board(Vector2f(0, 0), Vector2f(500, 500), Color::Magenta, false, false));
	firstRow.push_back(new Board(Vector2f(0, 0), Vector2f(600, 600), Color::Cyan, false, false));






}
