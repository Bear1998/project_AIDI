#ifndef OP_ADDSOURSE_H
#define OP_ADDSOURSE_H

#include <QWidget>

namespace Ui {
class op_addSourse;
}

class op_addSourse : public QWidget
{
    Q_OBJECT

public:
    explicit op_addSourse(QWidget *parent = 0);
    ~op_addSourse();

private slots:
    void exit();

private:
    Ui::op_addSourse *ui;
};

#endif // OP_ADDSOURSE_H
