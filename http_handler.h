#include <QObject>
#include <QTcpSocket>
#include <QDebug>

class http_handler: public QObject
{
	Q_OBJECT
	
	public:
	http_handler(QObject* parent)
	: QObject(parent)
	{}

	signals:
	void get(QString const &uri);

	public slots:
	void socket_connection(QTcpSocket* socket)
	{
	}

	void socket_disconnected(QTcpSocket* socket)
	{
	}

	void socket_data(QTcpSocket* socket, QByteArray const &data)
	{
		qDebug()<< "got data! "<< data;
		if(data.startsWith("GET"))
		{
			socket-> write(
				"HTTP/1.0 200 OK \
				Date: Fri, 31 Dec 1999 23:59:59 GMT \
				Content-Type: text/html \
				Content-Length: 1354 \
				\
				<html> \
				<body> \
				<h1>Happy New Millennium!</h1> \
				</body> \
				</html>"
			);
			socket-> flush();
			
		}
	}
};
