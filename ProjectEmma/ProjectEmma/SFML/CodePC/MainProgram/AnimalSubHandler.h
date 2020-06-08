#pragma once
#include "Animal.h"

class AnimalSubHandler
{
public:
	AnimalSubHandler();
	~AnimalSubHandler();

	void update(float delta);
	int getNrOf() const;

	void addAnimal(Animal* animal);
	void removeAnimalAt(int index);
	Animal** getAnimals() const;


private:
	int cap;
	int nrOf;
	Animal** animals;

	void expandArr();
};

