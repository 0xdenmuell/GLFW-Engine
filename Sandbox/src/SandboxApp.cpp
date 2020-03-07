#include <EngineDM.h>

class Sandbox : public EngineDM::Application
{
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

//APK class
EngineDM::Application* EngineDM::CreateApplication()
{
	return new Sandbox();
}


