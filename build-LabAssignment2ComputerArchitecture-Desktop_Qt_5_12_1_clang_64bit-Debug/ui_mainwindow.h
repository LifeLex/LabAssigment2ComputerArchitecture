/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_4;
    QSpinBox *VehiculoGuardadoCargarspinBox;
    QGridLayout *Accesorios;
    QCheckBox *BurbujacheckBox;
    QCheckBox *PortavasoscheckBox;
    QLabel *label_5;
    QSpinBox *BocinasspinBox;
    QGridLayout *MainConfig;
    QComboBox *ColorcomboBox;
    QRadioButton *radioButton_2;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *nombreLineEdit;
    QComboBox *NRuedascomboBox;
    QLabel *label_4;
    QSlider *HPSlider;
    QRadioButton *RuedaRpuestoradioButton;
    QLabel *label;
    QLCDNumber *lcdNumber;
    QLabel *label_8;
    QComboBox *CombustiblecomboBox;
    QPushButton *CargarpushButton;
    QGridLayout *Matricula;
    QPushButton *GenerarpushButton;
    QLabel *label_6;
    QLineEdit *MatriculalineEdit;
    QPushButton *GuardarpushButton;
    QGridLayout *gridLayout_3;
    QLabel *label_7;
    QLCDNumber *VehiculosGuardadoslcdNumber;
    QListView *ListaVehiculoslistView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(808, 489);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        gridLayout_4 = new QGridLayout(centralWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        VehiculoGuardadoCargarspinBox = new QSpinBox(centralWidget);
        VehiculoGuardadoCargarspinBox->setObjectName(QString::fromUtf8("VehiculoGuardadoCargarspinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(VehiculoGuardadoCargarspinBox->sizePolicy().hasHeightForWidth());
        VehiculoGuardadoCargarspinBox->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(VehiculoGuardadoCargarspinBox, 8, 2, 1, 1);

        Accesorios = new QGridLayout();
        Accesorios->setSpacing(6);
        Accesorios->setObjectName(QString::fromUtf8("Accesorios"));
        BurbujacheckBox = new QCheckBox(centralWidget);
        BurbujacheckBox->setObjectName(QString::fromUtf8("BurbujacheckBox"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(BurbujacheckBox->sizePolicy().hasHeightForWidth());
        BurbujacheckBox->setSizePolicy(sizePolicy2);

        Accesorios->addWidget(BurbujacheckBox, 0, 0, 1, 1);

        PortavasoscheckBox = new QCheckBox(centralWidget);
        PortavasoscheckBox->setObjectName(QString::fromUtf8("PortavasoscheckBox"));
        sizePolicy2.setHeightForWidth(PortavasoscheckBox->sizePolicy().hasHeightForWidth());
        PortavasoscheckBox->setSizePolicy(sizePolicy2);

        Accesorios->addWidget(PortavasoscheckBox, 0, 1, 1, 1);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        Accesorios->addWidget(label_5, 1, 0, 1, 1);

        BocinasspinBox = new QSpinBox(centralWidget);
        BocinasspinBox->setObjectName(QString::fromUtf8("BocinasspinBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(BocinasspinBox->sizePolicy().hasHeightForWidth());
        BocinasspinBox->setSizePolicy(sizePolicy3);

        Accesorios->addWidget(BocinasspinBox, 1, 1, 1, 1);


        gridLayout_4->addLayout(Accesorios, 1, 0, 1, 1);

        MainConfig = new QGridLayout();
        MainConfig->setSpacing(6);
        MainConfig->setObjectName(QString::fromUtf8("MainConfig"));
        ColorcomboBox = new QComboBox(centralWidget);
        ColorcomboBox->addItem(QString());
        ColorcomboBox->addItem(QString());
        ColorcomboBox->addItem(QString());
        ColorcomboBox->addItem(QString());
        ColorcomboBox->setObjectName(QString::fromUtf8("ColorcomboBox"));
        sizePolicy2.setHeightForWidth(ColorcomboBox->sizePolicy().hasHeightForWidth());
        ColorcomboBox->setSizePolicy(sizePolicy2);

        MainConfig->addWidget(ColorcomboBox, 3, 1, 1, 1);

        radioButton_2 = new QRadioButton(centralWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        sizePolicy2.setHeightForWidth(radioButton_2->sizePolicy().hasHeightForWidth());
        radioButton_2->setSizePolicy(sizePolicy2);

        MainConfig->addWidget(radioButton_2, 4, 1, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        MainConfig->addWidget(label_3, 2, 0, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        MainConfig->addWidget(label_2, 1, 0, 1, 1);

        nombreLineEdit = new QLineEdit(centralWidget);
        nombreLineEdit->setObjectName(QString::fromUtf8("nombreLineEdit"));
        sizePolicy2.setHeightForWidth(nombreLineEdit->sizePolicy().hasHeightForWidth());
        nombreLineEdit->setSizePolicy(sizePolicy2);

        MainConfig->addWidget(nombreLineEdit, 0, 1, 1, 1);

        NRuedascomboBox = new QComboBox(centralWidget);
        NRuedascomboBox->addItem(QString());
        NRuedascomboBox->addItem(QString());
        NRuedascomboBox->addItem(QString());
        NRuedascomboBox->setObjectName(QString::fromUtf8("NRuedascomboBox"));
        sizePolicy2.setHeightForWidth(NRuedascomboBox->sizePolicy().hasHeightForWidth());
        NRuedascomboBox->setSizePolicy(sizePolicy2);

        MainConfig->addWidget(NRuedascomboBox, 1, 1, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        MainConfig->addWidget(label_4, 3, 0, 1, 1);

        HPSlider = new QSlider(centralWidget);
        HPSlider->setObjectName(QString::fromUtf8("HPSlider"));
        sizePolicy2.setHeightForWidth(HPSlider->sizePolicy().hasHeightForWidth());
        HPSlider->setSizePolicy(sizePolicy2);
        HPSlider->setOrientation(Qt::Horizontal);

        MainConfig->addWidget(HPSlider, 2, 1, 1, 1);

        RuedaRpuestoradioButton = new QRadioButton(centralWidget);
        RuedaRpuestoradioButton->setObjectName(QString::fromUtf8("RuedaRpuestoradioButton"));
        sizePolicy2.setHeightForWidth(RuedaRpuestoradioButton->sizePolicy().hasHeightForWidth());
        RuedaRpuestoradioButton->setSizePolicy(sizePolicy2);

        MainConfig->addWidget(RuedaRpuestoradioButton, 4, 0, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        MainConfig->addWidget(label, 0, 0, 1, 1);

        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        sizePolicy1.setHeightForWidth(lcdNumber->sizePolicy().hasHeightForWidth());
        lcdNumber->setSizePolicy(sizePolicy1);

        MainConfig->addWidget(lcdNumber, 2, 2, 1, 1);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        MainConfig->addWidget(label_8, 5, 0, 1, 1);

        CombustiblecomboBox = new QComboBox(centralWidget);
        CombustiblecomboBox->addItem(QString());
        CombustiblecomboBox->addItem(QString());
        CombustiblecomboBox->addItem(QString());
        CombustiblecomboBox->setObjectName(QString::fromUtf8("CombustiblecomboBox"));

        MainConfig->addWidget(CombustiblecomboBox, 5, 1, 1, 1);


        gridLayout_4->addLayout(MainConfig, 0, 0, 1, 1);

        CargarpushButton = new QPushButton(centralWidget);
        CargarpushButton->setObjectName(QString::fromUtf8("CargarpushButton"));
        sizePolicy2.setHeightForWidth(CargarpushButton->sizePolicy().hasHeightForWidth());
        CargarpushButton->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(CargarpushButton, 8, 1, 1, 1);

        Matricula = new QGridLayout();
        Matricula->setSpacing(6);
        Matricula->setObjectName(QString::fromUtf8("Matricula"));
        GenerarpushButton = new QPushButton(centralWidget);
        GenerarpushButton->setObjectName(QString::fromUtf8("GenerarpushButton"));

        Matricula->addWidget(GenerarpushButton, 1, 0, 1, 2);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        Matricula->addWidget(label_6, 0, 0, 1, 1);

        MatriculalineEdit = new QLineEdit(centralWidget);
        MatriculalineEdit->setObjectName(QString::fromUtf8("MatriculalineEdit"));
        sizePolicy3.setHeightForWidth(MatriculalineEdit->sizePolicy().hasHeightForWidth());
        MatriculalineEdit->setSizePolicy(sizePolicy3);

        Matricula->addWidget(MatriculalineEdit, 0, 1, 1, 1);


        gridLayout_4->addLayout(Matricula, 2, 0, 1, 1);

        GuardarpushButton = new QPushButton(centralWidget);
        GuardarpushButton->setObjectName(QString::fromUtf8("GuardarpushButton"));

        gridLayout_4->addWidget(GuardarpushButton, 8, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(label_7, 0, 0, 1, 1);

        VehiculosGuardadoslcdNumber = new QLCDNumber(centralWidget);
        VehiculosGuardadoslcdNumber->setObjectName(QString::fromUtf8("VehiculosGuardadoslcdNumber"));
        sizePolicy1.setHeightForWidth(VehiculosGuardadoslcdNumber->sizePolicy().hasHeightForWidth());
        VehiculosGuardadoslcdNumber->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(VehiculosGuardadoslcdNumber, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 3, 0, 1, 1);

        ListaVehiculoslistView = new QListView(centralWidget);
        ListaVehiculoslistView->setObjectName(QString::fromUtf8("ListaVehiculoslistView"));

        gridLayout_4->addWidget(ListaVehiculoslistView, 0, 1, 4, 2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 808, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        BurbujacheckBox->setText(QApplication::translate("MainWindow", "Burbuja", nullptr));
        PortavasoscheckBox->setText(QApplication::translate("MainWindow", "Portavasos Gigante", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Numero de Bocinas", nullptr));
        ColorcomboBox->setItemText(0, QApplication::translate("MainWindow", "Rojo", nullptr));
        ColorcomboBox->setItemText(1, QApplication::translate("MainWindow", "Azul", nullptr));
        ColorcomboBox->setItemText(2, QApplication::translate("MainWindow", "Amarillo", nullptr));
        ColorcomboBox->setItemText(3, QApplication::translate("MainWindow", "Verde", nullptr));

        radioButton_2->setText(QApplication::translate("MainWindow", "Kit de reparacion", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "HP", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Numero Ruedas", nullptr));
        NRuedascomboBox->setItemText(0, QApplication::translate("MainWindow", "2", nullptr));
        NRuedascomboBox->setItemText(1, QApplication::translate("MainWindow", "4", nullptr));
        NRuedascomboBox->setItemText(2, QApplication::translate("MainWindow", "30", nullptr));

        label_4->setText(QApplication::translate("MainWindow", "Color", nullptr));
        RuedaRpuestoradioButton->setText(QApplication::translate("MainWindow", "Rueda de repuesto", nullptr));
        label->setText(QApplication::translate("MainWindow", "Nombre", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Tipo de Combustible", nullptr));
        CombustiblecomboBox->setItemText(0, QApplication::translate("MainWindow", "Gasolina", nullptr));
        CombustiblecomboBox->setItemText(1, QApplication::translate("MainWindow", "Diesel", nullptr));
        CombustiblecomboBox->setItemText(2, QApplication::translate("MainWindow", "Electrico", nullptr));

        CargarpushButton->setText(QApplication::translate("MainWindow", "Cargar Vehiculo Numero", nullptr));
        GenerarpushButton->setText(QApplication::translate("MainWindow", "Generar Matricula", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Matricula", nullptr));
        GuardarpushButton->setText(QApplication::translate("MainWindow", "Guardar", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Numero de Vehiculos guardados", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
