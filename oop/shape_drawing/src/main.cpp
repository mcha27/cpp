#include <SFML/Graphics.hpp>
#include "../include/circle.hpp"

int main() {
    // Create a window for the application
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Circle Example");

    // 1. Create a circle shape object with a radius of 50 pixels
    sf::CircleShape circle(50.f);

    // 2. Optional: Set the fill color to red
    circle.setFillColor(sf::Color::Red);

    // Optional: Set the position (e.g., to the center of the window)
    // The position refers to the top-left corner of the shape's bounding box by default
    circle.setPosition(400.f, 300.f);

    // Main game loop
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // 3. Clear the window with a black color
        window.clear(sf::Color::Black);

        // 4. Draw the circle shape to the window
        window.draw(circle);

        // 5. Display whatever has been drawn so far
        window.display();
    }

    return 0;
}
