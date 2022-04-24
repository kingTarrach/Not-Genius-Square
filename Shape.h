#pragma once
#include <SFML/Graphics.hpp>


class Shape : public sf::VertexArray {

public:


	Shape(const int& shapeNumber, const sf::Vector2f& pos) {
		//Value for size defined below
		size = 50;
		this->shapeNumber = shapeNumber;
		this->position = pos;
		shape.setPrimitiveType(sf::LineStrip);
		shape.resize(this->getVertexNumber(shapeNumber));
		this->setVertices();
	}
	sf::VertexArray getShape() {
		return this->shape;
	}
	

private:
	
	//This function actually creates the whole shape
	void setVertices();
	//Returns vertex number based on shape number
	int getVertexNumber(int shapeNumber);
	//Makes single box - returns to current position
	void makeBox(sf::VertexArray& shape, int currentVertex, sf::Vector2f& newPosition);
	int size;
	int shapeNumber;
	//Pointer to the shape (must call ClassName.getShape())
	sf::VertexArray shape;
	//The position of the tope left most point on the shape
	sf::Vector2f position;

};