# Каримзаи Ахмад Хесров

## Функции создание кнопки
```cpp
Calculator::Calculator(QWidget *parent) : QWidget(parent)
{
    QGridLayout *layout = new QGridLayout(this);

    display = new QLineEdit();
    display->setAlignment(Qt::AlignRight);
    display->setReadOnly(true);
    layout->addWidget(display, 0, 0, 1, 4);

    const QString buttons[4][4] = {
        {"7", "8", "9", "/"},
        {"4", "5", "6", "*"},
        {"1", "2", "3", "-"},
        {"0", ".", "=", "+"}
    };

    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            QPushButton *button = new QPushButton(buttons[i][j]);
            connect(button, &QPushButton::clicked, this, &Calculator::buttonClicked);
            layout->addWidget(button, i + 1, j);
        }
    }

    setLayout(layout);
}

```

## Функции который вызывается при нажати кнопки

```cpp
void Calculator::buttonClicked()
{
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());

    if (!clickedButton)
        return;

    QString buttonText = clickedButton->text();

    if (buttonText == "=")
    {
        QString expression = display->text();
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

        display->setText(QString::number(result));
    }
    else
    {
        display->setText(display->text() + buttonText);
    }
}

```

## Класс калкулятор

```cpp
class Calculator : public QWidget
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);

private slots:
    void buttonClicked();

private:
    QLineEdit *display;
};

```

## Функции майн

```cpp
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Calculator w;
    w.show();
    return a.exec();
}

```

