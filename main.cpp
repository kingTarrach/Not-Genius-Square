
#include "TestFunctions.h"


int main()
{
    //sf::RenderWindow window(sf::VideoMode(500, 500), "SFML works!");

    ////Demo Shape Parameters are (shapeNumber, Vector2f position)
    ////ShapeNumber determines what shape it is (will post shape values)
    ////Position self explanatory

    //sf::RectangleShape background(sf::Vector2f(500, 500));
    //background.setFillColor(sf::Color::White);
    //Shape Piece[9];
    //Piece[0].loadTexture(1);


    //while (window.isOpen())
    //{
    //    sf::Event event;
    //    while (window.pollEvent(event))
    //    {
    //        if (event.type == sf::Event::Closed)
    //            window.close();
    //    }

    //    window.clear();
    //    window.draw(background);
    //    window.draw(Piece[0]);
    //    window.display();

    //}

    //return 0;

    TestFunctions test;
    test.testShapePrint();
}