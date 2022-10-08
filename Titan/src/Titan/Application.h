#pragma once

#include "Core.h"

namespace Titan {

	class TITAN_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};
	//To be defined in client
	Application* CreateApplication();
}

