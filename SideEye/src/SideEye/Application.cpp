#include "sepch.h"
#include "Application.h"

#include "Events/ApplicationEvent.h"
#include "Log.h"

namespace SideEye {
	Application::Application()
	{
	}

	Application::~Application()
	{
	}

	void Application::Run() {
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication)) {
			SE_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryInput)) {
			SE_TRACE(e);
		}
		while (true);
	}

}

