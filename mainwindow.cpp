#include "mainwindow.h"
#include "./ui_mainwindow.h"

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

}

void MainWindow::OnCharButtonClicked(char simbol) {
    if (simbol == '=') {
        double first = parseValue(addFirstValue);
        double second = parseValue(addSecondValue);
        double result = 0;

        switch (verifiValueSign) {
        case '+':
            result = calculator.add(first, second);
            break;
        case '-':
            result = calculator.subtract(first, second);
            break;
        case '*':
            result = calculator.multiply(first, second);
            break;
        case '/':
            result = calculator.divide(first, second);
            break;
        }


        currentDisplayText = QString::number(result);
        ui->Display->setText(currentDisplayText);
        addFirstValue.clear();
        addSecondValue.clear();
        verifiValueSign = '\0';


        addFirstValue.append(result);


        clearOnNextInput = true;

    } else {
        verifiValueSign = simbol;
        currentDisplayText.append(simbol);
        ui->Display->setText(currentDisplayText);
    }

    qDebug() << "Button clicked, new value: " << simbol;
}

void MainWindow::OnNumberButtonClicked(int value) {
    // Clear the display if it's flagged to be cleared on the next input
    if (clearOnNextInput) {
        currentDisplayText.clear();
        addFirstValue.clear();
        addSecondValue.clear();
        clearOnNextInput = false;
    }

    if (verifiValueSign == '\0') {
        addFirstValue.append(value);
    } else {
        addSecondValue.append(value);
    }

    currentDisplayText.append(QString::number(value));
    ui->Display->setText(currentDisplayText);

    qDebug() << "Number button clicked, new value: " << value;
}


double MainWindow::parseValue(const QVector<int>& values)
{
    double result = 0;
    for (int i = 0; i < values.size(); ++i)
    {
        result = result * 10 + values[i];
    }
    return result;
}

void MainWindow::updateDisplay()
{
    QString displayText;
    for (int digit : addFirstValue)
    {
        displayText.append(QString::number(digit));
    }
    if (verifiValueSign != '\0' && verifiValueSign != '=')
    {
        displayText.append(verifiValueSign);
        for (int digit : addSecondValue)
        {
            displayText.append(QString::number(digit));
        }
    }
    ui->Display->setText(displayText);
}

MainWindow::~MainWindow()
{
    delete ui;
}

