#pragma once
#include <SFML/Graphics.hpp>


class GameObject:
	public sf::Drawable
{
public:
	GameObject();
	GameObject(sf::Texture* texture);
	~GameObject();

	virtual void update(float delta) = 0;

	void setSprite(sf::Texture* texture);
	sf::Sprite getSprite() const;

	sf::Vector2f getPosition() const;
	void setPosition(sf::Vector2f pos);
	void setPosition(float x, float y);
	
	void setOrigin(float x, float y);
	void setOrigin(sf::Vector2f origin);

	void setRotation(float angle);
	float getRotation() const;

	// Inherited via Drawable
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

private:
	sf::Sprite* sprite;
};

