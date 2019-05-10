#ifndef CHOOSEMODE_H
#define CHOOSEMODE_H

#include <QMainWindow>
#include <QPushButton>

namespace Ui {
class chooseMode;
}

class chooseMode : public QMainWindow
{
    Q_OBJECT

public:
    explicit chooseMode(QWidget *parent = 0);
    ~chooseMode();
private slots:
//    void sig_add(int num);
      void exit();


private:
    Ui::chooseMode *ui;
};

#endif // CHOOSEMODE_H
