#pragma once
#include <chrono>
class Clock
{
public:
	Clock();
	void restartClock();
	float delta()const;

private:
	float time;
	std::chrono::steady_clock::time_point timeStart;
	std::chrono::steady_clock::time_point timeEnd;
};

