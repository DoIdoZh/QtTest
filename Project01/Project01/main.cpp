#include "MyWindow.h"
#include <QtWidgets/QApplication>

int main(int argc, char* argv[])
{
	// Ӧ�ó������ֻ����һ��
	QApplication a(argc, argv);
	// �ҵĴ��� ���ࣺQMainWindow
	MyWindow window;
	// ����Ĭ�ϲ���ʾ
	// show()������ʾ����
	window.show();

	// ��Ӧ�ó�����������Ϣѭ��
	return a.exec();
}
