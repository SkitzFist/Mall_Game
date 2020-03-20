#include "GameObject.h"

GameObject::GameObject()
{
}

GameObject::GameObject(sf::Texture* texture)
{
	sprite.setTexture(*texture);
}

sf::Sprite GameObject::getSprite() const
{
	return sprite;
}

void GameObject::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(sprite, states);
}
