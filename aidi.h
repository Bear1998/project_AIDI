#ifndef AIDI_H
#define AIDI_H
#include "choosemode.h"
#include "op_addsourse.h"
#include "op_cutsourse.h"
#include "op_delsourse.h"

#include <QMainWindow>
#include <QMenu>
#include <QMenuBar>
#include <QStatusBar>
#include <QDebug>
#include <QIcon>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QTranslator>

namespace Ui {
class AIDI;
}

class AIDI : public QMainWindow
{
    Q_OBJECT

public:
    explicit AIDI(QWidget *parent = 0);
    ~AIDI();
    QMenu* refile_menu;
    QMenu* file_menu;
    QMenu* help_menu;
    QMenuBar* menuBar;

    chooseMode* chmode;
    op_addSourse* add_sour;
    op_cutsourse* cut_sour;
    op_delsourse* del_sour;
    //void slt_add(int num);
    void retranslate_ui();

private slots:
    void on_addBtn_clicked(bool checked);

    void op_addBut();
    void op_cutBut();
    void op_delBut();

    void change_lan();

private:
    Ui::AIDI *ui;
    int num = 1;
};

#endif // AIDI_H
