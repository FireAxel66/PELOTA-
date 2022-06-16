#include <SFML/Graphics.hpp>
#include <windows.h>

int main()
{
    int cor_x = 10, cor_y = 10;


    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Red);


    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            window.close();
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        {
            shape.move(0,-1);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        {
           shape.move(0,1);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        {
            shape.move(1, 0);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        {
            shape.move(-1,0);
        }

        window.clear();
        window.draw(shape);
        window.display();

    }


    return 0;
}
