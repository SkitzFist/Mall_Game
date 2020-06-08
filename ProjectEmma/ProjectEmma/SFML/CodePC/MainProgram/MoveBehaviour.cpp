#include "MoveBehaviour.h"

MoveBehaviour::MoveBehaviour()
{
}

MoveBehaviour::~MoveBehaviour()
{
}

void MoveBehaviour::move(sf::Sprite& sprite, float speed, const sf::Vector2f& dir, float delta)
{
	sprite.move((speed * delta) * dir);
}