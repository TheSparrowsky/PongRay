#include "Pad.h"

namespace PongRay
{
	Pad::Pad()
	{
		//texture = LoadTexture("assets/Pad.png");
		Texture2D newTexture = LoadTexture("assets\\Pad.png");
		texture = std::make_shared<Texture2D>(newTexture);
	}

	void Pad::OnUpdate(float deltaTime)
	{
		int direction = 0;

		if (IsKeyDown(KEY_W))
			direction = -1;
		
		if (IsKeyDown(KEY_D))
			direction = 1;

		if (direction != 0)
		{
			Vector2 velocity = { 0, direction * _speed * deltaTime };
			Move(velocity);
		}
	}
}