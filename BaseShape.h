#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>

class BaseShape : public sf::Sprite {

public:

	BaseShape() : sf::Sprite() {
		this->shapeNumber = 0;
		if (shapeNumber == 9) {
			this->setOrigin(sf::Vector2f(370, 380));
		}
		else {
			this->setOrigin(sf::Vector2f(370, 260));
		}
		this->setPosition(sf::Vector2f(0, 0));
	}

	BaseShape(const int& shapeNumber, const sf::Vector2f& pos) : sf::Sprite() {
		this->shapeNumber = shapeNumber;
		loadImage();
		this->setTexture(image);
		if (shapeNumber == 9) {
			this->setOrigin(sf::Vector2f(370, 380));
		}
		else {
			this->setOrigin(sf::Vector2f(370, 260));
		}
		this->setPosition(pos);
	}

	virtual void loadTexture(const int& shapeNumber);

protected:

	//Loads in the respective image based on piece number
	virtual void loadImage();
	int shapeNumber;
	sf::Texture image;


};