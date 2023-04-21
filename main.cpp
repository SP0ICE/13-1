#include <QtWidgets>
#include <QDebug>
#include <QFile>

class MainWindow:public QMainWindow {
  public:
  MainWindow();
};

MainWindow::MainWindow() {
int widthWindow=700;
int heightWindow=200;
qDebug()<<widthWindow<<heightWindow;
QFile file("config.ini");
file.open(QFile::ReadOnly);
QString strWidth, strHeight;
strWidth=file.readLine();
strHeight=file.readLine();
qDebug()<<strWidth<<strHeight;
file.close();
widthWindow=strWidth.toInt();
heightWindow=strHeight.toInt();
resize(widthWindow,heightWindow);
}
int main(int argc, char *argv[]) {
  QApplication app(argc,argv);
  MainWindow mainWin;
  mainWin.show();
  return app.exec();
}
