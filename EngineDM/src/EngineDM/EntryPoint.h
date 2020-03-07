#pragma once

//Windows only - gets defined in the preprocessor definitons
#ifdef DM_PLATFORM_WINDOWS

extern EngineDM::Application* EngineDM::CreateApplication();


int main(int argc, char** argv) {

	//initialize the logging system
	EngineDM::Log::Init();
	
	DM_CORE_WARN("Engine has been started.");
	DM_CLIENT_INFO("The Game is starting.");


	auto app = EngineDM::CreateApplication();
	app->Run();
	delete app;
}
#endif