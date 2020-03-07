#include "precom.h"
#include "Log.h"

#include "spdlog\sinks\stdout_color_sinks.h"


namespace EngineDM {

	std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Log::s_ClientLogger;

	int a = 4;


	void Log::Init() {
		spdlog::set_pattern("%^[%T] %n: %v%$");
		s_CoreLogger = spdlog::stdout_color_mt("EngineDm");
		s_CoreLogger->set_level(spdlog::level::trace);

		s_ClientLogger = spdlog::stdout_color_mt("APK");
		s_ClientLogger->set_level(spdlog::level::trace);
	}


}