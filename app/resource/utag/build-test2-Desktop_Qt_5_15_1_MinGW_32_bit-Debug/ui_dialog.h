/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QTextEdit *title;
    QTextEdit *artist;
    QTextEdit *album;
    QTextEdit *genre;
    QPushButton *save_button;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(Dialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        title = new QTextEdit(Dialog);
        title->setObjectName(QString::fromUtf8("title"));

        verticalLayout->addWidget(title);

        artist = new QTextEdit(Dialog);
        artist->setObjectName(QString::fromUtf8("artist"));

        verticalLayout->addWidget(artist);

        album = new QTextEdit(Dialog);
        album->setObjectName(QString::fromUtf8("album"));

        verticalLayout->addWidget(album);

        genre = new QTextEdit(Dialog);
        genre->setObjectName(QString::fromUtf8("genre"));

        verticalLayout->addWidget(genre);


        verticalLayout_2->addLayout(verticalLayout);

        save_button = new QPushButton(Dialog);
        save_button->setObjectName(QString::fromUtf8("save_button"));

        verticalLayout_2->addWidget(save_button);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        save_button->setText(QCoreApplication::translate("Dialog", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
