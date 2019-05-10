#include "aidi.h"
#include "ui_aidi.h"
#include "choosemode.h"
#include "op_addsourse.h"

AIDI::AIDI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AIDI)
{
    ui->setupUi(this);

    file_menu = new QMenu(QString::fromLocal8Bit("文件"));
    file_menu->addAction(QString::fromLocal8Bit("新建工程"));
    file_menu->addAction(QString::fromLocal8Bit("打开工程"));
    refile_menu =new QMenu(QString::fromLocal8Bit("最近工程"));
    refile_menu->addAction(QString::fromLocal8Bit("项目1"));
    refile_menu->addAction(QString::fromLocal8Bit("项目2"));
    file_menu->addMenu(refile_menu);
    file_menu->addAction(QString::fromLocal8Bit("关闭全部"));
    ui->menuBar->addMenu(file_menu);

    help_menu = new QMenu(QString::fromLocal8Bit("帮助"));
    help_menu->addAction(QString::fromLocal8Bit("获取更新"));
    help_menu->addAction(QString::fromLocal8Bit("关于AIDI"));
    help_menu->addAction(QString::fromLocal8Bit("关于公司"));
    ui->menuBar->addMenu(help_menu);

    chmode = new chooseMode();
    //connect(chmode, SIGNAL(sig_add()), this, SLOT(slt_add()));
    //statusBar->setGeometry(2,this->height()-30,this->width(),30);//设置状态栏位置

    connect(ui->op_addBut,SIGNAL(clicked(bool)),this,SLOT(op_addBut()));//信号与槽第一种connect连接
    connect(ui->op_delBut,SIGNAL(clicked(bool)),this,SLOT(op_delBut()));
    QIcon ico1(":/Resourse/srcs/add.png");
    ui->op_addBut->setIcon(ico1);
    ui->op_addBut->setIconSize(QSize(50,50));

    QIcon ico2(":/Resourse/srcs/cut.png");
    ui->op_cutBut->setIcon(ico2);
    ui->op_cutBut->setIconSize(QSize(50,50));

    QIcon ico3(":/Resourse/srcs/delete.png");
    ui->op_delBut->setIcon(ico3);
    ui->op_delBut->setIconSize(QSize(50,50));
}

AIDI::~AIDI()
{
    delete ui;
}

void AIDI::op_addBut()
{
    add_sour = new op_addSourse();
    add_sour->show();
}

void AIDI::op_delBut()
{
    del_sour = new op_delsourse();
    del_sour->show();
}

void AIDI::on_addBtn_clicked(bool checked)
{
    if(checked)
    {
        chmode = new chooseMode();
        chmode->show();
    }
}

//void AIDI::slt_add(int num)
//{
//    QPushButton* pushbutton = new QPushButton(this);
//    pushbutton->move(100,100);
//    pushbutton->resize(100,50);
//    if(num==1)
//        pushbutton->setText("选项1");
//    else if (num==2)
//        pushbutton->setText("选项2");
//    else if (num==3)
//        pushbutton->setText("选项3");
//    else
//        pushbutton->setText("选项4");
//}

//void AIDI::on_op_addBut_clicked(bool checked)  第二种，转到槽
//{
//    if(checked)
//    {
//        add_sour = new op_addSourse();
//        add_sour->show();
//    }
//}

void AIDI::on_op_cutBut_clicked(bool checked)
{
    if(checked)
    {
        cut_sour = new op_cutsourse();
        cut_sour->show();
    }
}

