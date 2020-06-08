#include "GameObject.h"

GameObject::GameObject()
{
	//config

	//setup
	sprite = nullptr;

	//debug
}

GameObject::GameObject(sf::Texture* texture)
{
	//config

	//setup
	sprite = new sf::Sprite();
	sprite->setTexture(*texture);

	//debug
	
}

GameObject::~GameObject()
{
	delete sprite;
}

void GameObject::setSprite(sf::Texture* texture)
{
	if (sprite) {
		delete sprite;
	}
	sprite = new sf::Sprite();
	sprite->setTexture(*texture);
}

sf::Sprite GameObject::getSprite() const
{
	return *sprite;
}

sf::Vector2f GameObject::getPosition() const
{
	return sprite->getPosition();
}

void GameObject::setPosition(sf::Vector2f pos)
{
	sprite->setPosition(pos);
}

void GameObject::setPosition(float x, float y)
{
	sprite->setPosition(x, y);
}

void GameObject::setOrigin(float x, float y)
{
	sprite->setOrigin(x, y);
}

void GameObject::setOrigin(sf::Vector2f origin)
{
	sprite->setOrigin(origin);
}

void GameObject::setRotation(float angle)
{
	sprite->setRotation(angle);
}

float GameObject::getRotation() const
{
	return sprite->getRotation();
}

void GameObject::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(*sprite, states);
}
