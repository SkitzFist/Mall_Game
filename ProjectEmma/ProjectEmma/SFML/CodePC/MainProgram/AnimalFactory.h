#pragma once
#include "Animal.h"
#include "ResourceManager.h"
class AnimalFactory
{
public:
	AnimalFactory();
	~AnimalFactory();
	Animal* createPig(ResourceManager* rm);
private:
	
};

