/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction      *actionWyj_cie;
    QAction      *actionUstawienia;
    QAction      *actionPo_cz;
    QAction      *actionRoz_cz;
    QAction      *actionUUstawienia;
    QAction      *actionRozszerzanie;
    QWidget      *centralWidget;
    QGridLayout  *refreshpasek;
    QHBoxLayout  *horizontalLayout;
    QGridLayout  *gridLayout[2];

    QPushButton **statki;
    QSplitter    *splitter;
    QProgressBar *progressBar;
    QPushButton  *refresh;
    QMenuBar     *menuBar;
    QMenu        *menuUstawienia;
    QMenu        *menuWyglad;
    QMenu        *menuWyj_cie;
    QStatusBar   *statusBar;


    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1030, 607);
        actionWyj_cie = new QAction(MainWindow);
        actionWyj_cie->setObjectName(QStringLiteral("actionWyj_cie"));
        actionUstawienia = new QAction(MainWindow);
        actionUstawienia->setObjectName(QStringLiteral("actionUstawienia"));
        actionUstawienia->setIconVisibleInMenu(false);
        actionPo_cz = new QAction(MainWindow);
        actionPo_cz->setObjectName(QStringLiteral("actionPo_cz"));
        actionRoz_cz = new QAction(MainWindow);
        actionRoz_cz->setObjectName(QStringLiteral("actionRoz_cz"));
        actionRoz_cz->setEnabled(false);
        actionRoz_cz->setVisible(true);
        actionRoz_cz->setIconVisibleInMenu(true);


        actionUUstawienia = new QAction(MainWindow);
        actionUUstawienia->setObjectName(QStringLiteral("actionUUstawienia"));
        actionRozszerzanie = new QAction(MainWindow);
        actionRozszerzanie->setObjectName(QStringLiteral("actionRozszerzanie"));
        actionRozszerzanie->setCheckable(true);

        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setLayoutDirection(Qt::LeftToRight);
        refreshpasek = new QGridLayout(centralWidget);
        refreshpasek->setSpacing(0);
        refreshpasek->setContentsMargins(11, 11, 11, 11);
        refreshpasek->setObjectName(QStringLiteral("refreshpasek"));
        refreshpasek->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));


        gridLayout[0] = new QGridLayout();
        gridLayout[0]->setSpacing(0);
        gridLayout[0]->setObjectName(QStringLiteral("gridLayout0"));
        gridLayout[1] = new QGridLayout();
        gridLayout[1]->setSpacing(0);
        gridLayout[1]->setObjectName(QStringLiteral("gridLayout1"));


        statki = new QPushButton*[200];

        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);

        for(size_t i=0;i<200;++i){
            statki[i] = new QPushButton(centralWidget);
            statki[i]->setObjectName(QStringLiteral("s%1").arg(i));
            sizePolicy.setHeightForWidth(statki[i]->sizePolicy().hasHeightForWidth());
            statki[i]->setSizePolicy(sizePolicy);
            statki[i]->setMinimumSize(QSize(50, 50));
            statki[i]->setMaximumSize(QSize(50, 50));
            gridLayout[i/100]->addWidget(statki[i], ((i-(i%10))/10)%10, i%10, 1, 1);
        }

        horizontalLayout->addLayout(gridLayout[0]);
        horizontalLayout->addLayout(gridLayout[1]);


        refreshpasek->addLayout(horizontalLayout, 1, 0, 1, 1);
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy1);
        splitter->setMinimumSize(QSize(0, 20));
        splitter->setMaximumSize(QSize(16777215, 16777215));
        splitter->setOrientation(Qt::Horizontal);
        progressBar = new QProgressBar(splitter);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMaximum(30);
        progressBar->setValue(0);
        progressBar->setTextVisible(false);
        progressBar->setInvertedAppearance(false);
        splitter->addWidget(progressBar);
        refresh = new QPushButton(splitter);
        refresh->setObjectName(QStringLiteral("refresh"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(refresh->sizePolicy().hasHeightForWidth());
        refresh->setSizePolicy(sizePolicy2);
        refresh->setMaximumSize(QSize(70, 16777215));
        splitter->addWidget(refresh);

        refreshpasek->addWidget(splitter, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1030, 21));
        menuUstawienia = new QMenu(menuBar);
        menuUstawienia->setObjectName(QStringLiteral("menuUstawienia"));
        menuWyglad = new QMenu(menuBar);
        menuWyglad->setObjectName(QStringLiteral("menuWyglad"));
        menuWyj_cie = new QMenu(menuBar);
        menuWyj_cie->setObjectName(QStringLiteral("menuWyj_cie"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        sizePolicy.setHeightForWidth(statusBar->sizePolicy().hasHeightForWidth());
        statusBar->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Courier New"));
        font.setPointSize(11);
        font.setItalic(true);
        statusBar->setFont(font);
        statusBar->setContextMenuPolicy(Qt::DefaultContextMenu);
        statusBar->setSizeGripEnabled(true);
        MainWindow->setStatusBar(statusBar);
        menuBar->addAction(menuUstawienia->menuAction());
        menuBar->addAction(menuWyglad->menuAction());
        menuBar->addAction(menuWyj_cie->menuAction());
        menuUstawienia->addAction(actionUstawienia);
        menuUstawienia->addAction(actionPo_cz);
        menuUstawienia->addAction(actionRoz_cz);
        menuWyj_cie->addAction(actionWyj_cie);
        menuWyglad->addAction(actionUUstawienia);
        menuWyglad->addAction(actionRozszerzanie);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Skromne statki", Q_NULLPTR));
        actionWyj_cie->setText(QApplication::translate("MainWindow", "Wyj\305\233cie", Q_NULLPTR));
        actionUstawienia->setText(QApplication::translate("MainWindow", "Ustawienia", Q_NULLPTR));
        actionPo_cz->setText(QApplication::translate("MainWindow", "Po\305\202\304\205cz", Q_NULLPTR));
        actionRoz_cz->setText(QApplication::translate("MainWindow", "Roz\305\202\304\205cz", Q_NULLPTR));
        for(size_t i=0;i<200;++i)
        statki[i]->setText(QApplication::translate("MainWindow", "STATEK", Q_NULLPTR));
        refresh->setText(QApplication::translate("MainWindow", "OD\305\232WIE\305\273", Q_NULLPTR));
        menuUstawienia->setTitle(QApplication::translate("MainWindow", "Serwer", Q_NULLPTR));
        menuWyglad->setTitle(QApplication::translate("MainWindow", "Wygląd", Q_NULLPTR));
        menuWyj_cie->setTitle(QApplication::translate("MainWindow", "Wyj\305\233cie", Q_NULLPTR));
        actionUUstawienia->setText(QApplication::translate("testowa", "Ustawienia", Q_NULLPTR));
        actionRozszerzanie->setText(QApplication::translate("testowa", "Rozszerzanie", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
