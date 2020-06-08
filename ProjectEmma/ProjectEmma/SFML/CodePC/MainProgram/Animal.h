#pragma once
#include "GameObject.h"
#include "MoveBehaviour.h"

class Animal:
	public GameObject
{
public:
	Animal(sf::Texture* texture);
	~Animal();

	virtual void update(float delta) override;

	void setSpeed(float speed);
	float getSpeed() const;

private:
	float speed;

};

