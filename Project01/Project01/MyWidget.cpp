#include "MyWidget.h"
#include "MyPushButton.h"

#include <qpushbutton.h> // ��ť�ؼ���ͷ�ļ�
#include <QDebug>

#pragma execution_character_set("utf-8")

#include <iostream>

MyWidget::MyWidget(QWidget* parent)
	: QMainWindow(parent)
{

	// ������һ����ť
	QPushButton* button1 = new QPushButton();
	// ���ø��״���
	button1->setParent(this);
	// �����ı�
	button1->setText("��һ����ť");
	// ���ü�������
	button1->setGeometry(300, 200, 80, 40);

	// �����ڶ�����ť
	QPushButton* button2 = new QPushButton("�ڶ�����ť", this);
	// �ƶ���ť
	button2->move({ 10, 10 });
	// ���ð�ť��С
	button2->resize(100, 100);

	// ���ô��ڴ�С
	this->resize(1000, 600);
	// ���ù̶�����
	// ���ô��ڲ�������
	this->setFixedSize({ 1000, 600 });
	// ���ô��ڱ���
	this->setWindowTitle("��һ������");

	// ����һ���Լ��İ�ť����
	MyPushButton* myButton = new MyPushButton();
	myButton->setText("���Լ��İ�ť");
	myButton->move(200, 0);
	myButton->setParent(this);
	myButton->resize(100, 100);

	// ���󣺵�����Լ��İ�ť���رմ���
	// ����1���źŵķ����� ����2�����͵��źţ�������ַ��
	// ����3���źŵĽ����� ����4������Ĳۺ���
	connect(myButton, &QPushButton::clicked, this, &MyWidget::close);
}

MyWidget::~MyWidget()
{
	qDebug() << "#: ~MyWindow()";
}