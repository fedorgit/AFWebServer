// All Fast Web Server 2
// Web сервер на сокетах SFML, для работы с протоколом http 

#include "WebConfig.hpp"
#include "WebServer.hpp"

using namespace all;

int main(int argc, char* argv[])
{
	// TODO: поверка входящих параметров
	// если в строке нет аргументов - запускаем WebConfig - по умолчанию
	// если есть берем конфиурацию из json файла.
	// ... 

	WebConfig webConfig;
		
	webConfig = WebConfig(argv[1]);

	WebServer webServer;
	webServer.init(webConfig);
	webServer.start();

	return 0;
}