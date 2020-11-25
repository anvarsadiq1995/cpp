#include<QApplication>
#include<QLabel>

int main(int argc, char *argv[ ])
{
QApplication app(argc, argv);
QLabel label("HELLO THIS IS SREEJITH");
label.resize(500,500);
label.show();
return app.exec();
}
