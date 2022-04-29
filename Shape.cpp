#include "Shape.h"

void Shape::loadImage()
{
	if (shapeNumber == 1) {
		image.loadFromFile("Piece1.png");
	}
	else if (shapeNumber == 2) {
		image.loadFromFile("Piece2.png");
	}
	else if (shapeNumber == 3) {
		image.loadFromFile("Piece3.png");
	}
	else if (shapeNumber == 4) {
		image.loadFromFile("Piece4.png");
	}
	else if (shapeNumber == 5) {
		image.loadFromFile("Piece5.png");
	}
	else if (shapeNumber == 6) {
		image.loadFromFile("Piece6.png");
	}
	else if (shapeNumber == 7) {
		image.loadFromFile("Piece7.png");
	}
	else if (shapeNumber == 8) {
		image.loadFromFile("Piece8.png");
	}
	else if (shapeNumber == 9) {
		image.loadFromFile("Piece9.png");
	}
}