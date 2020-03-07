#include "precom.h"
#include "Application.h"

#include "EngineDM/Events/ApplicationEvent.h"
#include "EngineDM/Log.h"

#include "GLFW/glfw3.h"

namespace EngineDM {

	Application::Application() 
	{
		m_Window = std::unique_ptr<Window>(Window::Create());
	}

	Application::~Application() 
	{

	}

	void Application::Run() {

		glClearColor(1, 0, 1, 1);
		glClear(GL_COLOR_BUFFER_BIT);
		m_Window->OnUpdate();

		while (true);
	}
}