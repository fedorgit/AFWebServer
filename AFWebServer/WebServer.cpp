#include "WebServer.hpp"



namespace all
{
	Client WebServer::request()
	{
		TcpSocket tcpSocket;
		Socket::Status status = tcpListner.accept(tcpSocket);

		if (status != sf::Socket::Done)
		{
			Logger::print("������ ����������� �������. ������ ����� ��������������.");
		}

		Client result(&tcpSocket);

		return result;
	}

	void WebServer::response(Client client)
	{

		// ������ �������� ������� ������ ���� ��� ���������� ��� �����������
		// ������ �������� �������� ����� ref ������� � ������ ��������� ��� ������ (��������)
		// ������ �������� ������ �� ���������� � ������ ���������� � � ��������
		thread thread_client(sendHttp2Thread, client);
		thread_client.detach();
		this_thread::sleep_for(chrono::milliseconds(2));

	}

	void WebServer::sendHttp2Thread(Client client)
	{
		// TODO: ���� ����������� ���. ���������.
		// ...

		return;
	}

	void WebServer::init(WebConfig config)
	{
		Socket::Status status = tcpListner.listen(80);
		if (status != sf::Socket::Done)
		{
			Logger::print("���� 80 �����");
			return;
		}

		Logger::print("Web ������ ��������������� �� ����� 80");

	}

	void WebServer::start()
	{

		Logger::print("Web ������ �������");

		while (true)
		{

			Client client = this->request();

			// ������������ ������ ������������.

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
