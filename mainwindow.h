#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QVector>
#include <QDebug>
#include <QString>
#include <QStack>
#include <QRegularExpression>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    bool lastOperationWasEqual;
    bool lastInputWasOperator;
    bool decimalPointAdded;
private slots:
    void OnNumberButtonClicked(int value);
    void OnCharButtonClicked(char simbol);
    void OnBackspaceClicked();
    void OnDecimalPointClicked();

private:
    Ui::MainWindow *ui;
    QString expression; // To store the sequence of numbers and operators

    void updateDisplay();
    double evaluateExpression(const QString& expr); // Function to evaluate the expression
    int getPrecedence(QChar op);
    double applyOperation(double a, double b, QChar op);
};

#endif // MAINWINDOW_H
