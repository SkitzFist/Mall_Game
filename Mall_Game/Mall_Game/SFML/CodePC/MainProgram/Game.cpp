#include "Game.h"
#include "LoadState.h"

//debug
#include "Debugging.h"
#include "PlayState.h"

Game::Game()
{
	//config

	//setup
	window.create(sf::VideoMode(WIDTH, HEIGHT), "Mall_Game");
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
			currentState = currentState->handleEvent(event);
		}
		if (event.type == sf::Event::Closed) {
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
		currentState = currentState->update(clock.delta());
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