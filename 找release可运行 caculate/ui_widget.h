/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lo;
    QGridLayout *gridLayout;
    QPushButton *bc;
    QPushButton *bp;
    QPushButton *bm;
    QPushButton *bd;
    QPushButton *b7;
    QPushButton *b8;
    QPushButton *b9;
    QPushButton *bt;
    QPushButton *b4;
    QPushButton *b5;
    QPushButton *b6;
    QPushButton *bm_2;
    QPushButton *b1;
    QPushButton *b2;
    QPushButton *b3;
    QPushButton *bl;
    QPushButton *b0;
    QPushButton *br;
    QPushButton *be;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(150, 140, 182, 274));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lo = new QLineEdit(widget);
        lo->setObjectName(QString::fromUtf8("lo"));
        lo->setMinimumSize(QSize(40, 40));
        QFont font;
        font.setPointSize(13);
        lo->setFont(font);

        verticalLayout->addWidget(lo);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        bc = new QPushButton(widget);
        bc->setObjectName(QString::fromUtf8("bc"));
        bc->setMinimumSize(QSize(40, 40));
        bc->setMaximumSize(QSize(40, 40));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(11);
        bc->setFont(font1);

        gridLayout->addWidget(bc, 0, 0, 1, 1);

        bp = new QPushButton(widget);
        bp->setObjectName(QString::fromUtf8("bp"));
        bp->setMinimumSize(QSize(40, 40));
        bp->setMaximumSize(QSize(40, 40));
        bp->setFont(font1);

        gridLayout->addWidget(bp, 0, 1, 1, 1);

        bm = new QPushButton(widget);
        bm->setObjectName(QString::fromUtf8("bm"));
        bm->setMinimumSize(QSize(40, 40));
        bm->setMaximumSize(QSize(40, 40));
        bm->setFont(font1);

        gridLayout->addWidget(bm, 0, 2, 1, 1);

        bd = new QPushButton(widget);
        bd->setObjectName(QString::fromUtf8("bd"));
        bd->setMinimumSize(QSize(40, 40));
        bd->setMaximumSize(QSize(40, 40));
        bd->setFont(font1);

        gridLayout->addWidget(bd, 0, 3, 1, 1);

        b7 = new QPushButton(widget);
        b7->setObjectName(QString::fromUtf8("b7"));
        b7->setMinimumSize(QSize(40, 40));
        b7->setMaximumSize(QSize(40, 40));
        b7->setFont(font1);

        gridLayout->addWidget(b7, 1, 0, 1, 1);

        b8 = new QPushButton(widget);
        b8->setObjectName(QString::fromUtf8("b8"));
        b8->setMinimumSize(QSize(40, 40));
        b8->setMaximumSize(QSize(40, 40));
        b8->setFont(font1);

        gridLayout->addWidget(b8, 1, 1, 1, 1);

        b9 = new QPushButton(widget);
        b9->setObjectName(QString::fromUtf8("b9"));
        b9->setMinimumSize(QSize(40, 40));
        b9->setMaximumSize(QSize(40, 40));
        b9->setFont(font1);

        gridLayout->addWidget(b9, 1, 2, 1, 1);

        bt = new QPushButton(widget);
        bt->setObjectName(QString::fromUtf8("bt"));
        bt->setMinimumSize(QSize(40, 40));
        bt->setMaximumSize(QSize(40, 40));
        bt->setFont(font1);

        gridLayout->addWidget(bt, 1, 3, 1, 1);

        b4 = new QPushButton(widget);
        b4->setObjectName(QString::fromUtf8("b4"));
        b4->setMinimumSize(QSize(40, 40));
        b4->setMaximumSize(QSize(40, 40));
        b4->setFont(font1);

        gridLayout->addWidget(b4, 2, 0, 1, 1);

        b5 = new QPushButton(widget);
        b5->setObjectName(QString::fromUtf8("b5"));
        b5->setMinimumSize(QSize(40, 40));
        b5->setMaximumSize(QSize(40, 40));
        b5->setFont(font1);

        gridLayout->addWidget(b5, 2, 1, 1, 1);

        b6 = new QPushButton(widget);
        b6->setObjectName(QString::fromUtf8("b6"));
        b6->setMinimumSize(QSize(40, 40));
        b6->setMaximumSize(QSize(40, 40));
        b6->setFont(font1);

        gridLayout->addWidget(b6, 2, 2, 1, 1);

        bm_2 = new QPushButton(widget);
        bm_2->setObjectName(QString::fromUtf8("bm_2"));
        bm_2->setMinimumSize(QSize(40, 40));
        bm_2->setMaximumSize(QSize(40, 40));
        bm_2->setFont(font1);

        gridLayout->addWidget(bm_2, 2, 3, 1, 1);

        b1 = new QPushButton(widget);
        b1->setObjectName(QString::fromUtf8("b1"));
        b1->setMinimumSize(QSize(40, 40));
        b1->setMaximumSize(QSize(40, 40));
        b1->setFont(font1);

        gridLayout->addWidget(b1, 3, 0, 1, 1);

        b2 = new QPushButton(widget);
        b2->setObjectName(QString::fromUtf8("b2"));
        b2->setMinimumSize(QSize(40, 40));
        b2->setMaximumSize(QSize(40, 40));
        b2->setFont(font1);

        gridLayout->addWidget(b2, 3, 1, 1, 1);

        b3 = new QPushButton(widget);
        b3->setObjectName(QString::fromUtf8("b3"));
        b3->setMinimumSize(QSize(40, 40));
        b3->setMaximumSize(QSize(40, 40));
        b3->setFont(font1);

        gridLayout->addWidget(b3, 3, 2, 1, 1);

        bl = new QPushButton(widget);
        bl->setObjectName(QString::fromUtf8("bl"));
        bl->setMinimumSize(QSize(40, 40));
        bl->setMaximumSize(QSize(40, 40));
        bl->setFont(font1);

        gridLayout->addWidget(bl, 4, 0, 1, 1);

        b0 = new QPushButton(widget);
        b0->setObjectName(QString::fromUtf8("b0"));
        b0->setMinimumSize(QSize(40, 40));
        b0->setMaximumSize(QSize(40, 40));
        b0->setFont(font1);

        gridLayout->addWidget(b0, 4, 1, 1, 1);

        br = new QPushButton(widget);
        br->setObjectName(QString::fromUtf8("br"));
        br->setMinimumSize(QSize(40, 40));
        br->setMaximumSize(QSize(40, 40));
        br->setFont(font1);

        gridLayout->addWidget(br, 4, 2, 1, 1);

        be = new QPushButton(widget);
        be->setObjectName(QString::fromUtf8("be"));
        be->setMinimumSize(QSize(40, 40));
        be->setMaximumSize(QSize(40, 80));
        be->setFont(font1);

        gridLayout->addWidget(be, 3, 3, 2, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        lo->setText(QString());
        bc->setText(QCoreApplication::translate("Widget", "C", nullptr));
        bp->setText(QCoreApplication::translate("Widget", "+", nullptr));
        bm->setText(QCoreApplication::translate("Widget", "-", nullptr));
        bd->setText(QString());
        b7->setText(QCoreApplication::translate("Widget", "7", nullptr));
        b8->setText(QCoreApplication::translate("Widget", "8", nullptr));
        b9->setText(QCoreApplication::translate("Widget", "9", nullptr));
        bt->setText(QCoreApplication::translate("Widget", "*", nullptr));
        b4->setText(QCoreApplication::translate("Widget", "4", nullptr));
        b5->setText(QCoreApplication::translate("Widget", "5", nullptr));
        b6->setText(QCoreApplication::translate("Widget", "6", nullptr));
        bm_2->setText(QCoreApplication::translate("Widget", "/", nullptr));
        b1->setText(QCoreApplication::translate("Widget", "1", nullptr));
        b2->setText(QCoreApplication::translate("Widget", "2", nullptr));
        b3->setText(QCoreApplication::translate("Widget", "3", nullptr));
        bl->setText(QCoreApplication::translate("Widget", "(", nullptr));
        b0->setText(QCoreApplication::translate("Widget", "0", nullptr));
        br->setText(QCoreApplication::translate("Widget", ")", nullptr));
        be->setText(QCoreApplication::translate("Widget", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
