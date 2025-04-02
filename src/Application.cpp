#include "Application.h"
#include "Pad.h"
#include "raylib.h"

namespace PongRay
{
	Application::Application(const AppSettings& settings)
		: _appSettings(settings), _gameScene(*this)
	{
		auto playerPad = std::make_shared<Pad>();
		playerPad->SetPosition({ 40,40 });
		_gameScene.AddGameObject(playerPad);
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

	void Application::OnUpdate(float deltaTime)
	{
		_gameScene.OnUpdate(deltaTime);
	}

	void Application::OnRender()
	{
		BeginDrawing();
		ClearBackground(WHITE);

		_gameScene.OnRender();

		EndDrawing();
	}
}