#include "GameScene.h"
#include "GameObject.h"

namespace PongRay
{
	GameScene::GameScene(Application& app)
		: _app(app)
	{

	}

	void GameScene::AddGameObject(std::shared_ptr<GameObject> gameObject)
	{
		_gameObjects.emplace_back(gameObject);
	}

	void GameScene::OnUpdate(float deltaTime)
	{
		for (auto gameObject : _gameObjects)
		{
			gameObject->OnUpdate(deltaTime);
		}
	}

	void GameScene::OnRender()
	{
		for (auto gameObject : _gameObjects)
		{
			gameObject->OnRender();
		}
	}
}