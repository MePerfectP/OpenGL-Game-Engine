#pragma once
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>

#include "Window.h"
#include "Input.h"
#include "Time.h"


class Engine
{
	private:
		Window* window;

	public:
		Engine();
		~Engine();

		void run();
		void mainLoop();
};

