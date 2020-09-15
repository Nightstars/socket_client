#pragma once

#include <QtWidgets/QDialog>
#include <QDialog>
#include <QListWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QgridLayout>
#include <QHostAddress>
#include <QTcpSocket>
class Client : public QDialog
{
	Q_OBJECT

public:
	Client(QWidget *parent = Q_NULLPTR,Qt::WindowFlags f=0);
public slots:
	void slotEnter();
	void slotConnected();
	void slotDisconnected();
	void dataReceived();
	void slotSend();
private:
	QListWidget * contentListWidget;
	QLineEdit *sendLineEdit;
	QPushButton *sendBtn;
	QLabel *userNameLabel;
	QLineEdit *userNameLineEdit;
	QLabel *serverIPLabel;
	QLineEdit *serverIPLineEdit;
	QLabel *portLabel;
	QLineEdit *portLineEdit;
	QPushButton *enterBtn;
	QGridLayout *mainLayout;	
	bool status;
	int port;
	QHostAddress *serverIP;
	QString userName;
	QTcpSocket *tcpSocket;
};
