#pragma once

#ifdef TT_PLATFORM_WINDOWS

extern Titan::Application* Titan::CreateApplication();

int main(int argc, char** argv) {

	auto app = Titan::CreateApplication();
	app->Run();
	delete app;
}
#else
	#error Titan only supports Windows!
#endif
