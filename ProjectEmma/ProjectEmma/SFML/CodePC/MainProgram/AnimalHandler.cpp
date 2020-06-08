#include "AnimalHandler.h"

AnimalHandler::AnimalHandler()
{
	//config

	//setup
	pigs = new AnimalSubHandler();

	//debug
}

AnimalHandler::~AnimalHandler()
{
	delete pigs;
}

void AnimalHandler::update(float delta)
{
	updatePigs(delta);
}

void AnimalHandler::createPig(ResourceManager* rm)
{
	pigs->addAnimal(factory.createPig(rm));
}

int AnimalHandler::getNrOfPigs() const
{
	return pigs->getNrOf();
}

void AnimalHandler::updatePigs(float delta)
{
	pigs->update(delta);
}
