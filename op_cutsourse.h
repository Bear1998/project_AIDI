#ifndef OP_CUTSOURSE_H
#define OP_CUTSOURSE_H

#include <QWidget>

namespace Ui {
class op_cutsourse;
}

class op_cutsourse : public QWidget
{
    Q_OBJECT

public:
    explicit op_cutsourse(QWidget *parent = 0);
    ~op_cutsourse();


private slots:
    void exit();

private:
    Ui::op_cutsourse *ui;
};

#endif // OP_CUTSOURSE_H
