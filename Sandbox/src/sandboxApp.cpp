#include <fidas.h>

class Sandbox : public fidas::application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

fidas::application* fidas::createApplication()
{
	return new Sandbox();
}