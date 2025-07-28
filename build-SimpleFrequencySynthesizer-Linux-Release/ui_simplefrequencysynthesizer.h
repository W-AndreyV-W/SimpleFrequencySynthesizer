/********************************************************************************
** Form generated from reading UI file 'simplefrequencysynthesizer.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMPLEFREQUENCYSYNTHESIZER_H
#define UI_SIMPLEFREQUENCYSYNTHESIZER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SimpleFrequencySynthesizer
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout_2;
    QLabel *label;
    QSpinBox *spinBox;
    QLabel *label_3;
    QSpinBox *spinBox_2;
    QLabel *label_2;
    QSpinBox *spinBox_3;
    QLabel *label_4;
    QSpinBox *spinBox_4;
    QLabel *label_5;
    QSpinBox *spinBox_5;
    QLabel *label_6;
    QSpinBox *spinBox_6;
    QSpacerItem *horizontalSpacer;
    QLabel *label_7;
    QSpinBox *spinBox_7;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_8;
    QSpinBox *spinBox_8;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_9;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *SimpleFrequencySynthesizer)
    {
        if (SimpleFrequencySynthesizer->objectName().isEmpty())
            SimpleFrequencySynthesizer->setObjectName(QStringLiteral("SimpleFrequencySynthesizer"));
        SimpleFrequencySynthesizer->resize(402, 409);
        centralWidget = new QWidget(SimpleFrequencySynthesizer);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(9, 10, 381, 371));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        formLayoutWidget = new QWidget(frame);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(0, 0, 381, 372));
        formLayout_2 = new QFormLayout(formLayoutWidget);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        spinBox = new QSpinBox(formLayoutWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMaximum(16000);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, spinBox);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_3);

        spinBox_2 = new QSpinBox(formLayoutWidget);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setMaximum(16000);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, spinBox_2);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_2);

        spinBox_3 = new QSpinBox(formLayoutWidget);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setMaximum(16000);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, spinBox_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_4);

        spinBox_4 = new QSpinBox(formLayoutWidget);
        spinBox_4->setObjectName(QStringLiteral("spinBox_4"));
        spinBox_4->setMaximum(16000);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, spinBox_4);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_5);

        spinBox_5 = new QSpinBox(formLayoutWidget);
        spinBox_5->setObjectName(QStringLiteral("spinBox_5"));
        spinBox_5->setMaximum(16000);

        formLayout_2->setWidget(4, QFormLayout::FieldRole, spinBox_5);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_6);

        spinBox_6 = new QSpinBox(formLayoutWidget);
        spinBox_6->setObjectName(QStringLiteral("spinBox_6"));
        spinBox_6->setMaximum(16000);

        formLayout_2->setWidget(5, QFormLayout::FieldRole, spinBox_6);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_2->setItem(6, QFormLayout::SpanningRole, horizontalSpacer);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_2->setWidget(7, QFormLayout::LabelRole, label_7);

        spinBox_7 = new QSpinBox(formLayoutWidget);
        spinBox_7->setObjectName(QStringLiteral("spinBox_7"));
        spinBox_7->setMinimum(1000);
        spinBox_7->setMaximum(48000);

        formLayout_2->setWidget(7, QFormLayout::FieldRole, spinBox_7);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_2->setItem(8, QFormLayout::SpanningRole, horizontalSpacer_2);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_2->setWidget(9, QFormLayout::LabelRole, label_8);

        spinBox_8 = new QSpinBox(formLayoutWidget);
        spinBox_8->setObjectName(QStringLiteral("spinBox_8"));
        spinBox_8->setMinimum(1);
        spinBox_8->setMaximum(10);

        formLayout_2->setWidget(9, QFormLayout::FieldRole, spinBox_8);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_2->setItem(10, QFormLayout::SpanningRole, horizontalSpacer_3);

        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_2->setWidget(11, QFormLayout::LabelRole, label_9);

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout_2->setWidget(11, QFormLayout::FieldRole, lineEdit);

        pushButton = new QPushButton(formLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        formLayout_2->setWidget(12, QFormLayout::LabelRole, pushButton);

        pushButton_2 = new QPushButton(formLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        formLayout_2->setWidget(12, QFormLayout::FieldRole, pushButton_2);

        SimpleFrequencySynthesizer->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SimpleFrequencySynthesizer);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 402, 20));
        SimpleFrequencySynthesizer->setMenuBar(menuBar);

        retranslateUi(SimpleFrequencySynthesizer);

        QMetaObject::connectSlotsByName(SimpleFrequencySynthesizer);
    } // setupUi

    void retranslateUi(QMainWindow *SimpleFrequencySynthesizer)
    {
        SimpleFrequencySynthesizer->setWindowTitle(QApplication::translate("SimpleFrequencySynthesizer", "\320\241\320\270\320\275\321\202\320\265\320\267\320\260\321\202\320\276\321\200 \321\207\320\260\321\201\321\202\320\276\321\202", Q_NULLPTR));
        label->setText(QApplication::translate("SimpleFrequencySynthesizer", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\207\320\260\321\201\321\202\320\276\321\202\321\203 1 (40 - 16000 \320\223\321\206)", Q_NULLPTR));
        label_3->setText(QApplication::translate("SimpleFrequencySynthesizer", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\207\320\260\321\201\321\202\320\276\321\202\321\203 2 (40 - 16000 \320\223\321\206)", Q_NULLPTR));
        label_2->setText(QApplication::translate("SimpleFrequencySynthesizer", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\207\320\260\321\201\321\202\320\276\321\202\321\203 3 (40 - 16000 \320\223\321\206)", Q_NULLPTR));
        label_4->setText(QApplication::translate("SimpleFrequencySynthesizer", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\207\320\260\321\201\321\202\320\276\321\202\321\203 4 (40 - 16000 \320\223\321\206)", Q_NULLPTR));
        label_5->setText(QApplication::translate("SimpleFrequencySynthesizer", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\207\320\260\321\201\321\202\320\276\321\202\321\203 5 (40 - 16000 \320\223\321\206)", Q_NULLPTR));
        label_6->setText(QApplication::translate("SimpleFrequencySynthesizer", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\207\320\260\321\201\321\202\320\276\321\202\321\203 6 (40 - 16000 \320\223\321\206)", Q_NULLPTR));
        label_7->setText(QApplication::translate("SimpleFrequencySynthesizer", "\320\247\320\260\321\201\321\202\320\276\321\202\320\260 \320\264\320\270\321\201\320\272\321\200\320\265\321\202\320\270\320\267\320\260\321\206\320\270\320\270 (48000)", Q_NULLPTR));
        label_8->setText(QApplication::translate("SimpleFrequencySynthesizer", "\320\222\321\200\320\265\320\274\321\217 \320\262 \321\201\320\265\320\272\321\203\320\275\320\264\320\260\321\205 (1 - 10)", Q_NULLPTR));
        label_9->setText(QApplication::translate("SimpleFrequencySynthesizer", "\320\230\320\274\321\217 \321\204\320\260\320\271\320\273\320\260 \320\264\320\273\321\217 \320\267\320\260\320\277\320\270\321\201\320\270", Q_NULLPTR));
        lineEdit->setText(QString());
        pushButton->setText(QApplication::translate("SimpleFrequencySynthesizer", "\320\222\321\213\321\205\320\276\320\264", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("SimpleFrequencySynthesizer", "\320\241\321\202\320\260\321\200\321\202", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SimpleFrequencySynthesizer: public Ui_SimpleFrequencySynthesizer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMPLEFREQUENCYSYNTHESIZER_H
