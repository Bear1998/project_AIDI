/********************************************************************************
** Form generated from reading UI file 'op_addsourse.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OP_ADDSOURSE_H
#define UI_OP_ADDSOURSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_op_addSourse
{
public:
    QPushButton *exitBut;

    void setupUi(QWidget *op_addSourse)
    {
        if (op_addSourse->objectName().isEmpty())
            op_addSourse->setObjectName(QStringLiteral("op_addSourse"));
        op_addSourse->resize(400, 300);
        exitBut = new QPushButton(op_addSourse);
        exitBut->setObjectName(QStringLiteral("exitBut"));
        exitBut->setGeometry(QRect(100, 110, 161, 61));
        QFont font;
        font.setPointSize(12);
        exitBut->setFont(font);

        retranslateUi(op_addSourse);

        QMetaObject::connectSlotsByName(op_addSourse);
    } // setupUi

    void retranslateUi(QWidget *op_addSourse)
    {
        op_addSourse->setWindowTitle(QApplication::translate("op_addSourse", "Form", Q_NULLPTR));
        exitBut->setText(QApplication::translate("op_addSourse", "\347\202\271\345\207\273\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class op_addSourse: public Ui_op_addSourse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OP_ADDSOURSE_H
