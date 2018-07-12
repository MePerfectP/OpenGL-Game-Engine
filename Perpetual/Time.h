#pragma once
#include <GLFW/glfw3.h>
#include <iostream>

class Time
{
	private:
		static Time* instance;

		Time();

		static double lastTime;
		static double currentTime;
		static int numberOfFrames;

	public:
		static Time* getInstance();
		static void tick();

};

