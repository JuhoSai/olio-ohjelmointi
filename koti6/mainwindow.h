#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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


    void on_N1_clicked();

    void on_N2_clicked();

    void on_N3_clicked();

    void on_N4_clicked();

    void on_N5_clicked();

    void on_N6_clicked();

    void on_N7_clicked();

    void on_N8_clicked();

    void on_N9_clicked();

    void on_N0_clicked();

    void on_clear_clicked();

    void on_enter_clicked();

    void on_add_clicked();

    void on_sub_clicked();

    void on_mul_clicked();

    void on_div_clicked();

    void on_num1_textChanged(const QString &arg1);

    void on_num2_textChanged(const QString &arg1);

    void on_result_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    QString num1, num2;
    int state;                          //State variable is needed to know which number is being given
    float result;                       //Result is calculated when user presses enter
    short operand;                      //operand is stored when user presses + or - or * or / buttons

    void numberClickedHandler();        //this function is called from all number QPushButton click handlers
    void clearAndEnterClickHandler();   //This handles clear and enter buttons
    void addSubMulDivClickHandler();    //And one handler for +,-,*,/ buttons also
    void resetLineEdits();              // This is handy for resetting all 3 QLineEdits

};
#endif // MAINWINDOW_H
