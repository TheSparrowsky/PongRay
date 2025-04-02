#pragma once

#include <memory>
#include <vector>

namespace PongRay
{

	class Application;
	class GameObject;
	class GameScene
	{
	public:
		GameScene(Application& app);

		void AddGameObject(std::shared_ptr<GameObject> gameObject);

		void OnUpdate(float deltaTime);
		void OnRender();

	private:
		Application& _app;
		std::vector<std::shared_ptr<GameObject>> _gameObjects;
	};
}