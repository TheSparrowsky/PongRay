#pragma once
#include "GameObject.h"

namespace PongRay
{
	class Pad : public GameObject
	{
	public:
		Pad();

		virtual void OnUpdate(float deltaTime) override;

	private:
		float _speed = 20.0f;
	};
}