#include "choosemode.h"
#include "ui_choosemode.h"
#include "aidi.h"

chooseMode::chooseMode(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::chooseMode)
{
    ui->setupUi(this);
    connect(ui->chooseBtn1,SIGNAL(clicked(bool)),this,SLOT(exit()));
    connect(ui->chooseBtn2,SIGNAL(clicked(bool)),this,SLOT(exit()));
    connect(ui->chooseBtn3,SIGNAL(clicked(bool)),this,SLOT(exit()));
    connect(ui->chooseBtn4,SIGNAL(clicked(bool)),this,SLOT(exit()));

}

void chooseMode::exit()
{
    this->close();
}

chooseMode::~chooseMode()
{
    delete ui;
}
