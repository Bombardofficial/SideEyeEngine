#pragma once

#ifdef SE_PLATFORM_WINDOWS
	#ifdef SE_BUILD_DLL
		#define SIDEEYE_API __declspec(dllexport)
	#else
		#define SIDEEYE_API __declspec(dllimport)
	#endif
#else
	#error SideEye only supports Windows!
#endif