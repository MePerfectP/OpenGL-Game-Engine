#include "Engine.h"

Engine::Engine()
{
	window = new Window(); 
}

Engine::~Engine()
{
	delete(window);
}

void Engine::run()
{
	mainLoop();
}

void Engine::mainLoop()
{
	while (!window->shouldClose())
	{
		Input::process(window->getWindow());
		Time::tick();

		float vertices[] = {
			-0.5f, -0.5f, 0.0f,
			0.5f, -0.5f, 0.0f,
			0.0f,  0.5f, 0.0f
		};
		unsigned int VBO;
		glGenBuffers(1, &VBO);

		glBindBuffer(GL_ARRAY_BUFFER, VBO);
		glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);


		 

		window->update();
	}
}
