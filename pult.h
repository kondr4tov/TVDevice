//
// Created by Андрей Кондратов on 08.12.2021.
//

#ifndef UNTITLED10_PULT_H
#define UNTITLED10_PULT_H

#include <QMainWindow>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

class Device : public QMainWindow {

    Q_OBJECT

public:

    QLineEdit* lineEdit = nullptr;
    QPushButton* buttonOn = nullptr;

    Device (QWidget* parent = nullptr) : QMainWindow(parent) {};

public slots:

    void add1() {
    if(!onOff) {}
    else {
        currentCh = 1;
        lineEdit->setText("Chanel: " + QString::number(currentCh) + ". Volume: " + QString::number(volume));
    }
    };
    void add2() {
        if(!onOff) {}
        else {
            currentCh = 2;
            lineEdit->setText("Chanel: " + QString::number(currentCh) + ". Volume: " + QString::number(volume));
        }
    };
    void add3() {
        if(!onOff) {}
        else {
            currentCh = 3;
            lineEdit->setText("Chanel: " + QString::number(currentCh) + ". Volume: " + QString::number(volume));
        }
    };
    void add4() {
        if(!onOff) {}
        else {
            currentCh = 4;
            lineEdit->setText("Chanel: " + QString::number(currentCh) + ". Volume: " + QString::number(volume));
        }
    };
    void add5() {
        if(!onOff) {}
        else {
            currentCh = 5;
            lineEdit->setText("Chanel: " + QString::number(currentCh) + ". Volume: " + QString::number(volume));
        }
    };
    void add6() {
        if(!onOff) {}
        else {
            currentCh = 6;
            lineEdit->setText("Chanel: " + QString::number(currentCh) + ". Volume: " + QString::number(volume));
        }
    };
    void add7() {
        if(!onOff) {}
        else {
            currentCh = 7;
            lineEdit->setText("Chanel: " + QString::number(currentCh) + ". Volume: " + QString::number(volume));
        }
    };
    void add8() {
        if(!onOff) {}
        else {
            currentCh = 8;
            lineEdit->setText("Chanel: " + QString::number(currentCh) + ". Volume: " + QString::number(volume));
        }
    };
    void add9() {
        if(!onOff) {}
        else {
            currentCh = 9;
            lineEdit->setText("Chanel: " + QString::number(currentCh) + ". Volume: " + QString::number(volume));
        }
    };
    void add0() {
        if(!onOff) {}
        else {
            currentCh = 0;
            lineEdit->setText("Chanel: " + QString::number(currentCh) + ". Volume: " + QString::number(volume));
        }
    };

    void plus() {
        if(!onOff) {}
        else {
            volume++;
            if(volume > 100) volume = 100;
            lineEdit->setText("Chanel: " + QString::number(currentCh) + ". Volume: " + QString::number(volume));
        }
    };
    void minus() {
        if(!onOff) {}
        else {
            volume--;
            if(volume < 0) volume = 0;
            lineEdit->setText("Chanel: " + QString::number(currentCh) + ". Volume: " + QString::number(volume));
        }
    };
    void up() {
        if(!onOff) {}
        else {
            currentCh++;
            if (currentCh > 100) currentCh = 100;
            lineEdit->setText("Chanel: " + QString::number(currentCh) + ". Volume: " + QString::number(volume));
        }
    };
    void down() {
        if(!onOff) {}
        else {
            currentCh--;
            if (currentCh < 0) currentCh = 0;
            lineEdit->setText("Chanel: " + QString::number(currentCh) + ". Volume: " + QString::number(volume));
        }
    };
    void power() {
        if(!onOff) {
            onOff = true;
            lineEdit->setText("ON");
        }
        else {
            onOff = false;
            lineEdit->setText("OFF");
        }
    };

private:

    int currentCh;
    int volume;
    bool onOff = false;

};


#endif //UNTITLED10_PULT_H
