#pragma once

#include "core.h"

namespace fidas {

	class FIDAS_API application
	{
	public:
		application();
		virtual ~application();

		void run();
	};

	// defined in client
	application* createApplication();

}