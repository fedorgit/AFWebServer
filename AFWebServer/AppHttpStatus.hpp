char respons400[] = "HTTP/1.1 400 Bad Request\r\nServer: AllFastWebServer 0.1\r\nContent-Type: text/html\r\nContent-Length: 112\r\n\r\n"
	"<html><head><title>AllFastWebServer</title></head><body><center><h1>400 Bad Request</h1></center></body></html>";

char respons404[] = "HTTP/1.1 404 Not Found\r\nServer: AllFastWebServer 0.1\r\nContent-Type: text/html\r\nContent-Length: 110\r\n\r\n"
	"<html><head><title>AllFastWebServer</title></head><body><center><h1>404 Not Found</h1></center></body></html>";

// Неподдерживаемый тип данных
char respons415[] = "HTTP/1.1 415 Unsupported Media Type\r\nServer: AllFastWebServer 0.1\r\nContent-Type: text/html\r\nContent-Length: 123\r\n\r\n"
	"<html><head><title>AllFastWebServer</title></head><body><center><h1>415 Unsupported Media Type</h1></center></body></html>";
			
char respons417[] = "HTTP/1.1 417 Expectation Failed\r\nServer: AllFastWebServer 0.1\r\nContent-Type: text/html\r\nContent-Length: 119\r\n\r\n"
	"<html><head><title>AllFastWebServer</title></head><body><center><h1>417 Expectation Failed</h1></center></body></html>";

char respons500[] = "HTTP/1.1 500 Internal Server Error\r\nServer: AllFastWebServer 0.1\r\nContent-Type: text/html\r\nContent-Length: 122\r\n\r\n"
	"<html><head><title>AllFastWebServer</title></head><body><center><h1>500 Internal Server Error</h1></center></body></html>";

char respons520[] = "HTTP/1.1 520 Unknown Error\r\nServer: AllFastWebServer 0.1\r\nContent-Type: text/html\r\nContent-Length: 114\r\n\r\n"
	"<html><head><title>AllFastWebServer</title></head><body><center><h1>520 Unknown Error</h1></center></body></html>";
