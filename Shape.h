
#include "BaseShape.h"

class Shape : public BaseShape {

public:
	
	void loadTexture(const int& shapeNumber);

private:
	
	//Loads in the respective image based on piece number
	void loadImage();
	//int shapeNumber;
	//sf::Texture image;

};