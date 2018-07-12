#pragma once
#include <GLFW/glfw3.h>
#include <iostream>

class Input
{
	public:
		Input();
		~Input();

		static void process(GLFWwindow* window);

		static int getKeyPressed(GLFWwindow* window, int key);

};

