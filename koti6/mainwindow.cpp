#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , state(0)
    , result(0)
    , operand(0)
{
    ui->setupUi(this);
    resetLineEdits();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_N1_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N2_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N3_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N4_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N5_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N6_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N7_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N8_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N9_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N0_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_clear_clicked()
{
    clearAndEnterClickHandler();
}


void MainWindow::on_enter_clicked()
{
    clearAndEnterClickHandler();
}


void MainWindow::on_add_clicked()
{
    operand = 1;
    addSubMulDivClickHandler();
}


void MainWindow::on_sub_clicked()
{
    operand = 2;
    addSubMulDivClickHandler();
}


void MainWindow::on_mul_clicked()
{
    operand = 3;
    addSubMulDivClickHandler();
}


void MainWindow::on_div_clicked()
{
    operand = 4;
    addSubMulDivClickHandler();
}


void MainWindow::numberClickedHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());

    if (state == 1) {

        num1 += button->text();
        ui->num1->setText(num1);
    } else {

        num2 += button->text();
        ui->num2->setText(num2);
    }
}

void MainWindow::addSubMulDivClickHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());


    if (button == ui->add)
        operand = 0;
    else if (button == ui->sub)
        operand = 1;
    else if (button == ui->mul)
        operand = 2;
    else if (button == ui->div)
        operand = 3;

    state = 2;
}

void MainWindow::clearAndEnterClickHandler()
{
    if (sender() == ui->clear) {

        state = 1;
        num1 = "";
        num2 = "";
        resetLineEdits();
    } else if (sender() == ui->enter) {

        state = 1;
        float n1 = num1.toFloat();
        float n2 = num2.toFloat();


        switch (operand) {
        case 0: result = n1 + n2; break;
        case 1: result = n1 - n2; break;
        case 2: result = n1 * n2; break;
        case 3:
            if (n2 != 0) result = n1 / n2;
            else result = 0;
            break;
        }


        ui->result->setText(QString::number(result));
    }
}

void MainWindow::resetLineEdits()
{
    ui->num1->clear();
    ui->num2->clear();
    ui->result->clear();
}

void MainWindow::on_num1_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
}

void MainWindow::on_num2_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
}

void MainWindow::on_result_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);

}
