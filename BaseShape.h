#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>


class BaseShape : public sf::Sprite{

public:
	BaseShape() : sf::Sprite() {
		this->shapeNumber = 0;
		if (shapeNumber == 9) {
			this->Sprite::setOrigin(sf::Vector2f(370, 380));
		}
		else {
			this->Sprite::setOrigin(sf::Vector2f(370, 260));
		}
		this->Sprite::setPosition(sf::Vector2f(0, 0));
		moveable = false;
	}
	BaseShape(const int& shapeNumber, const sf::Vector2f& pos) : sf::Sprite() {
		this->shapeNumber = shapeNumber;
		loadImage();
		this->Sprite::setTexture(image);
		if (shapeNumber == 9) {
			this->Sprite::setOrigin(sf::Vector2f(370, 380));
		}
		else {
			this->Sprite::setOrigin(sf::Vector2f(370, 260));
		}
		this->Sprite::setPosition(pos);
	}

	virtual void loadTexture(const int& shapeNumber);
	void setShapeNum(int toSet);
	void setMove(bool s);
	//bool moveable;
protected:

	//Loads in the respective image based on piece number
	virtual void loadImage();
	int shapeNumber;
	sf::Texture image;
	bool moveable;
};
