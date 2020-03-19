#include "Game.h"
#include "PlayState.h"
#include <thread>
#include <chrono>

Game::Game() :
	window(sf::VideoMode(WIDTH, HEIGHT), "Mall"),
	timePerFrame(sf::seconds(1.0f / 60.0f)),
	elapsedTimeSinceLastUpdate(sf::Time::Zero)
{
	//config


	//setup
	rm = new ResourceManager();
	rm->windowSetup(WIDTH, HEIGHT);

	currentState = new PlayState(rm);

	//debug
}


Game::~Game()
{
	delete currentState;
	delete rm;
}

void Game::handleEvent()
{
	sf::Event event;
	while (window.pollEvent(event)) {

		if (currentState != nullptr) {
			currentState->handleEvent(event);
		}
		if (event.type == sf::Event::Closed ||
			event.type == sf::Event::KeyReleased && event.key.code == sf::Keyboard::Escape) {
			window.close();
		}
	}
}

void Game::run()
{
	clock.restartClock();

	while (window.isOpen())
	{
		handleEvent();
		update();
		render();
	}
}

void Game::update()
{
	clock.restartClock();
	if (currentState != nullptr) {
		currentState->update(clock.delta());
	}
}


void Game::render()
{
	window.clear();
	if (currentState != nullptr) {
		currentState->render(window);
	}
	window.display();
}

void Game::render2()
{
	mutex.lock();
	window.clear();
	if (currentState != nullptr) {
		currentState->render(window);
	}
	window.display();
	mutex.unlock();
}
