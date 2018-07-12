#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>

class Window
{
	private:
		GLFWwindow* window;
		int width, height;
		
	public:
		Window();
		~Window();

		GLFWwindow* getWindow();
		int getWidth();
		int getHeight();

		// Update
		void update();
		bool shouldClose();
};

