#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <iostream>
#include <string>

using namespace std;

namespace all
{
	class Logger
	{
	public:
		static void print(const char* log);

		static void write(const char* log);
	};
}

#endif

