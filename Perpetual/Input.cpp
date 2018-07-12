#include "Input.h"

Input::Input()
{
}

Input::~Input()
{
}

void Input::process(GLFWwindow* window)
{
	if (getKeyPressed(window, GLFW_KEY_ESCAPE)) {
		exit(EXIT_SUCCESS);
	}
}

int Input::getKeyPressed(GLFWwindow* window, int key)
{
	int state = glfwGetKey(window, key);
	return state;
}
