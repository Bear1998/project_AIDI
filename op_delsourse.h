#ifndef OP_DELSOURSE_H
#define OP_DELSOURSE_H

#include <QWidget>

namespace Ui {
class op_delsourse;
}

class op_delsourse : public QWidget
{
    Q_OBJECT

public:
    explicit op_delsourse(QWidget *parent = 0);
    ~op_delsourse();

private slots:
    void exit();

private:
    Ui::op_delsourse *ui;
};

#endif // OP_DELSOURSE_H
