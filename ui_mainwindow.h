/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QListWidget *listWidget;
    QSlider *verticalSlider;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QToolButton *lasttoolButton;
    QPushButton *pushButton_4;
    QToolButton *nexttoolButton;
    QSlider *horizontalSlider;
    QLabel *sjlabel;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QToolButton *toolButton_2;
    QToolButton *toolButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(650, 534);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/ico.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 40, 221, 401));
        verticalSlider = new QSlider(centralwidget);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setEnabled(true);
        verticalSlider->setGeometry(QRect(600, 420, 26, 81));
        verticalSlider->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(11, 452, 581, 46));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lasttoolButton = new QToolButton(layoutWidget);
        lasttoolButton->setObjectName(QString::fromUtf8("lasttoolButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/pre.png"), QSize(), QIcon::Normal, QIcon::Off);
        lasttoolButton->setIcon(icon1);
        lasttoolButton->setIconSize(QSize(36, 36));

        horizontalLayout->addWidget(lasttoolButton);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon2);
        pushButton_4->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(pushButton_4);

        nexttoolButton = new QToolButton(layoutWidget);
        nexttoolButton->setObjectName(QString::fromUtf8("nexttoolButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/next.png"), QSize(), QIcon::Normal, QIcon::Off);
        nexttoolButton->setIcon(icon3);
        nexttoolButton->setIconSize(QSize(36, 36));

        horizontalLayout->addWidget(nexttoolButton);

        horizontalSlider = new QSlider(layoutWidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider);

        sjlabel = new QLabel(layoutWidget);
        sjlabel->setObjectName(QString::fromUtf8("sjlabel"));

        horizontalLayout->addWidget(sjlabel);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/file.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon4);
        pushButton->setIconSize(QSize(26, 26));

        horizontalLayout_3->addWidget(pushButton);

        toolButton_2 = new QToolButton(layoutWidget);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/loop.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon5);
        toolButton_2->setIconSize(QSize(26, 26));

        horizontalLayout_3->addWidget(toolButton_2);


        horizontalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_2->addLayout(horizontalLayout);

        toolButton = new QToolButton(layoutWidget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("img/volume.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon6);
        toolButton->setIconSize(QSize(26, 26));

        horizontalLayout_2->addWidget(toolButton);

        MainWindow->setCentralWidget(centralwidget);
        verticalSlider->raise();
        layoutWidget->raise();
        listWidget->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\346\236\201\347\256\200\351\237\263\344\271\220\346\222\255\346\224\276\345\231\250", nullptr));
        lasttoolButton->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_4->setToolTip(QCoreApplication::translate("MainWindow", "\346\222\255\346\224\276", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_4->setText(QString());
        nexttoolButton->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        sjlabel->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton->setText(QString());
        toolButton_2->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
