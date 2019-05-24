/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QFrame *line_2;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_hostname;
    QLabel *label_2;
    QLineEdit *lineEdit_port;
    QPushButton *connectButton;
    QFrame *line;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLabel *label_status;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QPushButton *sendButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(498, 284);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        line_2 = new QFrame(Widget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        lineEdit_hostname = new QLineEdit(Widget);
        lineEdit_hostname->setObjectName(QStringLiteral("lineEdit_hostname"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_hostname);

        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_port = new QLineEdit(Widget);
        lineEdit_port->setObjectName(QStringLiteral("lineEdit_port"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_port);


        horizontalLayout->addLayout(formLayout);

        connectButton = new QPushButton(Widget);
        connectButton->setObjectName(QStringLiteral("connectButton"));

        horizontalLayout->addWidget(connectButton);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(Widget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setMargin(0);
        label->setIndent(90);

        horizontalLayout_4->addWidget(label);

        label_status = new QLabel(Widget);
        label_status->setObjectName(QStringLiteral("label_status"));
        label_status->setIndent(86);

        horizontalLayout_4->addWidget(label_status);


        verticalLayout->addLayout(horizontalLayout_4);

        textBrowser = new QTextBrowser(Widget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);

        sendButton = new QPushButton(Widget);
        sendButton->setObjectName(QStringLiteral("sendButton"));

        horizontalLayout_2->addWidget(sendButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "Hostname:", Q_NULLPTR));
        lineEdit_hostname->setText(QApplication::translate("Widget", "localhost", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "Port:", Q_NULLPTR));
        lineEdit_port->setText(QApplication::translate("Widget", "64000", Q_NULLPTR));
        connectButton->setText(QApplication::translate("Widget", "Connect", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "<html><head/><body><p>\350\277\236\346\216\245\347\212\266\346\200\201 : </p></body></html>", Q_NULLPTR));
        label_status->setText(QApplication::translate("Widget", "\350\277\236\346\216\245\345\244\261\350\264\245\357\274\201", Q_NULLPTR));
        sendButton->setText(QApplication::translate("Widget", "Send", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
