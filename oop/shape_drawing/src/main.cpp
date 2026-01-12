#include <SFML/Graphics.hpp>
#include "../include/circle.hpp"

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Circle Example");

    sf::CircleShape circle(50.f);

    circle.setFillColor(sf::Color::Red);

    circle.setPosition(400.f, 300.f);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Black);

        window.draw(circle);

        window.display();
    }

    return 0;
}
