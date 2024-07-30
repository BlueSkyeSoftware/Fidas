#pragma once

#ifdef FD_PLATFORM_WINDOWS
	#ifdef FD_BUILD_DLL
		#define FIDAS_API __declspec(dllexport)
	#else
		#define FIDAS_API __declspec(dllimport)
	#endif
#else
	#error Fidas only supports Windows!
#endif