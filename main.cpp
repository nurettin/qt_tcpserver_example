#include "pwned_tcp_server.h"
#include "http_handler.h"

int main(int argc, char* argv[])
{
	QApplication app(argc, argv);
	pwned::tcp_server server(4242, &app);
	http_handler handler(&server);
	QObject::connect(&server, SIGNAL(socket_connection(QTcpSocket*)), &handler, SLOT(socket_connection(QTcpSocket*)));
	QObject::connect(&server, SIGNAL(socket_disconnected(QTcpSocket*)), &handler, SLOT(socket_disconnected(QTcpSocket*)));
	QObject::connect(&server, SIGNAL(socket_data(QTcpSocket*, QByteArray const &)), &handler, SLOT(socket_data(QTcpSocket*, QByteArray const &)));

	app.exec();
}

