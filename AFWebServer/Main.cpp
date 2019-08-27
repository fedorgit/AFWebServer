// All Fast Web Server 2
// Web ������ �� ������� SFML, ��� ������ � ���������� http 

#include "WebConfig.hpp"
#include "WebServer.hpp"

using namespace all;

int main(int argc, char* argv[])
{
	// TODO: ������� �������� ����������
	// ���� � ������ ��� ���������� - ��������� WebConfig - �� ���������
	// ���� ���� ����� ����������� �� json �����.
	// ... 

	WebConfig webConfig;
		
	webConfig = WebConfig(argv[1]);

	WebServer webServer;
	webServer.init(webConfig);
	webServer.start();

	return 0;
}