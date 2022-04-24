
#include "Shape.h"

void Shape::setVertices()
{
	

	//Vertex Number = 5
	if (shapeNumber == 1) {
		//Set the position of the shape
		makeBox(shape, 0, position);
	}
	//Vertex Number = 11
	else if (shapeNumber == 2) {
		makeBox(shape, 0, position);
		shape[5].position = sf::Vector2f(position.x, position.y + size);
		makeBox(shape, 6, shape[5].position);
	}
	//Vertex Number = 17
	else if (shapeNumber == 3) {
		makeBox(shape, 0, position);
		shape[5].position = sf::Vector2f(position.x, position.y + size);
		makeBox(shape, 6, shape[5].position);
		shape[11].position = sf::Vector2f(position.x, position.y + (2 * size));
		makeBox(shape, 12, shape[11].position);
	}
	//Vertex Number = 23
	else if (shapeNumber == 4) {
		makeBox(shape, 0, position);
		shape[5].position = sf::Vector2f(position.x, position.y + size);
		makeBox(shape, 6, shape[5].position);
		shape[11].position = sf::Vector2f(position.x, position.y + (2 * size));
		makeBox(shape, 12, shape[11].position);
		shape[17].position = sf::Vector2f(position.x, position.y + (3 * size));
		makeBox(shape, 18, shape[17].position);
	}
	//Vertex Number = 23
	else if (shapeNumber == 5) {
		makeBox(shape, 0, position);
		shape[5].position = sf::Vector2f(position.x + size, position.y);
		makeBox(shape, 6, shape[5].position);
		shape[11].position = sf::Vector2f(position.x + size, position.y + size);
		makeBox(shape, 12, shape[11].position);
		shape[17].position = sf::Vector2f(position.x, position.y + size);
		makeBox(shape, 18, shape[17].position);
	}
	//Vertex Number = 24
	else if (shapeNumber == 6) {
		makeBox(shape, 0, position);
		shape[5].position = sf::Vector2f(position.x, position.y + size);
		makeBox(shape, 6, shape[5].position);
		shape[11].position = sf::Vector2f(position.x, position.y + (size * 2));
		makeBox(shape, 12, shape[11].position);
		shape[17].position = sf::Vector2f(position.x + size, position.y + (size * 2));
		shape[18].position = sf::Vector2f(position.x + size, position.y + size);
		makeBox(shape, 19, shape[18].position);
	}
	//Vertex Number = 23
	else if (shapeNumber == 7) {
		makeBox(shape, 0, position);
		shape[5].position = sf::Vector2f(position.x, position.y + size);
		makeBox(shape, 6, shape[5].position);
		shape[11].position = sf::Vector2f(position.x + size, position.y + size);
		makeBox(shape, 12, shape[11].position);
		shape[17].position = sf::Vector2f(position.x + size, position.y + (size * 2));
		makeBox(shape, 18, shape[17].position);
	}
	//Vertex Number = 23
	else if (shapeNumber == 8) {
		makeBox(shape, 0, position);
		shape[5].position = sf::Vector2f(position.x, position.y + size);
		makeBox(shape, 6, shape[5].position);
		shape[11].position = sf::Vector2f(position.x, position.y + (size * 2));
		makeBox(shape, 12, shape[11].position);
		shape[17].position = sf::Vector2f(position.x + size, position.y + (size * 2));
		makeBox(shape, 18, shape[17].position);
	}
	//Vertex Number = 17
	else if (shapeNumber == 9) {
		makeBox(shape, 0, position);
		shape[5].position = sf::Vector2f(position.x, position.y + size);
		makeBox(shape, 6, shape[5].position);
		shape[11].position = sf::Vector2f(position.x + size, position.y + size);
		makeBox(shape, 12, shape[11].position);
	}

	//Set the color of the shape
	for (int i = 0; i < shape.getVertexCount(); i++) {
		shape[i].color = sf::Color::White;
	}
	
}
int Shape::getVertexNumber(int shapeNumber)
{
	if (shapeNumber == 1) {
		return 5;
	}
	else if (shapeNumber == 2) {
		return 11;
	}
	else if (shapeNumber == 3 || shapeNumber == 9) {
		return 17;
	}
	else if (shapeNumber == 4 || shapeNumber == 5 || shapeNumber == 7 || shapeNumber == 8) {
		return 23;
	}
	else if (shapeNumber == 6) {
		return 24;
	}
}


void Shape::makeBox(sf::VertexArray& shape, int currentVertex, sf::Vector2f &newPosition) {
	shape[currentVertex].position = sf::Vector2f(newPosition.x, newPosition.y);
	shape[currentVertex + 1].position = sf::Vector2f(newPosition.x + size, newPosition.y);
	shape[currentVertex + 2].position = sf::Vector2f(newPosition.x + size, newPosition.y + size);
	shape[currentVertex + 3].position = sf::Vector2f(newPosition.x, newPosition.y + size);
	shape[currentVertex + 4].position = sf::Vector2f(newPosition.x, newPosition.y);
}
