#include "Window.h"

Window::Window()
{
	width = 960, height = 540;

	/* GLFW Initialization */
	if (!glfwInit())
		exit(EXIT_FAILURE);

	window = glfwCreateWindow(width, height, "Perpetual", NULL, NULL);

	if (!window)
	{
		glfwTerminate();
		exit(EXIT_FAILURE);
	}

	glfwMakeContextCurrent(window);

	/* GLEW Initialization */
	if (GLEW_OK != glewInit())
	{
		std::cout << "GLEW failed to initialize." << std::endl;
		exit(EXIT_FAILURE);
	}


	std::cout << "Using GLEW " << glewGetString(GLEW_VERSION);
}


Window::~Window()
{
	
}

GLFWwindow* Window::getWindow()
{
	return window;
}

int Window::getHeight()
{
	return height;
}

int Window::getWidth()
{
	return width;
}

void Window::update()
{
	glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	glfwSwapBuffers(window);
	glfwPollEvents();
}

bool Window::shouldClose()
{
	return glfwWindowShouldClose(getWindow());
}