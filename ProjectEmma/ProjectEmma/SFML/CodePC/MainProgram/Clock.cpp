#include "Clock.h"


Clock::Clock()
{
	time = 0.0f;
	timeStart = std::chrono::steady_clock::now();
	timeEnd = std::chrono::steady_clock::now();
}

void Clock::restartClock()
{
	timeEnd = std::chrono::steady_clock::now();
	std::chrono::duration<float> runTime = timeEnd - timeStart;
	time = runTime.count();
	timeStart = std::chrono::steady_clock::now();
}

float Clock::delta() const
{
	return time;
}
