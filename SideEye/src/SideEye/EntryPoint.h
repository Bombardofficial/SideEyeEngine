#pragma once

#ifdef SE_PLATFORM_WINDOWS

extern SideEye::Application* SideEye::CreateApplication();

int main(int argc, char** argv) {
	
	SideEye::Log::Init();
	SE_CORE_WARN("Initalized Log");
	int a = 5;
	SE_INFO("Hello! Var={0}", a);


	auto app = SideEye::CreateApplication();
	app->Run();
	delete app;
}

#endif