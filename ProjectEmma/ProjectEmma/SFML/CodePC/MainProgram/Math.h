#pragma once
#include <SFML/Graphics.hpp>

float getDistance(sf::Vector2f a, sf::Vector2f b) {
	sf::Vector2f delta = {
		b.x - a.x,
		b.y - a.y
	};
	float distance = sqrt((delta.x * delta.x) + (delta.y * delta.y));

	return distance;
}
