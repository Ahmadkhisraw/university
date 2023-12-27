#include "calculatorgui.h"
#include "ui_calculatorgui.h"

CalculatorGUI::CalculatorGUI(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CalculatorGUI)
{
    ui->setupUi(this);

    connect(ui->digit_dot, &QPushButton::clicked, this, &CalculatorGUI::digitClicked);
    connect(ui->digit_0, &QPushButton::clicked, this, &CalculatorGUI::digitClicked);
    connect(ui->digit_1, &QPushButton::clicked, this, &CalculatorGUI::digitClicked);
    connect(ui->digit_2, &QPushButton::clicked, this, &CalculatorGUI::digitClicked);
    connect(ui->digit_3, &QPushButton::clicked, this, &CalculatorGUI::digitClicked);
    connect(ui->digit_4, &QPushButton::clicked, this, &CalculatorGUI::digitClicked);
    connect(ui->digit_5, &QPushButton::clicked, this, &CalculatorGUI::digitClicked);
    connect(ui->digit_6, &QPushButton::clicked, this, &CalculatorGUI::digitClicked);
    connect(ui->digit_7, &QPushButton::clicked, this, &CalculatorGUI::digitClicked);
    connect(ui->digit_8, &QPushButton::clicked, this, &CalculatorGUI::digitClicked);
    connect(ui->digit_9, &QPushButton::clicked, this, &CalculatorGUI::digitClicked);

    connect(ui->op_equal, &QPushButton::clicked, this, &CalculatorGUI::equalClicked);

    connect(ui->op_add, &QPushButton::clicked, this, &CalculatorGUI::operatorClicked);
    connect(ui->op_min, &QPushButton::clicked, this, &CalculatorGUI::operatorClicked);
    connect(ui->op_mul, &QPushButton::clicked, this, &CalculatorGUI::operatorClicked);
    connect(ui->op_div, &QPushButton::clicked, this, &CalculatorGUI::operatorClicked);

    connect(ui->clear_sym, &QPushButton::clicked, this, &CalculatorGUI::clearSymbol);
    connect(ui->clear, &QPushButton::clicked, this, &CalculatorGUI::clear);
}

CalculatorGUI::~CalculatorGUI()
{
    delete ui;
}

void CalculatorGUI::digitClicked()
{
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());

    if (!clickedButton)
        return;

    QString buttonText = clickedButton->text();
    ui->display->setText(ui->display->text() + buttonText);
}

void CalculatorGUI::operatorClicked()
{
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());

    if (!clickedButton)
        return;

    QString buttonText = clickedButton->text();
    ui->display->setText(ui->display->text() + buttonText);
}

void CalculatorGUI::equalClicked()
{
    QString expression = ui->display->text();
    QRegExp re("[-+*/]");
    QStringList operands = expression.split(re);
    double result = 0.0;

    if (operands.size() == 2)
    {
        double num1 = operands[0].toDouble();
        double num2 = operands[1].toDouble();

        if (expression.contains('+'))
            result = num1 + num2;
        else if (expression.contains('-'))
            result = num1 - num2;
        else if (expression.contains('*'))
            result = num1 * num2;
        else if (expression.contains('/'))
            result = num1 / num2;
    }
    ui->display->setText(QString::number(result));
}

void CalculatorGUI::clearSymbol()
{
    QString text = ui->display->text();
    if (text.isEmpty()) {
        return;
    }
    text.chop(1);
    ui->display->setText(text);
}

void CalculatorGUI::clear()
{
    ui->display->clear();
}

