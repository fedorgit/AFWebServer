#include "Http.hpp"


namespace all 
{

	Http::Http(Client* client)
	{
		this->_client = client;

		Logger::print("��������� ����� ������");

		// ����� ��� �������� �������� �� ������� ������
		size_t count = 0;
		byte bufferHeaders[HTTP_HEADER_SIZE];
		memset(bufferHeaders, 0, HTTP_HEADER_SIZE);
		

	}


	string Http::getHeaders()
	{

		return string();
	}


	Http::~Http()
	{
	}
}


