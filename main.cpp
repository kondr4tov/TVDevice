#include <QApplication>
#include <QPushButton>
#include "./ui_pult.h"
#include "pult.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    Device window(nullptr);
    Ui::MainWindow device;
    device.setupUi(&window);

    window.lineEdit = device.lineEdit;

    window.show();
    return QApplication::exec();
}
