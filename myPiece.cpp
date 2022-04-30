
#include "myPiece.h"

void myPiece::load(int pieceNumber, sf::Vector2f position, int size) {

	piece.setPrimitiveType(sf::TrianglesStrip);

	this->setPosition(position);
	sf::Vector2f newPosition;
	this->isRotated = false;
	this->size = size;
	this->shapeNumber = pieceNumber;

	switch (pieceNumber) {
	case 1: 
		//Set Vertices
		piece.resize(5);

		//Set the overall bounds for object
		this->generalBounds.x = size / 2;
		this->generalBounds.y = size / 2;

		//Set origin of the object
		this->setOrigin(50, 50);

		//Set each vertex in the matrix
		makeBox(size, 0, this->getPosition());
		break;
	case 2:
		piece.resize(11);
		this->generalBounds.x = size / 2;
		this->generalBounds.y = size;

		this->setOrigin(size, size*2);
		
		makeBox(size, 0, this->getPosition());
		piece[5].position = sf::Vector2f(this->getPosition().x, this->getPosition().y + size);
		makeBox(size, 6, piece[5].position);
		break;
	case 3:
		piece.resize(17);
		this->generalBounds.x = size / 2;
		this->generalBounds.y = size * 1.5;

		this->setOrigin(size, size*3);

		makeBox(size, 0, position);
		piece[5].position = sf::Vector2f(this->getPosition().x, this->getPosition().y + size);
		makeBox(size, 6, piece[5].position);
		piece[11].position = sf::Vector2f(this->getPosition().x, this->getPosition().y + (2 * size));
		makeBox(size, 12, piece[11].position);
		break;
	case 4:
		piece.resize(23);
		this->generalBounds.x = size / 2;
		this->generalBounds.y = size * 2;

		
		this->setOrigin(size, size*4);

		makeBox(size, 0, this->getPosition());
		piece[5].position = sf::Vector2f(this->getPosition().x, this->getPosition().y + size);
		makeBox(size, 6, piece[5].position);
		piece[11].position = sf::Vector2f(this->getPosition().x, this->getPosition().y + (2 * size));
		makeBox(size, 12, piece[11].position);
		piece[17].position = sf::Vector2f(this->getPosition().x, this->getPosition().y + (3 * size));
		makeBox(size, 18, piece[17].position);
		break;
	case 5:
		piece.resize(23);
		this->generalBounds.x = size;
		this->generalBounds.y = size;

		
		this->setOrigin(size*2, size*2);

		makeBox(size, 0, this->getPosition());
		piece[5].position = sf::Vector2f(this->getPosition().x + size, this->getPosition().y);
		makeBox(size, 6, piece[5].position);
		piece[11].position = sf::Vector2f(this->getPosition().x + size, this->getPosition().y + size);
		makeBox(size, 12, piece[11].position);
		piece[17].position = sf::Vector2f(this->getPosition().x, this->getPosition().y + size);
		makeBox(size, 18, piece[17].position);
		break;
	case 6:
		piece.resize(24);
		this->generalBounds.x = size;
		this->generalBounds.y = size * 1.5;

		this->setOrigin(size, size*2);

		makeBox(size, 0, this->getPosition());
		piece[5].position = sf::Vector2f(this->getPosition().x, this->getPosition().y + size);
		makeBox(size, 6, piece[5].position);
		piece[11].position = sf::Vector2f(this->getPosition().x, this->getPosition().y + (size * 2));
		makeBox(size, 12, piece[11].position);
		piece[17].position = sf::Vector2f(this->getPosition().x + size, this->getPosition().y + (size * 2));
		piece[18].position = sf::Vector2f(this->getPosition().x + size, this->getPosition().y + size);
		makeBox(size, 19, piece[18].position);
		break;
	case 7:
		piece.resize(23);
		this->generalBounds.x = size;
		this->generalBounds.y = size * 1.5;

		this->setOrigin(size, size*2);

		makeBox(size, 0, this->getPosition());
		piece[5].position = sf::Vector2f(this->getPosition().x, this->getPosition().y + size);
		makeBox(size, 6, piece[5].position);
		piece[11].position = sf::Vector2f(this->getPosition().x + size, this->getPosition().y + size);
		makeBox(size, 12, piece[11].position);
		piece[17].position = sf::Vector2f(this->getPosition().x + size, this->getPosition().y + (size * 2));
		makeBox(size, 18, piece[17].position);
		break;
	case 8:
		piece.resize(23);
		this->generalBounds.x = size;
		this->generalBounds.y = size * 1.5;

		this->setOrigin(size, size*2);
		
		makeBox(size, 0, this->getPosition());
		piece[5].position = sf::Vector2f(this->getPosition().x, this->getPosition().y + size);
		makeBox(size, 6, piece[5].position);
		piece[11].position = sf::Vector2f(this->getPosition().x, this->getPosition().y + (size * 2));
		makeBox(size, 12, piece[11].position);
		piece[17].position = sf::Vector2f(this->getPosition().x + size, this->getPosition().y + (size * 2));
		makeBox(size, 18, piece[17].position);
		break;
	case 9:
		piece.resize(17);
		this->generalBounds.x = size;
		this->generalBounds.y = size;

		this->setOrigin(size, size*2);

		makeBox(size, 0, this->getPosition());
		piece[5].position = sf::Vector2f(this->getPosition().x, this->getPosition().y + size);
		makeBox(size, 6, piece[5].position);
		piece[11].position = sf::Vector2f(this->getPosition().x + size, this->getPosition().y + size);
		makeBox(size, 12, piece[11].position);
		break;
	}

	//this->setOrigin(this->generalBounds + position);

	for (int i = 0; i < piece.getVertexCount(); i++) {
		piece[i].color = sf::Color::White;
	}

}

void myPiece::makeBox(int size, int currentVertex, sf::Vector2f position)
{
	piece[currentVertex].position = sf::Vector2f(position.x, position.y);
	piece[currentVertex + 1].position = sf::Vector2f(position.x + size, position.y);
	piece[currentVertex + 2].position = sf::Vector2f(position.x + size, position.y + size);
	piece[currentVertex + 3].position = sf::Vector2f(position.x, position.y + size);
	piece[currentVertex + 4].position = sf::Vector2f(position.x, position.y);
}

bool isOverlapping(sf::Vector2f position);
{

	switch (shapeNumber) {
	case 1:
		if (checkSquare(0, position)) {
			return true;
		}
		break;
	case 2:
		if (checkSquare(0, position) || checkSquare(5, position)) {
			return true;
		}
		break;
	case 3:
		if (checkSquare(0, position) || checkSquare(5, position) || checkSquare(11, position)) {
			return true;
		}
		break;
	case 4:
		if (checkSquare(0, position) || checkSquare(5, position) || checkSquare(11, position) || checkSquare(17, position)) {
			return true;
		}
		break;
	case 5:
		if (checkSquare(0, position) || checkSquare(5, position) || checkSquare(11, position) || checkSquare(17, position)) {
			return true;
		}
		break;
	case 6:
		if (checkSquare(0, position) || checkSquare(5, position) || checkSquare(11, position) || checkSquare(18, position)) {
			return true;
		}
		break;
	case 7:
		if (checkSquare(0, position) || checkSquare(5, position) || checkSquare(11, position) || checkSquare(17, position)) {
			return true;
		}
		break;
	case 8:
		if (checkSquare(0, position) || checkSquare(5, position) || checkSquare(11, position) || checkSquare(17, position)) {
			return true;
		}
		break;
	case 9:
		if (checkSquare(0, position) || checkSquare(5, position) || checkSquare(11, position)) {
			return true;
		}
		break;
	}

	return false;
}

bool myPiece::checkSquare(int vertexNumber, sf::Vector2f position)
{
	if (position.x >= piece[vertexNumber].position.x && position.y >= piece[vertexNumber].position.y && position.x &&
		position.x <= piece[vertexNumber + 3].position.x && position.y <= piece[vertexNumber + 3].position.y) {
		return true;
	}
	return false;

}

sf::Vector2f myPiece::newPosition(sf::Vector2f mousePosition)
{

	//Position cannot be outside of the (0, 0) -> (600, 600) Box in any circumstances
	//Pieces center position will be mapped to mouse
	sf::Vector2f shapePosition;
	
	this->setPosition(mousePosition);
	/*if (mousePosition.x < 0 + generalBounds.x) {
		shapePosition.x = 0 + generalBounds.x;
	}
	if (mousePosition.x > 600 - generalBounds.x) {
		shapePosition.x = 600 - generalBounds.x;
	}
	if (mousePosition.y < 0 + generalBounds.y) {
		shapePosition.y = 0 + generalBounds.y;
	}
	if (mousePosition.y > 600 - generalBounds.y) {
		shapePosition.y = 600 - generalBounds.y;
	}*/

	return shapePosition;
		
}

sf::Vector2f myPiece::centerPosition()
{
	sf::Vector2f position;
	switch (shapeNumber) {
		
	case 1:
		
		if (isRotated) {
			position.x = piece[0].position.x + (size / 2);
			position.y = piece[0].position.y + (size / 2);
		}
		else {
			position.x = piece[0].position.x + (size / 2);
			position.y = piece[0].position.y + (size / 2);
		}

		return position;

	case 2:

		if (isRotated) {
			position.x = piece[0].position.x + size;
			position.y = piece[0].position.y + (size / 2);
		}
		else {
			position.x = piece[0].position.x + (size / 2);
			position.y = piece[0].position.y + size;
		}
		return position;

	case 3:

		if (isRotated) {
			position.x = piece[5].position.x + (size / 2);
			position.y = piece[5].position.y + (size / 2);
		}
		else {
			position.x = piece[0].position.x + (size / 2);
			position.y = piece[0].position.y + (size / 2);
		}
		position.x = piece[5].position.x + (size / 2);
		position.y = piece[5].position.y + (size / 2);
		return position;

	case 4:

		position.x = piece[11].position.x + (size / 2);
		position.y = piece[11].position.y;
		return position;

	case 5:

		position.x = piece[2].position.x;
		position.y = piece[2].position.y;
		return position;

	case 6:

		position.x = piece[2].position.x;
		position.y = piece[2].position.y + (size / 2);
		return position;

	case 7:

		position.x = piece[2].position.x;
		position.y = piece[2].position.y + (size / 2);
		return position;

	case 8:

		position.x = piece[2].position.x;
		position.y = piece[2].position.y + (size / 2);
		return position;

	case 9:

		position.x = piece[2].position.x;
		position.y = piece[2].position.y;
		return position;

	}
}

void myPiece::setRelativePosition(sf::Vector2f desiredPosition)
{
	sf::Vector2f newPosition = desiredPosition;
	switch (shapeNumber) {
	case 2:
		newPosition.y += 50;
		break;
	case 3:
		newPosition.y += 100;
		break;
	case 4:
		newPosition.y += 150;
		break;
	case 5:
		newPosition.x += 50;
		newPosition.y += 50;
		break;
	case 6:
		newPosition.y += 50;
		break;
	case 7:
		newPosition.y += 50;
		break;
	case 8:
		newPosition.y += 50;
		break;
	case 9:
		newPosition.y += 50;
		break;

	}

	this->setPosition(newPosition);
}
