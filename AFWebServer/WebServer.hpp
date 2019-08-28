#ifndef WEBSERVER_HPP
#define WEBSERVER_HPP

#include <thread>

#include <SFML/Network.hpp>

#include "WebConfig.hpp"
#include "Client.hpp"
#include "Http.hpp"

#include "Logger.hpp"

using namespace std;
using namespace sf;

namespace all
{

	class WebServer
	{

	private:

		TcpListener tcpListner;

		Client request();

		void response(Client client);

		static void sendHttpThread(Client client);

	public:

		void init(WebConfig config);

		void start();

		bool isRun();

		void stop();


		WebServer();
		~WebServer();
	};

}

#endif