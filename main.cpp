
#include "Shape.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(1000, 750), "SFML works!");

    //Demo Shape Parameters are (shapeNumber, Vector2f position)
    //ShapeNumber determines what shape it is (will post shape values)
    //Position self explanatory
    Shape s1(9, sf::Vector2f(100, 100));

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(s1.getShape());
        window.display();
    }

    return 0;
}