#include "Application.h"
#include "raylib.h"

namespace PongRay
{
	Application::Application(const AppSettings& settings)
		: _appSettings(settings)
	{

	}

	Application::~Application()
	{
	}

	void Application::Run()
	{
		InitWindow(_appSettings.Width * _appSettings.Scale, _appSettings.Height * _appSettings.Scale, _appSettings.Title.c_str());

		SetTargetFPS(60);
		while (!WindowShouldClose())
		{
			double deltaTime = GetFrameTime();

			OnUpdate(deltaTime);
			OnRender();
		}

		CloseWindow();
	}

	void Application::OnUpdate(double deltaTime)
	{
		// Do update
	}

	void Application::OnRender()
	{
		BeginDrawing();
		ClearBackground(WHITE);



		EndDrawing();
	}
}