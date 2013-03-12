#include <QApplication>
#include <QTcpServer>
#include <QTcpSocket>
#include <QDebug>
#include <QSet>

namespace pwned {

class tcp_server: public QTcpServer
{
	Q_OBJECT
	public:
	QSet<QTcpSocket*> clients;

	tcp_server(int port= 4242, QObject* parent= 0)
	: QTcpServer(parent)
	{
		connect(this, SIGNAL(newConnection()), this, SLOT(handle_new_connection()));
		listen(QHostAddress::Any, port);
	}
	signals:
	void socket_connection(QTcpSocket* socket);
	void socket_data(QTcpSocket* socket, QByteArray const &data);
	void socket_disconnected(QTcpSocket* socket);

	private slots:
	void handle_new_connection()
	{
		QTcpSocket* con= nextPendingConnection();
		connect(con, SIGNAL(readyRead()), this, SLOT(handle_new_data()));
		connect(con, SIGNAL(disconnected()), this, SLOT(handle_disconnect()));
		clients.insert(con);
		emit socket_connection(con);
	}

	void handle_new_data()
	{
		QTcpSocket* client= qobject_cast<QTcpSocket*>(sender());
		emit socket_data(client, client-> read(client-> bytesAvailable()));
	}

	void handle_disconnect()
	{
		QTcpSocket* client= qobject_cast<QTcpSocket*>(sender());
		clients.remove(client);
		emit socket_disconnected(client);
	}
};

}
