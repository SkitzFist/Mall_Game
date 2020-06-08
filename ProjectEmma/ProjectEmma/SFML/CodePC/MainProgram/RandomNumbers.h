#pragma once
#include <random>

inline int getRandomInt(int min, int max) {
	std::random_device device;
	std::mt19937_64 gen{ device() };
	std::uniform_int_distribution<int> dist(min, max);
	int number = dist(gen);
	return number;
}

inline float getRandomFloat(float min, float max) {
	std::random_device device;
	std::mt19937_64 gen{ device() };
	std::uniform_real_distribution<float> dist(min, max);
	float number = dist(gen);
	return number;
}