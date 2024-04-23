#include "Grid.h"
#include <SFML/Graphics.hpp>
#include<SFML/Audio.hpp>
#include<SFML/Network.hpp>
#include<SFML/Window.hpp>
#include<iostream>
using namespace std;

Grid::Grid(int rows, int cols, float cellSize) {
    rows = rows;
    cols = cols;
    cellSize = cellSize;
}


void Grid::draw(sf::RenderWindow& window) const {
    sf::Color lineColor = sf::Color::Black;
    for (int i = 0; i <= cols; ++i) {
        sf::Vertex line[] = {
            sf::Vertex(sf::Vector2f(i * cellSize, 0), lineColor),
            sf::Vertex(sf::Vector2f(i * cellSize, rows * cellSize), lineColor)
        };
        window.draw(line, 2, sf::Lines);
    }

    for (int i = 0; i <= rows; ++i) {
        sf::Vertex line[] = {
            sf::Vertex(sf::Vector2f(0, i * cellSize), lineColor),
            sf::Vertex(sf::Vector2f(cols * cellSize, i * cellSize), lineColor)
        };
        window.draw(line, 2, sf::Lines);
    }
}