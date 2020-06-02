#include "GameObject.h"

GameObject::GameObject()
{
	//config

	//setup

	//debug
}

GameObject::GameObject(sf::Texture* texture)
{
	//config

	//setup
	sprite.setTexture(*texture);

	//debug
	
}

sf::Sprite GameObject::getSprite() const
{
	return sprite;
}

sf::Vector2f GameObject::getPosition() const
{
	return sprite.getPosition();
}

void GameObject::setPosition(sf::Vector2f pos)
{
	sprite.setPosition(pos);
}

void GameObject::setPosition(float x, float y)
{
	sprite.setPosition(x, y);
}

void GameObject::setOrigin(float x, float y)
{
	sprite.setOrigin(x, y);
}

void GameObject::setOrigin(sf::Vector2f origin)
{
	sprite.setOrigin(origin);
}

void GameObject::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(sprite, states);
}
