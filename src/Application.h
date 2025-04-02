#pragma once

#include <string>

namespace PongRay
{
	struct AppSettings
	{
		int Width = 300;
		int Height = Width / 16 * 10;
		int Scale = 3;
		std::string Title = "PongRay";
	};

	class Application
	{
	public:
		Application(const AppSettings& settings = AppSettings());
		~Application();

		void Run();
		void OnUpdate(double deltaTime);
		void OnRender();

	private:
		AppSettings _appSettings;
	};
}