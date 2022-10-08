#pragma once

#ifdef TT_PLATFORM_WINDOWS
	#ifdef TT_BUILD_DLL
		#define TITAN_API _declspec(dllexport)
	#else
		#define TITAN_API _declspec(dllimport)
	#endif
#else
	#error Titan only supports windows
#endif
