
#include "Shape.h"

class TestFunctions {

public:

    void testShapePrint();

private:

};


void TestFunctions::testShapePrint() {
	//This test function will test whether the shapes print out or not when called outside the class

    sf::RenderWindow window(sf::VideoMode(500, 500), "SFML works!");
    sf::RectangleShape background(sf::Vector2f(500, 500));
    background.setFillColor(sf::Color::White);

    //Initializing the shape with shape number 2 and loading second image onto sprite
	Shape testShape(2);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(background);
        window.draw(testShape);
        window.display();

    }
}