#include "Time.h"

Time*  Time::instance = nullptr;

double Time::lastTime;
double Time::currentTime;
int	   Time::numberOfFrames;

Time::Time()
{
	if (!instance)
		instance = new Time();

	lastTime = glfwGetTime();
}

Time* Time::getInstance()
{
	if (!instance)
		instance = new Time();
	
	return instance;
}

void Time::tick()
{
	currentTime = glfwGetTime();

	numberOfFrames++;

	if ((currentTime - lastTime) >= 1.0)
	{
		std::cout << numberOfFrames << std::endl;

		numberOfFrames = 0;
		lastTime += 1.0;
	}
}

