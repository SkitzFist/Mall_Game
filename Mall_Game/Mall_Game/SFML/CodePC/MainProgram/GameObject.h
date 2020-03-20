#pragma once
#include <SFML/Graphics.hpp>


class GameObject:
	public sf::Drawable
{
public:
	GameObject();
	GameObject(sf::Texture* texture);
	sf::Sprite getSprite() const;

	// Inherited via Drawable
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

private:
	sf::Sprite sprite;

};

