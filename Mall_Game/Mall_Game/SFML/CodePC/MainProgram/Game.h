#pragma once
#include <thread>
#include <mutex>
#include <SFML/Graphics.hpp>

#include "ResourceManager.h"
#include "GameState.h"
#include "Clock.h"

class Game
{
public:
	static const int WIDTH = 900;
	static const int HEIGHT = 600;
public:
	Game();
	~Game();
	void run();

private:
	Clock clock;
	sf::RenderWindow window;
	ResourceManager* rm;
	GameState* currentState;

	void update();
	void handleEvent();
	void render();

};

