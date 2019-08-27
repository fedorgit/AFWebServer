#include "WebServer.hpp"



namespace all
{
	Client WebServer::request()
	{
		TcpSocket tcpSocket;
		Socket::Status status = tcpListner.accept(tcpSocket);

		if (status != sf::Socket::Done)
		{
			Logger::print("Ошибка подключения клиента. Клиент будет проигнорирован.");
		}

		Client result(&tcpSocket);

		return result;
	}

	void WebServer::response(Client client)
	{

		// Первый аргумент функция должна быть или глобальной или статической
		// Второй аргумент передаем через ref обертку и видимо принимает как ссылку (устарело)
		// Просто передаем ссылку на выделенную в памяти соединение с к клиентом
		thread thread_client(sendHttp2Thread, client);
		thread_client.detach();
		this_thread::sleep_for(chrono::milliseconds(2));

	}

	void WebServer::sendHttp2Thread(Client client)
	{
		// TODO: если понадобится доп. обработка.
		// ...

		return;
	}

	void WebServer::init(WebConfig config)
	{
		Socket::Status status = tcpListner.listen(80);
		if (status != sf::Socket::Done)
		{
			Logger::print("Порт 80 занят");
			return;
		}

		Logger::print("Web сервер инициализирован на порту 80");

	}

	void WebServer::start()
	{

		Logger::print("Web сервер запущен");

		while (true)
		{

			Client client = this->request();

			// Регистрируем нового пользователя.

			this->response(client);
		}

	}

	WebServer::WebServer()
	{
	}


	WebServer::~WebServer()
	{
	}
}
