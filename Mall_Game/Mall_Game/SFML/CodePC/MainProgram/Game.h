#pragma once
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
	sf::Time elapsedTimeSinceLastUpdate;
	sf::Time timePerFrame;
	sf::RenderWindow window;
	ResourceManager* rm;
	GameState* currentState;

	sf::Thread renderThread;
	sf::Mutex mutex;

	void update();
	void handleEvent();
	void render();
	void render2();

};

