#include <QApplication>
#include <QDesktopWidget>
#include <QSplashScreen>
#include "mainwindow.h"

int main(int argc, char* argv[]) {
	QApplication app(argc, argv);

	QSplashScreen* splash = new QSplashScreen;
	splash->setPixmap(QPixmap("./images/splash.png"));
	splash->show();

	//MainWindow *mainWin = new MainWindow;
	//mainWin->show();

	MainWindow mainWin;
	mainWin.show();
	mainWin.move((QApplication::desktop()->width() - mainWin.width()) / 2, (QApplication::desktop()->height() - mainWin.height()) / 2); //show at the middle of screen


	splash->finish(&mainWin);
	delete splash;

	return app.exec();
}