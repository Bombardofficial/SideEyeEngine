#include <SideEye.h>

class Sandbox : public SideEye::Application
{
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};

SideEye::Application* SideEye::CreateApplication()
{
	return new Sandbox();
}