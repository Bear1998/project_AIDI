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
    QAction* Change_lun = new QAction(this);
    Change_lun->setText(QString::fromLocal8Bit("切换语言"));
    help_menu->addAction(Change_lun);
    ui->menuBar->addMenu(help_menu);


    connect(Change_lun, SIGNAL(triggered()), this, SLOT(change_lan()));

    connect(ui->op_addBut,SIGNAL(clicked(bool)),this,SLOT(op_addBut()));//信号与槽第一种connect连接
    connect(ui->op_delBut,SIGNAL(clicked(bool)),this,SLOT(op_delBut()));
    connect(ui->op_cutBut,SIGNAL(clicked(bool)),this,SLOT(op_cutBut()));
    QIcon ico1(":/Resourse/srcs/add.png");
    ui->op_addBut->setIcon(ico1);
    ui->op_addBut->setIconSize(QSize(50,50));

    QIcon ico2(":/Resourse/srcs/cut.png");
    ui->op_cutBut->setIcon(ico2);
    ui->op_cutBut->setIconSize(QSize(50,50));

    QIcon ico3(":/Resourse/srcs/delete.png");
    ui->op_delBut->setIcon(ico3);
    ui->op_delBut->setIconSize(QSize(50,50));

    QHBoxLayout* Hlayout1 = new QHBoxLayout();
    QHBoxLayout* Hlayout2 = new QHBoxLayout();
    QVBoxLayout* main_layout = new QVBoxLayout();

   // ui->top_Edit->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    //ui->low_left_Edit->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    //ui->low_mid_Edit->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);

//    Hlayout1->addWidget(ui->top_Edit);
//    Hlayout2->addWidget(ui->low_left_Edit);
//    Hlayout2->addWidget(ui->low_mid_Edit);

    main_layout->addLayout(Hlayout1);
    main_layout->addLayout(Hlayout2);
    main_layout->setStretchFactor(Hlayout1, 1);//设置布局管理器比例系数
    main_layout->setStretchFactor(Hlayout2, 10);
    setLayout(main_layout);

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
void AIDI::op_cutBut()
{
    cut_sour = new op_cutsourse();
    cut_sour->show();
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

//void AIDI::on_op_addBut_clicked(bool checked)  第二种，转到槽
//{
//    if(checked)
//    {
//        add_sour = new op_addSourse();
//        add_sour->show();
//    }
//}


void AIDI::retranslate_ui()
{
    ui->label->setText(tr("Training parameters"));
    ui->label_5->setText(tr("data processing"));
    ui->label_11->setText(tr("test result"));
    //setWindowTitle(tr("AIDI"));
}
void AIDI::change_lan()
{
    QTranslator translator;
    if(num&1)
    {
        qDebug()<<"英文";
        translator.load(":/Resourse/en.qm");
        num++;
        qDebug()<<num;
    }
    else
    {
        qDebug()<<"中文";
        translator.load(":/Resourse/cn.qm");
        num++;
        qDebug()<<num;
    }
    qApp->installTranslator(&translator);
    retranslate_ui();
}
