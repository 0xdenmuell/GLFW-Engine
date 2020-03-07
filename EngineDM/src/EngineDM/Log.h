#pragma once

#include "API.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace EngineDM {

	class EngineDM_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() {
			return s_CoreLogger;
		}

		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() {
			return s_ClientLogger;
		}

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

//Core log macros
#define DM_CORE_ERROR(...)		::EngineDM::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define DM_CORE_WARN(...)		::EngineDM::Log::GetCoreLogger()->info(__VA_ARGS__)
#define DM_CORE_INFO(...)		::EngineDM::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define DM_CORE_TRACE(...)		::EngineDM::Log::GetCoreLogger()->error(__VA_ARGS__)
#define DM_CORE_FATAL(...)		::EngineDM::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client log macros
#define DM_CLIENT_ERROR(...)	::EngineDM::Log::GetClientLogger()->trace(__VA_ARGS__)
#define DM_CLIENT_WARN(...)		::EngineDM::Log::GetClientLogger()->info(__VA_ARGS__)
#define DM_CLIENT_INFO(...)		::EngineDM::Log::GetClientLogger()->warn(__VA_ARGS__)
#define DM_CLIENT_TRACE(...)	::EngineDM::Log::GetClientLogger()->error(__VA_ARGS__)
#define DM_CLIENT_FATAL(...)	::EngineDM::Log::GetClientLogger()->fatal(__VA_ARGS__)


