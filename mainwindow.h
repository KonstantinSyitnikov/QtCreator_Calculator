#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QVector>
#include <QDebug>
#include </home/username/Документы/CPlusPlus/CalculatorQtCr/calculaton.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void OnNumberButtonClicked(int value);
    void OnCharButtonClicked(char simbol);

private:
    Ui::MainWindow *ui;
    QVector<int> addFirstValue;
    QVector<int> addSecondValue;
    char verifiValueSign = '\0';
    Calculaton calculator;

    QString currentDisplayText;
    void updateDisplay();

    double parseValue(const QVector<int>& values);
    bool clearOnNextInput = false;

};

#endif // MAINWINDOW_H
