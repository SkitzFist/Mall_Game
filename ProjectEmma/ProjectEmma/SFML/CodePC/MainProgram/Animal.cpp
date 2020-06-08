#include "Animal.h"

Animal::Animal(sf::Texture* texture) :
	GameObject(texture)
{
	//config
	
	//setup
	speed = 0.0f;
	//debug
}

Animal::~Animal()
{
	
}

void Animal::update(float delta)
{
}

void Animal::setSpeed(float speed)
{
	this->speed = speed;
}

float Animal::getSpeed() const
{
	return speed;
}
