#include "Client.hpp"

namespace all
{
	string Client::getAddress()
	{
		return _connection->getRemoteAddress().toString() + ":" + to_string(_connection->getRemotePort());
	}

	Client::Client(TcpSocket* connection)
	{
		this->_connection = connection;
	}

	Client::~Client()
	{
	}
}


