#include "ResourceManager.h"
#include <iostream>


ResourceManager::ResourceManager()
{
	//config

	//setup
	basicSetup();
	//debug
}


ResourceManager::~ResourceManager()
{
	delete basicFont;
	delete pig;
}

void ResourceManager::windowSetup(int width, int height)
{
	windowWidth = width;
	windowHeight = height;
}

int ResourceManager::getWindowWidth() const
{
	return windowWidth;
}

int ResourceManager::getWindowHeight() const
{
	return windowHeight;
}

void ResourceManager::basicSetup()
{
	basicFont = new sf::Font();
	if (!basicFont->loadFromFile("../Fonts/segoui.ttf")) {
		cantLoad(L"Can't load segoui.ttf");
	}
}

void ResourceManager::loadTextures()
{

	//Pig
	pig = new sf::Texture();
	if (!(pig->loadFromFile("../bin/pig.png"))) {
		cantLoad(L"Couldn't load pig.png");
	}

}

sf::Font * ResourceManager::getBasicFont()
{
	return basicFont;
}

sf::Texture* ResourceManager::getPig()
{
	return pig;
}

void ResourceManager::cantLoad(LPCWSTR theerror)
{
	MessageBox(nullptr, theerror, L"ERROR", MB_ICONWARNING | MB_OK);
}