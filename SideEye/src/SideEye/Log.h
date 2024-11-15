#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace SideEye {
	class SIDEEYE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	};
}

//core log macros
#define SE_CORE_ERROR(...)     ::SideEye::Log::GetCoreLogger()->error(__VA_ARGS__)
#define SE_CORE_WARN(...)      ::SideEye::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define SE_CORE_INFO(...)      ::SideEye::Log::GetCoreLogger()->info(__VA_ARGS__)
#define SE_CORE_TRACE(...)     ::SideEye::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define SE_CORE_FATAL(...)     ::SideEye::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//client log macros
#define SE_ERROR(...)          ::SideEye::Log::GetClientLogger()->error(__VA_ARGS__)
#define SE_WARN(...)           ::SideEye::Log::GetClientLogger()->warn(__VA_ARGS__)
#define SE_INFO(...)           ::SideEye::Log::GetClientLogger()->info(__VA_ARGS__)
#define SE_TRACE(...)          ::SideEye::Log::GetClientLogger()->trace(__VA_ARGS__)
#define SE_FATAL(...)          ::SideEye::Log::GetClientLogger()->fatal(__VA_ARGS__)