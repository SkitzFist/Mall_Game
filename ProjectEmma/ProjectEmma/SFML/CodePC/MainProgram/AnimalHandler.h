#pragma once
#include "AnimalFactory.h"
#include "AnimalSubHandler.h"

class AnimalHandler
{
public:
	AnimalHandler();
	~AnimalHandler();

	void update(float delta);

	void createPig(ResourceManager* rm);
	int getNrOfPigs() const;

private:
	AnimalFactory factory;
	AnimalSubHandler* pigs;

	void updatePigs(float delta);
};

