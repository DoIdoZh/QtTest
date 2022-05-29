#include "MyWindow.h"
#include <qpushbutton.h> // ��ť�ؼ���ͷ�ļ�
#pragma execution_character_set("utf-8")

MyWindow::MyWindow(QWidget* parent)
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
	resize(1000, 600);
	// ���ù̶�����
	// ���ô��ڲ�������
	setFixedSize({ 1000, 600 });
	// ���ô��ڱ���
	setWindowTitle("��һ������");
}

MyWindow::~MyWindow()
{

}