#pragma once
#include "raylib.h"
#include <memory>

namespace PongRay
{
	class GameObject
	{
	public:
		virtual void OnUpdate(float deltaTime) {}
		virtual void OnRender();

		void Move(const Vector2& velocity);
		void SetPosition(const Vector2& newPosition);

	protected:
		Vector2 position = {};
		//Texture2D texture = {};
		std::shared_ptr<Texture2D> texture = nullptr;
	};
}
