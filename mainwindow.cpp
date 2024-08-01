#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QtMath>
#include <QStack>
#include <stdexcept>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , lastOperationWasEqual(false)
    , lastInputWasOperator(false)
    , decimalPointAdded(false)
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
    connect(ui->pushButton_Backs, &QPushButton::clicked, this, [=]{ OnBackspaceClicked(); });
    connect(ui->pushButtonZPT, &QPushButton::clicked, this, [=]{ OnDecimalPointClicked(); });
    connect(ui->pushButton_AC, &QPushButton::clicked, [this]() {
        expression.clear();
        ui->Display->setText("0");
        decimalPointAdded = false;
    });
}

void MainWindow::OnCharButtonClicked(char simbol) {
    if (simbol == '=') {
        if (!lastInputWasOperator) {
            double result = evaluateExpression(expression);
            ui->Display->setText(QString::number(result));
            expression = QString::number(result);
            lastOperationWasEqual = true;
            decimalPointAdded = false; // Reset the flag for the new calculation
        }
    } else {
        if (lastOperationWasEqual) {
            lastOperationWasEqual = false;
        }
        if (lastInputWasOperator && (simbol == '+' || simbol == '-' || simbol == '*' || simbol == '/')) {
            expression.chop(1);
        }
        expression.append(simbol);
        ui->Display->setText(expression);
        lastInputWasOperator = (simbol == '+' || simbol == '-' || simbol == '*' || simbol == '/');
        decimalPointAdded = false; // Reset the flag when an operator is added
    }
}

void MainWindow::OnNumberButtonClicked(int value) {
    if (lastOperationWasEqual) {
        expression.clear();
        lastOperationWasEqual = false;
    }
    expression.append(QString::number(value));
    ui->Display->setText(expression);
    lastInputWasOperator = false;
}

void MainWindow::OnBackspaceClicked() {
    if (!expression.isEmpty()) {
        if (expression.endsWith('.')) {
            decimalPointAdded = false; // Reset the flag if a decimal point is removed
        }
        expression.chop(1); // Remove the last character
        if (expression.isEmpty()) {
            ui->Display->setText("0");
        } else {
            ui->Display->setText(expression);
        }
    }
    lastInputWasOperator = false;
}

void MainWindow::OnDecimalPointClicked() {
    if (!decimalPointAdded) {
        if (lastOperationWasEqual) {
            expression.clear();
            lastOperationWasEqual = false;
        }
        if (expression.isEmpty() || lastInputWasOperator) {
            expression.append("0"); // Append '0' before the decimal point if it's at the start or after an operator
        }
        expression.append('.');
        ui->Display->setText(expression);
        decimalPointAdded = true; // Set the flag
        lastInputWasOperator = false;
    }
}

double MainWindow::evaluateExpression(const QString& expr) {
    QStack<double> values;
    QStack<QChar> ops;
    QString num;
    for (int i = 0; i < expr.length(); ++i) {
        if (expr[i].isDigit() || expr[i] == '.') {
            num += expr[i];
        } else {
            if (!num.isEmpty()) {
                values.push(num.toDouble());
                num.clear();
            }
            while (!ops.isEmpty() && getPrecedence(ops.top()) >= getPrecedence(expr[i])) {
                double val2 = values.pop();
                double val1 = values.pop();
                QChar op = ops.pop();
                values.push(applyOperation(val1, val2, op));
            }
            ops.push(expr[i]);
            decimalPointAdded = false; // Reset the flag when an operator is encountered
        }
    }
    if (!num.isEmpty()) {
        values.push(num.toDouble());
    }
    while (!ops.isEmpty()) {
        double val2 = values.pop();
        double val1 = values.pop();
        QChar op = ops.pop();
        values.push(applyOperation(val1, val2, op));
    }
    return values.top();
}

int MainWindow::getPrecedence(QChar op) {
    if (op == '+' || op == '-') {
        return 1;
    }
    if (op == '*' || op == '/') {
        return 2;
    }
    return 0;
}

double MainWindow::applyOperation(double a, double b, QChar op) {
    switch (op.unicode()) {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        if (b == 0) {
            throw std::runtime_error("Division by zero");
        }
        return a / b;
    }
    return 0;
}

MainWindow::~MainWindow() {
    delete ui;
}
