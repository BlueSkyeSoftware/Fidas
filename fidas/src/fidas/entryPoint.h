#pragma once

#ifdef FD_PLATFORM_WINDOWS

extern fidas::application* fidas::createApplication();

int main(int argc, char** argv)
{
	auto app = fidas::createApplication();
	app->run();
	delete app;
}

#else
	#error Fidas only supports Windows!
#endif