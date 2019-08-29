#include "Http.hpp"


namespace all 
{

	Http::Http(Client* client)
	{
		this->_client = client;

		Logger::print("Подключен новый клиент");

		this->_bufferHeaders = new byte[HTTP_HEADER_SIZE];

		memset(this->_bufferHeaders, 0, HTTP_HEADER_SIZE);

		this->_bufferBody = new byte[HTTP_BODY_SIZE];

		memset(this->_bufferBody, 0, HTTP_BODY_SIZE);

		
		



	}


	string Http::getHeaders()
	{

		size_t count = 0;

		TcpSocket* socket = this->_client->getSocket();

		do
		{
			Socket::Status statusRequest = socket->receive(_bufferHeaders, HTTP_HEADER_SIZE, count);

			if (statusRequest == Socket::NotReady)
				continue;


			if (statusRequest != Socket::Done)
			{
				this->sendError(417);
				return;
			}

			if (count > 0)
			{
				request.append(buffer);

				if (request.find("\r\n\r\n") != string::npos || request.length() > HTTP_HEADER_SIZE)
				{
					break;
				}
			}

		} while (true);



		return string();
	}

	void Http::sendError(int code)
	{
		TcpSocket* socket = this->_client->getSocket();

		switch (code)
		{
			
		case 400:
			socket->send(respons400, sizeof(respons400));
			break;

		case 404:
			socket->send(respons404, sizeof(respons404));
			break;

		case 415:
			socket->send(respons415, sizeof(respons415));
			break;

		case 417:
			socket->send(respons417, sizeof(respons417));
			break;

		case 500:
			socket->send(respons500, sizeof(respons500));
			break;

		case 520:
			socket->send(respons520, sizeof(respons520));
			break;

		default:
			socket->send(respons500, sizeof(respons500));
			break;
		}

	}


	Http::~Http()
	{
	}
}


