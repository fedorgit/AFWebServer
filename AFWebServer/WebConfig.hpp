#ifndef WEBCONFIG_HPP
#define WEBCONFIG_HPP

#include <string>

using namespace std;

namespace all
{
	class WebConfig
	{
	public:
		uint16_t port;

		WebConfig();

		WebConfig(const string& pathConfig);

		~WebConfig();
	};
}


#endif
