/********************************************************************************
** Form generated from reading UI file 'listwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTWIDGET_H
#define UI_LISTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListWidget
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget1;
    QWidget *tab_2;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QMainWindow *ListWidget)
    {
        if (ListWidget->objectName().isEmpty())
            ListWidget->setObjectName(QString::fromUtf8("ListWidget"));
        ListWidget->resize(243, 337);
        centralwidget = new QWidget(ListWidget);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        horizontalLayout = new QHBoxLayout(tab);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        listWidget1 = new QListWidget(tab);
        listWidget1->setObjectName(QString::fromUtf8("listWidget1"));

        horizontalLayout->addWidget(listWidget1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tab_2->setEnabled(true);
        plainTextEdit = new QPlainTextEdit(tab_2);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(0, 0, 191, 281));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(plainTextEdit->sizePolicy().hasHeightForWidth());
        plainTextEdit->setSizePolicy(sizePolicy);
        plainTextEdit->setReadOnly(true);
        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        ListWidget->setCentralWidget(centralwidget);

        retranslateUi(ListWidget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ListWidget);
    } // setupUi

    void retranslateUi(QMainWindow *ListWidget)
    {
        ListWidget->setWindowTitle(QCoreApplication::translate("ListWidget", "\346\222\255\346\224\276\345\210\227\350\241\250", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("ListWidget", "\351\273\230\350\256\244\346\255\214\345\215\225", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("ListWidget", "\344\273\213\347\273\215\357\274\232\n"
"\344\270\200\346\254\276\347\256\200\346\230\223\347\232\204\347\273\277\350\211\262\351\237\263\344\271\220\346\222\255\346\224\276\345\231\250\357\274\214\346\227\240\351\234\200\345\256\211\350\243\205\357\274\214\347\224\250\345\256\214\345\215\263\350\265\260\357\274\214\344\270\215\347\225\231\347\227\225\350\277\271\343\200\202\n"
"\344\275\277\347\224\250\350\257\264\346\230\216\357\274\232\n"
"\344\273\216\345\267\246\350\207\263\345\217\263\344\270\211\344\270\252\346\214\211\347\272\275\345\210\206\345\210\253\344\270\272 \351\200\211\346\213\251\346\226\207\344\273\266\343\200\201\346\222\255\346\224\276/\346\232\202\345\201\234\343\200\201\346\237\245\347\234\213/\351\232\220\350\227\217\346\255\214\345\215\225\357\274\214\345\260\206\351\274\240\346\240\207\345\201\234\347\225\231\345\234\250\346\214\211\351\222\256\344\270\212\344\274\232\346\230\276\347\244\272\346\217\220\347\244\272\343\200\202\n"
"1.\346\267\273\345\212\240\351\237\263\344\271\220\346"
                        "\226\207\344\273\266\357\274\232\347\202\271\345\207\273\351\200\211\346\213\251\346\226\207\344\273\266\346\214\211\351\222\256\350\277\233\350\241\214\345\215\225\344\270\252\346\210\226\345\244\232\344\270\252\351\200\211\346\213\251\345\215\263\345\217\257\357\274\214\344\271\237\345\217\257\344\273\245\347\233\264\346\216\245\346\213\226\346\224\276\346\226\207\344\273\266\345\210\260\350\275\257\344\273\266\347\252\227\345\217\243\344\270\255\350\207\252\345\212\250\350\257\206\345\210\253\346\267\273\345\212\240\346\226\207\344\273\266\357\274\214\346\267\273\345\212\240\345\256\214\346\210\220\345\220\216\344\274\232\350\207\252\345\212\250\345\276\252\347\216\257\346\222\255\346\224\276\345\210\232\346\211\215\346\267\273\345\212\240\347\232\204\351\237\263\344\271\220\357\274\233\n"
"2.\350\260\203\350\212\202\351\237\263\351\207\217\357\274\232\345\260\206\351\274\240\346\240\207\345\201\234\347\225\231\345\234\250\346\222\255\346\224\276\345\231\250\347\225\214\351\235\242\346\227\266\357\274\214\346"
                        "\273\232\345\212\250\351\274\240\346\240\207\346\273\232\350\275\256\345\215\263\345\217\257\350\260\203\350\212\202\351\237\263\351\207\217\357\274\214\351\273\230\350\256\24470%\347\232\204\351\237\263\351\207\217\343\200\202\n"
"3.\346\232\202\345\201\234\346\222\255\346\224\276\357\274\232\347\202\271\345\207\273\346\232\202\345\201\234\346\214\211\351\222\256\345\217\257\344\273\245\346\232\202\345\201\234\346\222\255\346\224\276\357\274\214\345\206\215\346\254\241\347\202\271\345\207\273\345\217\257\346\201\242\345\244\215\346\222\255\346\224\276\n"
"4.\347\202\271\345\207\273\346\255\214\345\215\225\346\214\211\351\222\256\345\217\257\344\273\245\346\237\245\347\234\213\346\222\255\346\224\276\345\210\227\350\241\250\n"
"5.\351\200\200\345\207\272\357\274\232\347\202\271\345\207\273\345\217\263\344\270\212\350\247\222\345\205\263\351\227\255\346\214\211\351\222\256\357\274\210\342\200\234 X \342\200\235\357\274\211\n"
"\n"
"\344\275\277\347\224\250\350\277\207\347\250\213\344\270\255\346\234\211\344\273"
                        "\273\344\275\225\351\227\256\351\242\230\346\210\226\345\273\272\350\256\256\350\257\267\345\217\221\351\202\256\344\273\266\345\210\260\346\210\221\344\270\213\346\226\271\347\232\204\351\202\256\347\256\261\357\274\214\350\257\264\344\270\215\345\256\232\344\270\213\346\254\241\346\233\264\346\226\260\344\275\240\345\260\261\344\270\212\346\246\234\344\272\206\345\223\237\343\200\202\n"
"Contact with E-mail:\n"
"kearneyback@gmail.com", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("ListWidget", "\350\257\264\346\230\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListWidget: public Ui_ListWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTWIDGET_H
