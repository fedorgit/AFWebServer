#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <string>
#include <sstream>
#include <cstdlib>

#include <SFML/Network.hpp>

using namespace std;
using namespace sf;

namespace all
{

	class Client
	{
	private:

		TcpSocket* _connection;

	public:

		string getAddress();


		Client(TcpSocket* connection);
		~Client();
	};
}

#endif

