#pragma once
#include <SFML/Graphics.hpp>

#include "ResourceManager.h"
#include "Clock.h"

class GameState
{
public:
	GameState(ResourceManager* rm);
	virtual ~GameState();
	virtual GameState* handleEvent(const sf::Event& event) = 0;
	virtual GameState* update(float delta) = 0;
	virtual void render(sf::RenderWindow& window) const = 0;

protected:
	ResourceManager* getRm() const;
private:
	ResourceManager* rm;
};

