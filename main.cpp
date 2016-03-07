#include "httppost.h"
#include <QtWidgets/QApplication>
#include <QTranslator>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	QTranslator *translator = new QTranslator(&a);

	//加载语言文件
	if (translator->load("httppost_zh.qm")){
		a.installTranslator(translator);
	}

	httppost w;
	w.show();
	return a.exec();
}
