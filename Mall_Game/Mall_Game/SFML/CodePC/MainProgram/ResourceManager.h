#pragma once
#include <SFML/Graphics.hpp>
#include <Windows.h>
class ResourceManager
{
public:
	ResourceManager();
	~ResourceManager();

	void windowSetup(int width, int height);
	int getWindowWidth() const;
	int getWindowHeight() const;

	void loadDebug();
	void basicSetup();
	void loadTextures();

#pragma region Fonts
	sf::Font* getBasicFont();
#pragma endregion

	

private:
	int windowWidth;
	int windowHeight;

#pragma region Fonts
	sf::Font* basicFont;
#pragma endregion

#pragma region Textures
	sf::Texture* test_Char;
#pragma endregion



	void cantLoad(LPCWSTR theerror);
};

