#include "Application.h"

int main()
{
	auto application = std::make_unique<PongRay::Application>(PongRay::Application());
	application->Run();
}