#include "op_delsourse.h"
#include "ui_op_delsourse.h"

op_delsourse::op_delsourse(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::op_delsourse)
{
    ui->setupUi(this);
    connect(ui->exitBut,SIGNAL(clicked(bool)),this,SLOT(exit()));
}
void op_delsourse::exit()
{
    this->close();
}
op_delsourse::~op_delsourse()
{
    delete ui;
}
