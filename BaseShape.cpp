#include "BaseShape.h"

void BaseShape::loadImage()
{
	if (shapeNumber == 1) {
		image.loadFromFile("Piece1.png");
	}
	else if (shapeNumber == 2) {
		image.loadFromFile("Piece2.png");
		sf::Vector2f place(0.0, 150.0);
		this->Sprite::setPosition(place);
	}
	else if (shapeNumber == 3) {
		sf::Vector2f place(0.0, 350.0);
		image.loadFromFile("Piece3.png");
		this->Sprite::setPosition(place);
	}
	else if (shapeNumber == 4) {
		sf::Vector2f place(0.0, 750.0);
		image.loadFromFile("Piece4.png");
		this->Sprite::setPosition(place);
	}
	else if (shapeNumber == 5) {
		sf::Vector2f place(0.0, 1000.0);
		image.loadFromFile("Piece5.png");
		this->Sprite::setPosition(place);
	}
	else if (shapeNumber == 6) {
		sf::Vector2f place(1350.0, 0.0);
		image.loadFromFile("Piece6.png");
		this->Sprite::setPosition(place);
	}
	else if (shapeNumber == 7) {
		sf::Vector2f place(1350.0, 200.0);
		image.loadFromFile("Piece7.png");
		this->Sprite::setPosition(place);
	}
	else if (shapeNumber == 8) {
		sf::Vector2f place(1350.0, 450.0);
		image.loadFromFile("Piece8.png");
		this->Sprite::setPosition(place);
	}
	else if (shapeNumber == 9) {
		sf::Vector2f place(1350.0, 700.0);
		image.loadFromFile("Piece9.png");
		this->Sprite::setPosition(place);
	}


}

void BaseShape::loadTexture(const int& shapeNumber)
{
	this->shapeNumber = shapeNumber;
	loadImage();
	this->Sprite::setTexture(image);
}

void BaseShape::setShapeNum(int toSet)
{
	this->shapeNumber = toSet;
}

void BaseShape::setMove(bool s)
{
	moveable = s;
}
