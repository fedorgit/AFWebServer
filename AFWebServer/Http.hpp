#ifndef HTTP_HPP
#define HTTP_HPP


#include "AppConfig.hpp"
#include "Client.hpp"
#include "Logger.hpp"

using namespace std;

namespace all
{

	// 
	// ����� ��� ��������� ��������� Http2
	// ������ ����������, ��������� ��������.
	// �� ������ ���������� ��������� ������� ��������� ������ ��� ���.
	// 

	// https://httpwg.org/specs/rfc7540.html#top

	class Http
	{
	private:


		Client* _client;

		string getHeaders();

	public:

		Http(Client* client);
		~Http();
	};

}

#endif