#include "PlayState.h"



PlayState::PlayState(ResourceManager* rm):
	GameState(rm)
{
	//config

	//setup

	//debug
	setupText();
}


PlayState::~PlayState()
{
}

GameState * PlayState::handleEvent(const sf::Event & event)
{
	GameState* state = this;

	return state;
}

GameState * PlayState::update(float delta)
{
	GameState* state = this;
	for (int i = 0; i < 1000000; ++i) {

	}
	float fps = (1.0f / delta) / 100.f;
	text.setString(std::to_string(fps));
	return state;
}

void PlayState::render(sf::RenderWindow&  window) const
{

	//debug
	window.draw(text);
}

void PlayState::setupText()
{
	text.setFont(*getRm()->getBasicFont());
	sf::Vector2f pos{
		getRm()->getWindowWidth() / 2.f,
		getRm()->getWindowHeight() / 2.f
	};
	text.setPosition(pos);
}
