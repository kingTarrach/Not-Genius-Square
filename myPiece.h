#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>

class myPiece : public sf::Drawable, public sf::Transformable {

public:

	void load(int pieceNumber, int size);
	bool isOverlapping(sf::Vector2f position);
	sf::Vector2f newPosition(sf::Vector2f mousePosition);
	int getSize() {
		return this->size;
	}
	sf::VertexArray getPiece() {
		return this->piece;
	}
	void setRelativePosition(sf::Vector2f desiredPosition);


private:

	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const {

		states.transform *= getTransform();

		states.texture = &texture;


		target.draw(piece, states);
	}
	void makeBox(int size, int vertexNumber, sf::Vector2f position);
	bool checkSquare(int vertexNumber, sf::Vector2f position);

	sf::VertexArray piece;
	bool isRotated;
	sf::Vector2f centerPosition();
	sf::Vector2f generalBounds;
	int size;
	int shapeNumber;
	sf::Texture texture;

};
