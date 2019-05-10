#include "op_addsourse.h"
#include "ui_op_addsourse.h"
#include "ui_op_delsourse.h"

op_addSourse::op_addSourse(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::op_addSourse)
{
    ui->setupUi(this);
    connect(ui->exitBut,SIGNAL(clicked(bool)),this,SLOT(exit()));
}
void op_addSourse::exit()
{
    this->close();
}
op_addSourse::~op_addSourse()
{
    delete ui;
}
