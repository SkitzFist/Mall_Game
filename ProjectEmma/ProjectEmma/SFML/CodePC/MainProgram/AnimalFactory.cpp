#include "AnimalFactory.h"

AnimalFactory::AnimalFactory()
{
}

AnimalFactory::~AnimalFactory()
{
}

Animal* AnimalFactory::createPig(ResourceManager* rm)
{
	Animal* pig = new Animal(rm->getPig());
	pig->setPosition(200, 200);
	//TODO :: fix this
	return pig;
}