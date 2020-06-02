#pragma once
#include <thread>

#include "GameState.h"
class LoadState :
	public GameState
{
public:
	LoadState(ResourceManager* rm);
	~LoadState();
	// Inherited via GameState
	virtual GameState* handleEvent(const sf::Event& event) override;
	virtual GameState* update(float delta) override;
	virtual void render(sf::RenderWindow& window) const override;

private:
	int progress;
	int numberOfThreads;
	int isDone;
	int add;

	std::thread textureThread;

	void loadTextures();
};

