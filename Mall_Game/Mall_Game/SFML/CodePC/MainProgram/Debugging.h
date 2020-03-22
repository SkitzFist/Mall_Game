#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>

void print(sf::Vector2f a) {
	std::cout << a.x << "." << a.y << std::endl;
}

void print(sf::Vector2i a) {
	std::cout << a.x << "." << a.y << std::endl;
}