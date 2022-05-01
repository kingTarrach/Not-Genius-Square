#pragma once

#include <SFML/Graphics.hpp>
#include "Board.h"
#include <vector>


class gameWorld 
{
	
public: 
	gameWorld();
	
	std::vector< std::vector <Board*> > tiles; 
	int gridLength; 

	void setNotGeniusCube();
	/*void setPegPos();*/
	//void setOccupiedPos();
	void setTiles();

private:
	std::vector <sf::Vector2i> PegPos;
	std::vector <sf::Vector2i> OccupiedPos;
	std::vector <sf::Vector2i> pieces;
};
