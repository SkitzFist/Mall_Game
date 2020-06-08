#pragma once
#include <SFML/Graphics.hpp>
class MoveBehaviour
{
public:
	MoveBehaviour();
	~MoveBehaviour();

	void move(sf::Sprite& sprite, float speed, const sf::Vector2f& dir, float delta);
private:
};

