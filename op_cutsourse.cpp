#include "op_cutsourse.h"
#include "ui_op_cutsourse.h"

op_cutsourse::op_cutsourse(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::op_cutsourse)
{
    ui->setupUi(this);
    connect(ui->exitBut,SIGNAL(clicked(bool)),this,SLOT(exit()));
}
void op_cutsourse::exit()
{
    this->close();
}

op_cutsourse::~op_cutsourse()
{
    delete ui;
}
