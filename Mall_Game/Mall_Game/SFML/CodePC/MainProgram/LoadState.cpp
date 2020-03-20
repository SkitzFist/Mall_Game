#include "LoadState.h"
#include "PlayState.h"

LoadState::LoadState(ResourceManager* rm):
	GameState(rm)
{
	progress = 0;
	textureThread = std::thread(&LoadState::loadTextures, this);
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

	if (progress > 98) {
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
	progress += 100;
}
