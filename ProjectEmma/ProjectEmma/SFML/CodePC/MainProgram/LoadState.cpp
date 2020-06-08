#include "LoadState.h"
#include "PlayState.h"

LoadState::LoadState(ResourceManager* rm):
	GameState(rm)
{
	//config
	numberOfThreads = 1;

	//setup
	progress = 0;
	isDone = 100 / numberOfThreads;
	add = 100 / numberOfThreads;
	textureThread = std::thread(&LoadState::loadTextures, this);

	//debug
}

LoadState::~LoadState()
{
	textureThread.join();
}

GameState* LoadState::handleEvent(const sf::Event& event)
{
	GameState* state = this;


	return state;
}

GameState* LoadState::update(float delta)
{
	GameState* state = this;

	if (progress >= isDone) {
		state = new PlayState(getRm());
		delete this;
	}

	return state;
}

void LoadState::render(sf::RenderWindow& window) const
{
}

void LoadState::loadTextures()
{

	getRm()->loadDebug();
	progress += add;
}
