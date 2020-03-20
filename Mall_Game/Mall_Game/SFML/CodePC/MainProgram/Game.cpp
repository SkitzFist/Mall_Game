#include "Game.h"
#include "LoadState.h"

Game::Game()
{
	//config

	//setup
	window.create(sf::VideoMode(WIDTH, HEIGHT), "Mall_Game");
	rm = new ResourceManager();
	rm->windowSetup(WIDTH, HEIGHT);
	
	currentState = new LoadState(rm);

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
		//renderThread.launch();
	}
}

void Game::update()
{
	clock.restartClock();
	if (currentState != nullptr) {
		currentState  = currentState->update(clock.delta());
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

void Game::RenderWithThread()
{
	//mutex.lock();
	//window.clear();
	//if (currentState != nullptr) {
	//	currentState->render(window);
	//}
	//window.display();
	//mutex.unlock();
}
