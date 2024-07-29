#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButtonO, &QPushButton::clicked, this, [=]{ OnNumberButtonClicked(0); });
    connect(ui->pushButton1, &QPushButton::clicked, this, [=]{ OnNumberButtonClicked(1); });
    connect(ui->pushButton2, &QPushButton::clicked, this, [=]{ OnNumberButtonClicked(2); });
    connect(ui->pushButton3, &QPushButton::clicked, this, [=]{ OnNumberButtonClicked(3); });
    connect(ui->pushButton4, &QPushButton::clicked, this, [=]{ OnNumberButtonClicked(4); });
    connect(ui->pushButton5, &QPushButton::clicked, this, [=]{ OnNumberButtonClicked(5); });
    connect(ui->pushButton6, &QPushButton::clicked, this, [=]{ OnNumberButtonClicked(6); });
    connect(ui->pushButton7, &QPushButton::clicked, this, [=]{ OnNumberButtonClicked(7); });
    connect(ui->pushButton8, &QPushButton::clicked, this, [=]{ OnNumberButtonClicked(8); });
    connect(ui->pushButton9, &QPushButton::clicked, this, [=]{ OnNumberButtonClicked(9); });

    connect(ui->pushButtonAdditio, &QPushButton::clicked, this, [=]{ OnCharButtonClicked('+');});
    connect(ui->pushButtonSubtraction, &QPushButton::clicked, this, [=]{ OnCharButtonClicked('-');});
    connect(ui->pushButton_Proc, &QPushButton::clicked, this, [=]{ OnCharButtonClicked('%');});
    connect(ui->pushButton_Multiple, &QPushButton::clicked, this, [=]{ OnCharButtonClicked('*');});
    connect(ui->pushButton_Division, &QPushButton::clicked, this, [=]{ OnCharButtonClicked('/');});
    connect(ui->pushButtonEquals, &QPushButton::clicked, this, [=]{ OnCharButtonClicked('=');});

    connect(ui->pushButtonOO, &QPushButton::clicked, this, [=]{ OnNumberButtonClicked(0); });
    connect(ui->pushButton_Backs, &QPushButton::clicked, this, [=]{ OnCharButtonClicked('<');});
    connect(ui->pushButton_AC, &QPushButton::clicked, this, [=]{ OnCharButtonClicked('A');});
    connect(ui->pushButtonZPT, &QPushButton::clicked, this, [=]{ OnCharButtonClicked(',');});


    int value= 0;
}

void MainWindow::OnNumberButtonClicked(int value)
{
    if(value != 0)
    {
        value++;
        qDebug() << "Button clicked, new value: " << value;
    }
}

void MainWindow::OnCharButtonClicked(char simbol)
{

    qDebug() << "Button clicked, new value: " << simbol;

}

MainWindow::~MainWindow()
{
    delete ui;
}

