#include "MyWidget.h"
#include <QtWidgets/QApplication>

int main(int argc, char* argv[])
{
	// Ӧ�ó������ֻ����һ��
	QApplication a(argc, argv);
	// �ҵĴ��� ���ࣺQMainWindow
	MyWidget w;
	// ����Ĭ�ϲ���ʾ
	// show()������ʾ����
	w.show();

	// ��Ӧ�ó�����������Ϣѭ��
	return a.exec();
}
