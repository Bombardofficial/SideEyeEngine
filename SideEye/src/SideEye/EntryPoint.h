#pragma once

#ifdef SE_PLATFORM_WINDOWS

extern SideEye::Application* SideEye::CreateApplication();

int main(int argc, char** argv) {
	
	auto app = SideEye::CreateApplication();
	app->Run();
	delete app;
}

#endif