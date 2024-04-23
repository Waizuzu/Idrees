#pragma once

#include <SFML/Graphics.hpp>
#include<SFML/Audio.hpp>
#include<SFML/Network.hpp>
#include<SFML/Window.hpp>

#include <iostream>

class Grid {
private:
    int rows;
    int cols;
    float cellSize;

public:
    Grid(int rows, int cols, float cellSize);

    void draw(sf::RenderWindow& window) const;

};