/********************************************************************************
** Form generated from reading UI file 'choosemode.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEMODE_H
#define UI_CHOOSEMODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chooseMode
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QPushButton *chooseBtn1;
    QPushButton *chooseBtn2;
    QPushButton *chooseBtn3;
    QPushButton *chooseBtn4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *chooseMode)
    {
        if (chooseMode->objectName().isEmpty())
            chooseMode->setObjectName(QStringLiteral("chooseMode"));
        chooseMode->resize(211, 391);
        centralwidget = new QWidget(chooseMode);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        chooseBtn1 = new QPushButton(centralwidget);
        chooseBtn1->setObjectName(QStringLiteral("chooseBtn1"));
        QFont font;
        font.setPointSize(11);
        chooseBtn1->setFont(font);
        chooseBtn1->setCheckable(true);

        verticalLayout->addWidget(chooseBtn1);

        chooseBtn2 = new QPushButton(centralwidget);
        chooseBtn2->setObjectName(QStringLiteral("chooseBtn2"));
        chooseBtn2->setFont(font);
        chooseBtn2->setCheckable(true);

        verticalLayout->addWidget(chooseBtn2);

        chooseBtn3 = new QPushButton(centralwidget);
        chooseBtn3->setObjectName(QStringLiteral("chooseBtn3"));
        chooseBtn3->setFont(font);
        chooseBtn3->setCheckable(true);

        verticalLayout->addWidget(chooseBtn3);

        chooseBtn4 = new QPushButton(centralwidget);
        chooseBtn4->setObjectName(QStringLiteral("chooseBtn4"));
        chooseBtn4->setFont(font);
        chooseBtn4->setCheckable(true);

        verticalLayout->addWidget(chooseBtn4);

        chooseMode->setCentralWidget(centralwidget);
        menubar = new QMenuBar(chooseMode);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 211, 26));
        chooseMode->setMenuBar(menubar);
        statusbar = new QStatusBar(chooseMode);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        chooseMode->setStatusBar(statusbar);

        retranslateUi(chooseMode);

        QMetaObject::connectSlotsByName(chooseMode);
    } // setupUi

    void retranslateUi(QMainWindow *chooseMode)
    {
        chooseMode->setWindowTitle(QApplication::translate("chooseMode", "MainWindow", Q_NULLPTR));
        chooseBtn1->setText(QApplication::translate("chooseMode", "\346\250\241\345\235\2271", Q_NULLPTR));
        chooseBtn2->setText(QApplication::translate("chooseMode", "\346\250\241\345\235\2272", Q_NULLPTR));
        chooseBtn3->setText(QApplication::translate("chooseMode", "\346\250\241\345\235\2273", Q_NULLPTR));
        chooseBtn4->setText(QApplication::translate("chooseMode", "\346\250\241\345\235\2274", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class chooseMode: public Ui_chooseMode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEMODE_H
