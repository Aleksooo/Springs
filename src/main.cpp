#include "handler.hpp"
#include "Point.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(1000, 1000), "SFML works!");

    Point p(vec(500, 500), "static", 100, sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(p);
        window.display();
    }

    return 0;
}
