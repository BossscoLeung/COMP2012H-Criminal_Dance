/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QStackedWidget *stackedwidget;
    QWidget *MenuScreen;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_join;
    QPushButton *btn_exit;
    QPushButton *btn_desc;
    QLabel *label_main;
    QWidget *Description;
    QGridLayout *gridLayout_4;
    QLabel *label_desc;
    QTextBrowser *textBrowser;
    QPushButton *btn_back_in_desc;
    QWidget *page;
    QGridLayout *gridLayout_3;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *btn_join_room;
    QPushButton *btn_back_join_room;
    QWidget *page_2;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setLocale(QLocale(QLocale::English, QLocale::HongKong));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        stackedwidget = new QStackedWidget(centralwidget);
        stackedwidget->setObjectName(QString::fromUtf8("stackedwidget"));
        QFont font;
        font.setPointSize(20);
        stackedwidget->setFont(font);
        MenuScreen = new QWidget();
        MenuScreen->setObjectName(QString::fromUtf8("MenuScreen"));
        verticalLayout = new QVBoxLayout(MenuScreen);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_join = new QPushButton(MenuScreen);
        btn_join->setObjectName(QString::fromUtf8("btn_join"));

        horizontalLayout->addWidget(btn_join);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);

        btn_exit = new QPushButton(MenuScreen);
        btn_exit->setObjectName(QString::fromUtf8("btn_exit"));

        gridLayout->addWidget(btn_exit, 8, 0, 1, 1);

        btn_desc = new QPushButton(MenuScreen);
        btn_desc->setObjectName(QString::fromUtf8("btn_desc"));

        gridLayout->addWidget(btn_desc, 7, 0, 1, 1);

        label_main = new QLabel(MenuScreen);
        label_main->setObjectName(QString::fromUtf8("label_main"));
        label_main->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/background_1.png")));
        label_main->setScaledContents(false);
        label_main->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_main->setWordWrap(false);

        gridLayout->addWidget(label_main, 0, 0, 2, 1);


        verticalLayout->addLayout(gridLayout);

        stackedwidget->addWidget(MenuScreen);
        Description = new QWidget();
        Description->setObjectName(QString::fromUtf8("Description"));
        gridLayout_4 = new QGridLayout(Description);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_desc = new QLabel(Description);
        label_desc->setObjectName(QString::fromUtf8("label_desc"));

        gridLayout_4->addWidget(label_desc, 0, 0, 1, 1);

        textBrowser = new QTextBrowser(Description);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Comic Sans MS"));
        font1.setPointSize(28);
        textBrowser->setFont(font1);

        gridLayout_4->addWidget(textBrowser, 1, 0, 1, 2);

        btn_back_in_desc = new QPushButton(Description);
        btn_back_in_desc->setObjectName(QString::fromUtf8("btn_back_in_desc"));

        gridLayout_4->addWidget(btn_back_in_desc, 2, 1, 1, 1);

        stackedwidget->addWidget(Description);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_3 = new QGridLayout(page);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        textEdit = new QTextEdit(page);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout_3->addWidget(textEdit, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);


        gridLayout_3->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        btn_join_room = new QPushButton(page);
        btn_join_room->setObjectName(QString::fromUtf8("btn_join_room"));

        horizontalLayout_6->addWidget(btn_join_room);

        btn_back_join_room = new QPushButton(page);
        btn_back_join_room->setObjectName(QString::fromUtf8("btn_back_join_room"));

        horizontalLayout_6->addWidget(btn_back_join_room);


        gridLayout_3->addLayout(horizontalLayout_6, 2, 0, 1, 1);

        stackedwidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedwidget->addWidget(page_2);

        gridLayout_2->addWidget(stackedwidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        stackedwidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Criminal Dance Online", nullptr));
        btn_join->setText(QApplication::translate("MainWindow", "Join a party!", nullptr));
        btn_exit->setText(QApplication::translate("MainWindow", "Exit the party :(", nullptr));
        btn_desc->setText(QApplication::translate("MainWindow", "How to play?", nullptr));
        label_main->setText(QString());
        label_desc->setText(QApplication::translate("MainWindow", "How to play?", nullptr));
        textBrowser->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Comic Sans MS'; font-size:28pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">Criminal Dance (\347\212\257\344\272\272\345\234\250\350\267\263\350\210\236)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; "
                        "font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">********************************************</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">Criminal Dance is a faction game. In the game, CULPRIT need to hide his/her identity and Civilians need to try their best to find who is holding CULPRIT. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">However, since the identity of players will be exchanged, which increase the uncertain"
                        "ty and interest. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">********************************************</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">Number of Player:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mo"
                        "no','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">  3-8</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">Gaming time:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono',"
                        "'monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">  5-10 mins</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">Game direction:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation M"
                        "ono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">  Circular clockwise, Player will use card one by one and do the operation accounding to the used card. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">  If a player does not have any cards in hand, skip this player and continous to next player.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; marg"
                        "in-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">Number of cards:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">  Every match in this game has different card deck. It is consist of the essential cards and randomly picked cards accounding to the number of players.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Co"
                        "nsolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">  In total there are 33 cards.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">  [ FIRST_FINDER * 1,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'u"
                        "i-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">    CULPRIT * 1, </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">    DETECTIVE * 4, </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">    ALIBI * 5, </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; backgrou"
                        "nd-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">    ACCOMPLICE * 2, </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">    WITNESS * 3, </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">    BYSTANDER * 2, </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-ri"
                        "ght:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">    BASTET * 1, </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">    INFO_EXCHANGE * 4, </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">    RUMOR * 5, </span></p>\n"
"<p style=\" margin-to"
                        "p:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">    BARTER * 4, </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">    JUVENILE * 1 ]</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\"><br /></p>\n"
"<p style"
                        "=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">  3 Players: 12 cards</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">    4 essential cards [ FIRST_FINDER , CULPRIT , DETECTIVE , ALIBI ] + 8 cards drawn from other 29 cards </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','"
                        "Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">  4 Players: 16 cards</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">    5 essential cards [ FIRST_FINDER , CULPRIT , DETECTIVE , ALIBI , ACCOMPLICE ] + 11 cards drawn from other 28 cards </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">  5 Players: 20 cards</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; ma"
                        "rgin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">    6 essential cards [ FIRST_FINDER , CULPRIT , DETECTIVE , ALIBI * 2 , ACCOMPLICE ] + 14 cards drawn from other 27 cards </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">  6 Players: 24 cards</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace';"
                        " font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">    8 essential cards [ FIRST_FINDER , CULPRIT , DETECTIVE * 2 , ALIBI * 2 , ACCOMPLICE * 2 ] + 16 cards drawn from other 25 cards </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">  7 Players: 28 cards</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">    9 essential cards [ FIRST_FINDER , CULPRIT , DETECTIVE * 2 , ALIBI * 3 , ACCOMPLICE * 2 ] + 19 cards drawn from other 24 cards "
                        "</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">  8 Players: 32 cards</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">    9 essential cards [ FIRST_FINDER , CULPRIT , DETECTIVE * 2 , ALIBI * 3 , ACCOMPLICE * 2 ] + 23 cards drawn from other 24 cards</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'u"
                        "i-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">    </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">  Each player will randomly distributed 4 cards from the above deck.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; te"
                        "xt-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">Game faction:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">  Criminals ( CULPRIT, ACCOMPLICE)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">  Civilians (other players)</span></p>\n"
"<p style=\" margin-top:0px; marg"
                        "in-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">Card function:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">  FIRST_FINDER:   This card indica"
                        "te who is the first player to start the match. This player must use this card and no actions are done.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">  CULPRIT:        This card can be used only if it is the last card left in hand. Once it is used, Criminals wins and Civilian loses.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-bloc"
                        "k-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">  DETECTIVE:      Player can only use this card when he/she is holding 3 or less cards in hand (in case of the player must use this card, ie. holding CULPRIT + DETECTIVE * 3,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','mon"
                        "ospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">                  this card can be used with no actions are done.) Civilians wins and Criminals loses if the player can catch which player is holding the CULPRIT card.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">                  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">  ALIBI:          This card do no actions when used. If a player is holding the CULPRIT ca"
                        "rd and this card at the same time, he/she will not be catched by DETECTIVE.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">  ACCOMPLICE:     The player who use this card in his/her turn will become an accomplice (not effected when just holding in hand). </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; "
                        "background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">                  Sharing the same match outcome with culprit.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">  WITNESS:        Choose a player to view his/her all card in hand.</span"
                        "></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">  BYSTANDER:      This card do no actions when used.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20p"
                        "t; color:#c9d1d9; background-color:#0d1117;\">  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">  BASTET:         Choose a player who need to discard a card from his/her hand. If the discarded card is CULPRIT, Civilian wins and Criminals loses. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">                  Otherwise, the targeted player receive this card to his/her hand.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; "
                        "margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">  INFO_EXCHANGE:  Starting from this player, choose a card in hand and pass to the next player and repect this process one by one. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','mon"
                        "ospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">                  Players can see the recived card but cannot pass the recived card again to the next player. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">                  If current player does not have any passable card, ie. no cards in hand or the only card is the recived card,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">                  then skip the curren"
                        "t player (next player will not receive any card but still need to proced the above process).</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">                  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">  RUMOR:          Starting from this player, draw a card from the pervious player and repect this process one by one.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0"
                        "; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">                  The card drawn from the pervious player cannot be drawn again by the next player. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">                  If the pervious player does not have any drawable card to let the current player draw, ie. no cards in hand or the only card is the drawn card, </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-mon"
                        "ospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">                  then skip the current player (current player will not draw and receive any cards but still need to proced the above process). </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">                  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">  BARTER:         Player who use this"
                        " card can choose a player who have card in hand to exchange a card in hand. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">                  If the player does not have any card in hand, he/she will take the card from the targeted player instead of exchanging. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">                  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-ind"
                        "ent:0; text-indent:0px; background-color:#0d1117;\"><span style=\" font-family:'ui-monospace','SFMono-Regular','SF Mono','Menlo','Consolas','Liberation Mono','monospace'; font-size:20pt; color:#c9d1d9; background-color:#0d1117;\">  JUVENILE:       At the begining of the match, player who have this card can know which player is holding the CULPRIT card at first. This card do no actions when used.</span></p></body></html>", nullptr));
        btn_back_in_desc->setText(QApplication::translate("MainWindow", "Back to Menu", nullptr));
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:20pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Ben</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Bosco</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Rebecca</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Yeonu</p></body></html>", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Type the players' name below", nullptr));
        btn_join_room->setText(QApplication::translate("MainWindow", "Join", nullptr));
        btn_back_join_room->setText(QApplication::translate("MainWindow", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
