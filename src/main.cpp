#include "raylib.h"

int main()
{
	InitWindow(200, 200, "Test");

	while (!WindowShouldClose()) 
	{
		BeginDrawing();

		EndDrawing();
	}
	CloseWindow();
}