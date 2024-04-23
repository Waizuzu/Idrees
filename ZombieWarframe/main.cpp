#include <SFML/Graphics.hpp>
#include<SFML/Audio.hpp>
#include<SFML/Network.hpp>
#include<SFML/Window.hpp>
#include<SFML/OpenGL.hpp>

#include"Grid.h"
#include<iostream>
using namespace std;
using namespace sf;

//int main()
//{
//    sf::RenderWindow window(sf::VideoMode(1000, 1000), "SFML works!", sf::Style::Default);
//    sf::CircleShape shape(100.f);
//    shape.setFillColor(sf::Color::Green);
//
//    while (window.isOpen())
//    {
//        sf::Event event;
//        while (window.pollEvent(event))
//        {
//            if (event.type == sf::Event::Closed)
//                window.close();
//        }
//
//        window.clear();
//        window.draw(shape);
//        window.display();
//    }
//
//    return 0;
//}





//
//int main() {
//    sf::RenderWindow window(sf::VideoMode(1000, 1000), "SFML Grid Example", sf::Style::Default);
//    const int numRows = 10;
//    const int numCols = 10;
//    const float cellSize = 100.f;
//
//    Grid grid(numRows, numCols, cellSize);
//
//    while (window.isOpen()) {
//        sf::Event event;
//        while (window.pollEvent(event)) {
//            if (event.type == sf::Event::Closed)
//                window.close();
//        }
//
//        window.clear();
//
//        grid.draw(window);
//
//        window.display();
//    }
//
//    return 0;
//}




int main() {
    sf::RenderWindow window(sf::VideoMode(1000, 1000), "SFML Grid Example", sf::Style::Default);
    const int numRows = 10;
    const int numCols = 10;
    const float cellSize = 100.f;

    // Load background image
    Texture backgroundTexture;
    if (!backgroundTexture.loadFromFile("include\SFML\textures_and_sprites\start_window.jpeg")) {
        std::cerr << "Failed to load background image!" << endl;
        return 1;
    }
    sf::Sprite backgroundImage(backgroundTexture);

    Grid grid(numRows, numCols, cellSize);

    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        // Draw background image first
        window.draw(backgroundImage);

        grid.draw(window);

        window.display();
    }

    return 0;
}