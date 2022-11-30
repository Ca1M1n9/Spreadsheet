/********************************************************************************
** Form generated from reading UI file 'sortdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORTDIALOG_H
#define UI_SORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SortDialog
{
public:
    QGridLayout *gridLayout_5;
    QGroupBox *primaryGroupBox;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QComboBox *primaryOrderCombo;
    QComboBox *primaryColumnCombo;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QGroupBox *secondaryGroupBox;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *secondaryOrderCombo;
    QComboBox *secondaryColumnCombo;
    QLabel *label_6;
    QGroupBox *tertiaryGroupBox;
    QGridLayout *gridLayout_4;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_4;
    QComboBox *tertiaryOrderCombo;
    QComboBox *tertiaryColumnCombo;
    QLabel *label_8;
    QVBoxLayout *verticalLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QSpacerItem *verticalSpacer_2;
    QPushButton *moreButton;

    void setupUi(QDialog *SortDialog)
    {
        if (SortDialog->objectName().isEmpty())
            SortDialog->setObjectName(QString::fromUtf8("SortDialog"));
        SortDialog->resize(361, 352);
        gridLayout_5 = new QGridLayout(SortDialog);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        primaryGroupBox = new QGroupBox(SortDialog);
        primaryGroupBox->setObjectName(QString::fromUtf8("primaryGroupBox"));
        gridLayout = new QGridLayout(primaryGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(primaryGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(78, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        primaryOrderCombo = new QComboBox(primaryGroupBox);
        primaryOrderCombo->addItem(QString());
        primaryOrderCombo->addItem(QString());
        primaryOrderCombo->setObjectName(QString::fromUtf8("primaryOrderCombo"));

        gridLayout->addWidget(primaryOrderCombo, 1, 1, 1, 2);

        primaryColumnCombo = new QComboBox(primaryGroupBox);
        primaryColumnCombo->addItem(QString());
        primaryColumnCombo->setObjectName(QString::fromUtf8("primaryColumnCombo"));

        gridLayout->addWidget(primaryColumnCombo, 0, 1, 1, 1);

        label = new QLabel(primaryGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        gridLayout_5->addWidget(primaryGroupBox, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 1, 0, 1, 1);

        secondaryGroupBox = new QGroupBox(SortDialog);
        secondaryGroupBox->setObjectName(QString::fromUtf8("secondaryGroupBox"));
        gridLayout_3 = new QGridLayout(secondaryGroupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_5 = new QLabel(secondaryGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 1, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        secondaryOrderCombo = new QComboBox(secondaryGroupBox);
        secondaryOrderCombo->addItem(QString());
        secondaryOrderCombo->addItem(QString());
        secondaryOrderCombo->setObjectName(QString::fromUtf8("secondaryOrderCombo"));

        gridLayout_3->addWidget(secondaryOrderCombo, 1, 1, 1, 2);

        secondaryColumnCombo = new QComboBox(secondaryGroupBox);
        secondaryColumnCombo->addItem(QString());
        secondaryColumnCombo->setObjectName(QString::fromUtf8("secondaryColumnCombo"));

        gridLayout_3->addWidget(secondaryColumnCombo, 0, 1, 1, 1);

        label_6 = new QLabel(secondaryGroupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);


        gridLayout_5->addWidget(secondaryGroupBox, 2, 0, 1, 1);

        tertiaryGroupBox = new QGroupBox(SortDialog);
        tertiaryGroupBox->setObjectName(QString::fromUtf8("tertiaryGroupBox"));
        gridLayout_4 = new QGridLayout(tertiaryGroupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_7 = new QLabel(tertiaryGroupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_4->addWidget(label_7, 1, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 0, 2, 1, 1);

        tertiaryOrderCombo = new QComboBox(tertiaryGroupBox);
        tertiaryOrderCombo->addItem(QString());
        tertiaryOrderCombo->addItem(QString());
        tertiaryOrderCombo->setObjectName(QString::fromUtf8("tertiaryOrderCombo"));

        gridLayout_4->addWidget(tertiaryOrderCombo, 1, 1, 1, 2);

        tertiaryColumnCombo = new QComboBox(tertiaryGroupBox);
        tertiaryColumnCombo->addItem(QString());
        tertiaryColumnCombo->setObjectName(QString::fromUtf8("tertiaryColumnCombo"));

        gridLayout_4->addWidget(tertiaryColumnCombo, 0, 1, 1, 1);

        label_8 = new QLabel(tertiaryGroupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_4->addWidget(label_8, 0, 0, 1, 1);


        gridLayout_5->addWidget(tertiaryGroupBox, 3, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        okButton = new QPushButton(SortDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        verticalLayout->addWidget(okButton);

        cancelButton = new QPushButton(SortDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        verticalLayout->addWidget(cancelButton);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        moreButton = new QPushButton(SortDialog);
        moreButton->setObjectName(QString::fromUtf8("moreButton"));
        moreButton->setContextMenuPolicy(Qt::DefaultContextMenu);
        moreButton->setCheckable(true);

        verticalLayout->addWidget(moreButton);


        gridLayout_5->addLayout(verticalLayout, 0, 1, 2, 1);

        QWidget::setTabOrder(primaryColumnCombo, primaryOrderCombo);
        QWidget::setTabOrder(primaryOrderCombo, secondaryColumnCombo);
        QWidget::setTabOrder(secondaryColumnCombo, secondaryOrderCombo);
        QWidget::setTabOrder(secondaryOrderCombo, tertiaryColumnCombo);
        QWidget::setTabOrder(tertiaryColumnCombo, tertiaryOrderCombo);
        QWidget::setTabOrder(tertiaryOrderCombo, okButton);
        QWidget::setTabOrder(okButton, cancelButton);
        QWidget::setTabOrder(cancelButton, moreButton);

        retranslateUi(SortDialog);
        QObject::connect(okButton, SIGNAL(clicked()), SortDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), SortDialog, SLOT(reject()));
        QObject::connect(moreButton, SIGNAL(toggled(bool)), secondaryGroupBox, SLOT(setVisible(bool)));
        QObject::connect(moreButton, SIGNAL(toggled(bool)), tertiaryGroupBox, SLOT(setVisible(bool)));

        okButton->setDefault(true);


        QMetaObject::connectSlotsByName(SortDialog);
    } // setupUi

    void retranslateUi(QDialog *SortDialog)
    {
        SortDialog->setWindowTitle(QCoreApplication::translate("SortDialog", "Sort", nullptr));
        primaryGroupBox->setTitle(QCoreApplication::translate("SortDialog", "&Primary Key", nullptr));
        label_2->setText(QCoreApplication::translate("SortDialog", "Order:", nullptr));
        primaryOrderCombo->setItemText(0, QCoreApplication::translate("SortDialog", "Ascending", nullptr));
        primaryOrderCombo->setItemText(1, QCoreApplication::translate("SortDialog", "Descending", nullptr));

        primaryColumnCombo->setItemText(0, QCoreApplication::translate("SortDialog", "None", nullptr));

        label->setText(QCoreApplication::translate("SortDialog", "Column:", nullptr));
        secondaryGroupBox->setTitle(QCoreApplication::translate("SortDialog", "&Secondary Key", nullptr));
        label_5->setText(QCoreApplication::translate("SortDialog", "Order:", nullptr));
        secondaryOrderCombo->setItemText(0, QCoreApplication::translate("SortDialog", "Ascending", nullptr));
        secondaryOrderCombo->setItemText(1, QCoreApplication::translate("SortDialog", "Descending", nullptr));

        secondaryColumnCombo->setItemText(0, QCoreApplication::translate("SortDialog", "None", nullptr));

        label_6->setText(QCoreApplication::translate("SortDialog", "Column:", nullptr));
        tertiaryGroupBox->setTitle(QCoreApplication::translate("SortDialog", "&Tertiary Key", nullptr));
        label_7->setText(QCoreApplication::translate("SortDialog", "Order:", nullptr));
        tertiaryOrderCombo->setItemText(0, QCoreApplication::translate("SortDialog", "Ascending", nullptr));
        tertiaryOrderCombo->setItemText(1, QCoreApplication::translate("SortDialog", "Descending", nullptr));

        tertiaryColumnCombo->setItemText(0, QCoreApplication::translate("SortDialog", "None", nullptr));

        label_8->setText(QCoreApplication::translate("SortDialog", "Column:", nullptr));
        okButton->setText(QCoreApplication::translate("SortDialog", "OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("SortDialog", "Cancel", nullptr));
        moreButton->setText(QCoreApplication::translate("SortDialog", "&More", nullptr));
    } // retranslateUi
};

namespace Ui {
    class SortDialog: public Ui_SortDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORTDIALOG_H
