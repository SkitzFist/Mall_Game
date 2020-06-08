#include "AnimalSubHandler.h"

AnimalSubHandler::AnimalSubHandler()
{
	//config

	//setup
	nrOf = 0;
	cap = 10;
	animals = new Animal * [cap] {nullptr};

	//debugs
}

AnimalSubHandler::~AnimalSubHandler()
{
	for (int i = 0; i < nrOf; ++i) {
		delete animals[i];
	}
	delete[] animals;
}

void AnimalSubHandler::update(float delta)
{
	for (int i = 0; i < nrOf; ++i) {
		animals[i]->update(delta);
	}
}

int AnimalSubHandler::getNrOf() const
{
	return nrOf;
}

void AnimalSubHandler::addAnimal(Animal* animal)
{
	if (nrOf == cap) {
		expandArr();
	}
	animals[nrOf++] = animal;
}

void AnimalSubHandler::removeAnimalAt(int index)
{
	delete animals[index];
	animals[index] = animals[--nrOf];
	animals[nrOf] = nullptr;
}

Animal** AnimalSubHandler::getAnimals() const
{
	return animals;
}

void AnimalSubHandler::expandArr()
{
	cap += 10;
	Animal** tmp = new Animal * [cap];

	for (int i = 0; i < nrOf; i++)
	{
		tmp[i] = animals[i];
	}
	delete[] animals;
	animals = tmp;
}
