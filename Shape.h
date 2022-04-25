#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>




class Shape : public sf::Sprite {

public:


	Shape(const int& shapeNumber, const sf::Vector2f& pos) : sf::Sprite() {
		//Value for size defined below
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
	

private:
	
	//Loads in the respective image based on piece number
	void loadImage();
	int shapeNumber;
	sf::Texture image;

};