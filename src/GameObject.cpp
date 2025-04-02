#include "GameObject.h"

namespace PongRay
{
	void GameObject::Move(const Vector2& velocity)
	{
		position.x = velocity.x;
		position.y = velocity.y;
	}

	void GameObject::OnRender()
	{
		if(texture)
			DrawTexture(*texture, position.x, position.y, RED);
	}

	void GameObject::SetPosition(const Vector2& newPosition)
	{
		position.x = newPosition.x;
		position.y = newPosition.y;
	}
}