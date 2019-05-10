/********************************************************************************
** Form generated from reading UI file 'op_delsourse.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OP_DELSOURSE_H
#define UI_OP_DELSOURSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_op_delsourse
{
public:
    QPushButton *exitBut;

    void setupUi(QWidget *op_delsourse)
    {
        if (op_delsourse->objectName().isEmpty())
            op_delsourse->setObjectName(QStringLiteral("op_delsourse"));
        op_delsourse->resize(400, 300);
        exitBut = new QPushButton(op_delsourse);
        exitBut->setObjectName(QStringLiteral("exitBut"));
        exitBut->setGeometry(QRect(110, 100, 141, 61));
        QFont font;
        font.setPointSize(11);
        exitBut->setFont(font);

        retranslateUi(op_delsourse);

        QMetaObject::connectSlotsByName(op_delsourse);
    } // setupUi

    void retranslateUi(QWidget *op_delsourse)
    {
        op_delsourse->setWindowTitle(QApplication::translate("op_delsourse", "Form", Q_NULLPTR));
        exitBut->setText(QApplication::translate("op_delsourse", "\347\202\271\345\207\273\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class op_delsourse: public Ui_op_delsourse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OP_DELSOURSE_H
