/********************************************************************************
** Form generated from reading UI file 'aidi.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AIDI_H
#define UI_AIDI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AIDI
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_21;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *addBtn;
    QLineEdit *top_Edit;
    QLabel *label_24;
    QHBoxLayout *horizontalLayout_14;
    QVBoxLayout *verticalLayout_18;
    QLineEdit *lineEdit;
    QWidget *widget;
    QVBoxLayout *verticalLayout_20;
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *verticalLayout_11;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QComboBox *comboBox_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QSpinBox *spinBox_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QSpinBox *spinBox_3;
    QLabel *label_6;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_4;
    QSpinBox *spinBox;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkBox_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QSpinBox *spinBox_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QSpinBox *spinBox_5;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *checkBox_7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_10;
    QSpinBox *spinBox_6;
    QVBoxLayout *verticalLayout_19;
    QLabel *label_11;
    QTableWidget *tableWidget;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *widget_3;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_15;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_12;
    QVBoxLayout *verticalLayout_6;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QLabel *label_13;
    QComboBox *comboBox_3;
    QLabel *label_14;
    QCheckBox *checkBox_8;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_15;
    QSpinBox *spinBox_7;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_16;
    QSpinBox *spinBox_8;
    QLabel *label_17;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_18;
    QSpinBox *spinBox_10;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_19;
    QSpinBox *spinBox_9;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_20;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_21;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_3;
    QVBoxLayout *verticalLayout_10;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QVBoxLayout *verticalLayout_17;
    QLabel *label_22;
    QVBoxLayout *verticalLayout_9;
    QPushButton *op_addBut;
    QPushButton *op_cutBut;
    QPushButton *op_delBut;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *AIDI)
    {
        if (AIDI->objectName().isEmpty())
            AIDI->setObjectName(QStringLiteral("AIDI"));
        AIDI->resize(1505, 973);
        centralWidget = new QWidget(AIDI);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setSpacing(6);
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        widget_6 = new QWidget(centralWidget);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        horizontalLayout_13 = new QHBoxLayout(widget_6);
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        addBtn = new QPushButton(widget_6);
        addBtn->setObjectName(QStringLiteral("addBtn"));
        QFont font;
        font.setPointSize(11);
        addBtn->setFont(font);
        addBtn->setCheckable(true);

        horizontalLayout_13->addWidget(addBtn);

        top_Edit = new QLineEdit(widget_6);
        top_Edit->setObjectName(QStringLiteral("top_Edit"));
        top_Edit->setMinimumSize(QSize(40, 40));

        horizontalLayout_13->addWidget(top_Edit);

        label_24 = new QLabel(widget_6);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setPixmap(QPixmap(QString::fromUtf8(":/Resourse/srcs/aidi-logo.png")));

        horizontalLayout_13->addWidget(label_24);


        verticalLayout_21->addWidget(widget_6);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setSpacing(6);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);

        verticalLayout_18->addWidget(lineEdit);


        horizontalLayout_14->addLayout(verticalLayout_18);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_20 = new QVBoxLayout(widget);
        verticalLayout_20->setSpacing(6);
        verticalLayout_20->setContentsMargins(11, 11, 11, 11);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        verticalLayout_20->setContentsMargins(0, 0, 0, 0);
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        verticalLayout_11->addWidget(label);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        comboBox_2 = new QComboBox(widget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        horizontalLayout->addWidget(comboBox_2);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        spinBox_2 = new QSpinBox(widget);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));

        horizontalLayout_2->addWidget(spinBox_2);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        spinBox_3 = new QSpinBox(widget);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));

        horizontalLayout_3->addWidget(spinBox_3);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 1);
        verticalLayout_2->setStretch(2, 1);

        verticalLayout_11->addLayout(verticalLayout_2);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        verticalLayout_11->addWidget(label_6);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        checkBox_2 = new QCheckBox(widget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        QFont font1;
        font1.setPointSize(10);
        checkBox_2->setFont(font1);

        verticalLayout->addWidget(checkBox_2);

        checkBox = new QCheckBox(widget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setFont(font1);

        verticalLayout->addWidget(checkBox);

        checkBox_3 = new QCheckBox(widget);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setFont(font1);

        verticalLayout->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(widget);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setFont(font1);

        verticalLayout->addWidget(checkBox_4);

        checkBox_5 = new QCheckBox(widget);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));
        checkBox_5->setFont(font1);

        verticalLayout->addWidget(checkBox_5);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 1);
        verticalLayout->setStretch(4, 1);

        verticalLayout_11->addLayout(verticalLayout);


        verticalLayout_13->addLayout(verticalLayout_11);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        spinBox = new QSpinBox(widget);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        horizontalLayout_4->addWidget(spinBox);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_4->addWidget(label_7);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 1);

        verticalLayout_12->addLayout(horizontalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        checkBox_6 = new QCheckBox(widget);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));
        checkBox_6->setFont(font1);

        verticalLayout_3->addWidget(checkBox_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_5->addWidget(label_8);

        spinBox_4 = new QSpinBox(widget);
        spinBox_4->setObjectName(QStringLiteral("spinBox_4"));

        horizontalLayout_5->addWidget(spinBox_4);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_6->addWidget(label_9);

        spinBox_5 = new QSpinBox(widget);
        spinBox_5->setObjectName(QStringLiteral("spinBox_5"));

        horizontalLayout_6->addWidget(spinBox_5);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout_6);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 1);
        verticalLayout_3->setStretch(2, 1);

        verticalLayout_12->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        checkBox_7 = new QCheckBox(widget);
        checkBox_7->setObjectName(QStringLiteral("checkBox_7"));
        checkBox_7->setFont(font1);

        verticalLayout_4->addWidget(checkBox_7);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_7->addWidget(label_10);

        spinBox_6 = new QSpinBox(widget);
        spinBox_6->setObjectName(QStringLiteral("spinBox_6"));

        horizontalLayout_7->addWidget(spinBox_6);

        horizontalLayout_7->setStretch(1, 1);

        verticalLayout_4->addLayout(horizontalLayout_7);

        verticalLayout_4->setStretch(0, 1);
        verticalLayout_4->setStretch(1, 1);

        verticalLayout_12->addLayout(verticalLayout_4);


        verticalLayout_13->addLayout(verticalLayout_12);


        verticalLayout_20->addLayout(verticalLayout_13);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setSpacing(6);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        label_11 = new QLabel(widget);
        label_11->setObjectName(QStringLiteral("label_11"));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(false);
        font2.setWeight(50);
        label_11->setFont(font2);

        verticalLayout_19->addWidget(label_11);

        tableWidget = new QTableWidget(widget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidget->rowCount() < 2)
            tableWidget->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QFont font3;
        font3.setStrikeOut(true);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font3);
        tableWidget->setItem(0, 0, __qtablewidgetitem4);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setMaximumSize(QSize(300, 200));

        verticalLayout_19->addWidget(tableWidget);


        verticalLayout_20->addLayout(verticalLayout_19);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMaximumSize(QSize(120, 40));
        QFont font4;
        font4.setPointSize(14);
        pushButton->setFont(font4);

        verticalLayout_5->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMaximumSize(QSize(120, 40));
        pushButton_2->setFont(font4);

        verticalLayout_5->addWidget(pushButton_2);


        verticalLayout_20->addLayout(verticalLayout_5);


        horizontalLayout_14->addWidget(widget);

        widget_2 = new QWidget(centralWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        scrollArea = new QScrollArea(widget_2);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 825, 789));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        horizontalLayout_14->addWidget(widget_2);

        widget_3 = new QWidget(centralWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        gridLayout_2 = new QGridLayout(widget_3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        label_12 = new QLabel(widget_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font);

        verticalLayout_14->addWidget(label_12);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        radioButton = new QRadioButton(widget_3);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setFont(font1);

        verticalLayout_6->addWidget(radioButton);

        radioButton_2 = new QRadioButton(widget_3);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setFont(font1);

        verticalLayout_6->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(widget_3);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setFont(font1);

        verticalLayout_6->addWidget(radioButton_3);

        verticalLayout_6->setStretch(0, 1);
        verticalLayout_6->setStretch(1, 1);
        verticalLayout_6->setStretch(2, 1);

        verticalLayout_14->addLayout(verticalLayout_6);

        label_13 = new QLabel(widget_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font);

        verticalLayout_14->addWidget(label_13);

        comboBox_3 = new QComboBox(widget_3);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        verticalLayout_14->addWidget(comboBox_3);

        label_14 = new QLabel(widget_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font);

        verticalLayout_14->addWidget(label_14);

        checkBox_8 = new QCheckBox(widget_3);
        checkBox_8->setObjectName(QStringLiteral("checkBox_8"));
        checkBox_8->setFont(font1);

        verticalLayout_14->addWidget(checkBox_8);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_15 = new QLabel(widget_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font1);

        horizontalLayout_8->addWidget(label_15);

        spinBox_7 = new QSpinBox(widget_3);
        spinBox_7->setObjectName(QStringLiteral("spinBox_7"));

        horizontalLayout_8->addWidget(spinBox_7);


        verticalLayout_7->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_16 = new QLabel(widget_3);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFont(font1);

        horizontalLayout_9->addWidget(label_16);

        spinBox_8 = new QSpinBox(widget_3);
        spinBox_8->setObjectName(QStringLiteral("spinBox_8"));

        horizontalLayout_9->addWidget(spinBox_8);


        verticalLayout_7->addLayout(horizontalLayout_9);

        verticalLayout_7->setStretch(0, 1);
        verticalLayout_7->setStretch(1, 1);

        verticalLayout_14->addLayout(verticalLayout_7);

        label_17 = new QLabel(widget_3);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setFont(font);

        verticalLayout_14->addWidget(label_17);


        verticalLayout_15->addLayout(verticalLayout_14);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_18 = new QLabel(widget_3);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setMaximumSize(QSize(100, 30));
        label_18->setFont(font1);

        horizontalLayout_10->addWidget(label_18);

        spinBox_10 = new QSpinBox(widget_3);
        spinBox_10->setObjectName(QStringLiteral("spinBox_10"));

        horizontalLayout_10->addWidget(spinBox_10);


        verticalLayout_8->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_19 = new QLabel(widget_3);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setFont(font1);

        horizontalLayout_11->addWidget(label_19);

        spinBox_9 = new QSpinBox(widget_3);
        spinBox_9->setObjectName(QStringLiteral("spinBox_9"));

        horizontalLayout_11->addWidget(spinBox_9);


        verticalLayout_8->addLayout(horizontalLayout_11);

        verticalLayout_8->setStretch(0, 1);
        verticalLayout_8->setStretch(1, 1);

        verticalLayout_15->addLayout(verticalLayout_8);


        gridLayout_2->addLayout(verticalLayout_15, 0, 0, 1, 1);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        label_20 = new QLabel(widget_3);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setFont(font);

        verticalLayout_16->addWidget(label_20);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_21 = new QLabel(widget_3);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setMaximumSize(QSize(90, 30));
        label_21->setFont(font1);

        horizontalLayout_12->addWidget(label_21);

        lineEdit_4 = new QLineEdit(widget_3);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setMaximumSize(QSize(50, 30));

        horizontalLayout_12->addWidget(lineEdit_4);

        pushButton_3 = new QPushButton(widget_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMaximumSize(QSize(80, 30));
        pushButton_3->setFont(font1);

        horizontalLayout_12->addWidget(pushButton_3);


        verticalLayout_16->addLayout(horizontalLayout_12);


        gridLayout_2->addLayout(verticalLayout_16, 1, 0, 1, 1);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        pushButton_4 = new QPushButton(widget_3);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setFont(font);

        verticalLayout_10->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(widget_3);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setFont(font);

        verticalLayout_10->addWidget(pushButton_5);


        gridLayout_2->addLayout(verticalLayout_10, 2, 0, 1, 1);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        label_22 = new QLabel(widget_3);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setFont(font);

        verticalLayout_17->addWidget(label_22);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        op_addBut = new QPushButton(widget_3);
        op_addBut->setObjectName(QStringLiteral("op_addBut"));
        op_addBut->setMinimumSize(QSize(40, 40));
        op_addBut->setMaximumSize(QSize(40, 40));
        op_addBut->setFont(font1);
        op_addBut->setCheckable(false);

        verticalLayout_9->addWidget(op_addBut);

        op_cutBut = new QPushButton(widget_3);
        op_cutBut->setObjectName(QStringLiteral("op_cutBut"));
        op_cutBut->setMinimumSize(QSize(40, 40));
        op_cutBut->setMaximumSize(QSize(40, 40));
        op_cutBut->setFont(font1);
        op_cutBut->setCheckable(false);

        verticalLayout_9->addWidget(op_cutBut);

        op_delBut = new QPushButton(widget_3);
        op_delBut->setObjectName(QStringLiteral("op_delBut"));
        op_delBut->setMinimumSize(QSize(40, 40));
        op_delBut->setMaximumSize(QSize(40, 40));
        op_delBut->setFont(font1);

        verticalLayout_9->addWidget(op_delBut);


        verticalLayout_17->addLayout(verticalLayout_9);


        gridLayout_2->addLayout(verticalLayout_17, 3, 0, 1, 1);


        horizontalLayout_14->addWidget(widget_3);

        horizontalLayout_14->setStretch(0, 1);
        horizontalLayout_14->setStretch(1, 1);
        horizontalLayout_14->setStretch(2, 5);
        horizontalLayout_14->setStretch(3, 1);

        verticalLayout_21->addLayout(horizontalLayout_14);


        gridLayout_3->addLayout(verticalLayout_21, 0, 0, 1, 1);

        AIDI->setCentralWidget(centralWidget);
        widget_6->raise();
        widget->raise();
        widget_2->raise();
        widget_3->raise();
        mainToolBar = new QToolBar(AIDI);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        AIDI->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(AIDI);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        AIDI->setStatusBar(statusBar);
        menuBar = new QMenuBar(AIDI);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1505, 26));
        AIDI->setMenuBar(menuBar);

        retranslateUi(AIDI);

        QMetaObject::connectSlotsByName(AIDI);
    } // setupUi

    void retranslateUi(QMainWindow *AIDI)
    {
        AIDI->setWindowTitle(QApplication::translate("AIDI", "AIDI", Q_NULLPTR));
        addBtn->setText(QApplication::translate("AIDI", "\346\267\273\345\212\240\346\250\241\345\235\227", Q_NULLPTR));
        label_24->setText(QString());
        label->setText(QApplication::translate("AIDI", "     \350\256\255\347\273\203\345\217\202\346\225\260", Q_NULLPTR));
        label_3->setText(QApplication::translate("AIDI", "\350\256\255\347\273\203\346\250\241\345\274\217", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("AIDI", "\345\215\212\347\233\221\347\235\243\346\250\241\345\274\217", Q_NULLPTR)
         << QApplication::translate("AIDI", "\347\233\221\347\235\243\346\250\241\345\236\213", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("AIDI", "\350\277\255\344\273\243\346\254\241\346\225\260", Q_NULLPTR));
        label_5->setText(QApplication::translate("AIDI", "\350\256\255\347\273\203\346\211\271\346\254\241", Q_NULLPTR));
        label_6->setText(QApplication::translate("AIDI", "      \346\225\260\346\215\256\345\244\204\347\220\206", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("AIDI", "   \344\270\212\344\270\213\347\277\273\350\275\254", Q_NULLPTR));
        checkBox->setText(QApplication::translate("AIDI", "   \345\267\246\345\217\263\347\277\273\350\275\254", Q_NULLPTR));
        checkBox_3->setText(QApplication::translate("AIDI", "   \347\233\264\350\247\222\346\227\213\350\275\254", Q_NULLPTR));
        checkBox_4->setText(QApplication::translate("AIDI", "   \350\275\273\345\276\256\346\211\260\345\212\250", Q_NULLPTR));
        checkBox_5->setText(QApplication::translate("AIDI", "   \346\250\241\347\263\212", Q_NULLPTR));
        label_7->setText(QApplication::translate("AIDI", "\346\250\241\347\263\212\350\214\203\345\233\264", Q_NULLPTR));
        checkBox_6->setText(QApplication::translate("AIDI", "   \345\271\263\347\247\273\345\217\230\346\215\242", Q_NULLPTR));
        label_8->setText(QApplication::translate("AIDI", "\346\260\264\345\271\263\345\271\263\347\247\273", Q_NULLPTR));
        label_9->setText(QApplication::translate("AIDI", "\345\236\202\347\233\264\345\271\263\347\247\273", Q_NULLPTR));
        checkBox_7->setText(QApplication::translate("AIDI", "   \345\205\211\347\205\247\345\217\230\345\214\226", Q_NULLPTR));
        label_10->setText(QApplication::translate("AIDI", "\345\217\230\345\214\226\350\214\203\345\233\264", Q_NULLPTR));
        label_11->setText(QApplication::translate("AIDI", "          \346\265\213\350\257\225\347\273\223\346\236\234", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("AIDI", "\345\217\254\345\233\236\347\216\207", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("AIDI", "\347\262\276\347\241\256\347\216\207", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("AIDI", "\346\265\213\350\257\225\351\233\206", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("AIDI", "\350\256\255\347\273\203\351\233\206", Q_NULLPTR));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        tableWidget->setSortingEnabled(__sortingEnabled);

        pushButton->setText(QApplication::translate("AIDI", "\346\267\267\346\267\206\347\237\251\351\230\265", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("AIDI", "\346\265\213\350\257\225\350\256\260\345\275\225", Q_NULLPTR));
        label_12->setText(QApplication::translate("AIDI", "     \346\230\276\347\244\272\347\261\273\345\236\213", Q_NULLPTR));
        radioButton->setText(QApplication::translate("AIDI", "  \346\230\276\347\244\272\346\265\213\350\257\225\347\273\223\346\236\234", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("AIDI", "  \346\230\276\347\244\272\346\240\207\346\263\250", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("AIDI", "  \346\230\276\347\244\272\345\216\237\345\233\276", Q_NULLPTR));
        label_13->setText(QApplication::translate("AIDI", "     \350\277\207\346\273\244\350\247\204\345\210\231", Q_NULLPTR));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("AIDI", "\346\230\276\347\244\272\346\211\200\346\234\211\345\233\276", Q_NULLPTR)
         << QApplication::translate("AIDI", "\346\230\276\347\244\272\345\255\246\345\207\272\347\274\272\351\231\267\347\232\204\345\233\276", Q_NULLPTR)
         << QApplication::translate("AIDI", "\346\230\276\347\244\272\346\234\252\345\255\246\345\207\272\347\274\272\351\231\267\347\232\204\345\233\276", Q_NULLPTR)
        );
        label_14->setText(QApplication::translate("AIDI", "     \346\265\213\350\257\225\345\217\202\346\225\260", Q_NULLPTR));
        checkBox_8->setText(QApplication::translate("AIDI", "\344\275\277\347\224\250\344\274\230\345\214\226\346\250\241\345\236\213", Q_NULLPTR));
        label_15->setText(QApplication::translate("AIDI", "\347\274\272\351\231\267\351\230\210\345\200\274", Q_NULLPTR));
        label_16->setText(QApplication::translate("AIDI", "\351\200\211\346\241\206\344\272\244\345\217\240\347\216\207", Q_NULLPTR));
        label_17->setText(QApplication::translate("AIDI", "     \347\237\251\345\275\242\345\217\202\346\225\260", Q_NULLPTR));
        label_18->setText(QApplication::translate("AIDI", "  \351\253\230\345\272\246", Q_NULLPTR));
        label_19->setText(QApplication::translate("AIDI", "  \345\256\275\345\272\246", Q_NULLPTR));
        label_20->setText(QApplication::translate("AIDI", "       \346\225\260\346\215\256\346\223\215\344\275\234", Q_NULLPTR));
        label_21->setText(QApplication::translate("AIDI", "\345\210\222\345\210\206\346\257\224\344\276\213", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("AIDI", "\347\224\237\346\210\220", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("AIDI", "\347\274\226\350\276\221\346\212\245\350\241\250", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("AIDI", "\345\257\274\345\207\272\346\212\245\350\241\250", Q_NULLPTR));
        label_22->setText(QApplication::translate("AIDI", "\346\223\215\344\275\234", Q_NULLPTR));
        op_addBut->setText(QString());
        op_cutBut->setText(QString());
        op_delBut->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AIDI: public Ui_AIDI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AIDI_H
