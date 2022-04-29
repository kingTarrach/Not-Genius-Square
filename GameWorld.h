#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Board.h"
#include "BaseShape.h"
#include <vector>
class gameWorld {

public:
	std::vector< std::vector <Board*> > tiles;
	int gridLength;
	gameWorld();

	//void setNotGeniusCube();
	void setPegPos();
	void setOccupiedPos();
	void setpieces();
	void setTiles();
	void initBoard();
	void initShapes();
	Board getCell(int x, int y);
	BaseShape getSprite(int x);
	sf::Vector2f getLocation();
	void genBlock();

private:
	Board game[6][6];
	BaseShape shapes[9];
	std::vector <sf::Vector2i> PegPos;
	std::vector <sf::Vector2i> OccupiedPos;
	std::vector <sf::Vector2i> pieces;
	bool hasInit = false;
	sf::Vector2f location;
};