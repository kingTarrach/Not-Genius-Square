
#include "BaseShape.h"

class Shape : public BaseShape {

public:
	
	Shape() {
		this->shapeNumber = 0;
	}
	Shape(const int& shapeNumber) {
		this->shapeNumber = shapeNumber;
		this->loadTexture(this->shapeNumber);
	}
	void loadTexture(const int& shapeNumber);

private:
	
	//Loads in the respective image based on piece number
	void loadImage();

};