#include <string>
#include <SFML/Graphics.hpp>

sf::Vector2u WINDOW_SIZE{ 800, 600 };
std::string WINDOW_TITLE_BAR{ "Runner" };

int main()
{
    sf::RenderWindow window(sf::VideoMode(WINDOW_SIZE.x, WINDOW_SIZE.y), WINDOW_TITLE_BAR);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.display();
    }

    return 0;
}