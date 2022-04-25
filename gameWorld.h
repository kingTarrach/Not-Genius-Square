#pragma once

#include <SFML/Graphics.hpp>
#include "Board.h"
#include <vector>


class gameWorld {
	
public: 
	std::vector< std::vector <Board*> > tiles; 
	int gridLength; 
	gameWorld();

	void setNotGeniusCube();
	void setPegPos();
	void setOccupiedPos();
	void setpieces();
	void setTiles();

private:
	std::vector <sf::Vector2i> PegPos;
	std::vector <sf::Vector2i> OccupiedPos;
	std::vector <sf::Vector2i> pieces;
};
