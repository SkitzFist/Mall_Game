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
	delete test_Char;
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

void ResourceManager::loadDebug()
{
	test_Char = new sf::Texture();
	if (!(test_Char->loadFromFile("../Textures/test_char.png"))) {
		cantLoad(L"Can't load test_char.png");
	}
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


}

sf::Font * ResourceManager::getBasicFont()
{
	return basicFont;
}

void ResourceManager::cantLoad(LPCWSTR theerror)
{
	MessageBox(nullptr, theerror, L"ERROR", MB_ICONWARNING | MB_OK);
}