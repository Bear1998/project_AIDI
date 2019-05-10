/********************************************************************************
** Form generated from reading UI file 'op_cutsourse.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OP_CUTSOURSE_H
#define UI_OP_CUTSOURSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_op_cutsourse
{
public:
    QPushButton *exitBut;

    void setupUi(QWidget *op_cutsourse)
    {
        if (op_cutsourse->objectName().isEmpty())
            op_cutsourse->setObjectName(QStringLiteral("op_cutsourse"));
        op_cutsourse->resize(400, 300);
        exitBut = new QPushButton(op_cutsourse);
        exitBut->setObjectName(QStringLiteral("exitBut"));
        exitBut->setGeometry(QRect(130, 110, 121, 51));
        QFont font;
        font.setPointSize(12);
        exitBut->setFont(font);

        retranslateUi(op_cutsourse);

        QMetaObject::connectSlotsByName(op_cutsourse);
    } // setupUi

    void retranslateUi(QWidget *op_cutsourse)
    {
        op_cutsourse->setWindowTitle(QApplication::translate("op_cutsourse", "Form", Q_NULLPTR));
        exitBut->setText(QApplication::translate("op_cutsourse", "\347\202\271\345\207\273\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class op_cutsourse: public Ui_op_cutsourse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OP_CUTSOURSE_H
