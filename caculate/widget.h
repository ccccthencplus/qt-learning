#ifndef WIDGET_H
#define WIDGET_H
#include<QStack>
#include <QWidget>
#include<string.h>
using namespace std;
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    int judge(char p){//判断符号优先级
        switch (p){
        case '+':
        case '-':
                return 1;
            break;
        case '*':
        case '/':
            return 2;
        case '(':
            return 3;
        default: return 0;

        }
    }
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_b1_clicked();

    void on_b2_clicked();

    void on_b3_clicked();

    void on_b4_clicked();

    void on_b5_clicked();

    void on_b6_clicked();

    void on_b7_clicked();

    void on_b8_clicked();

    void on_b9_clicked();

    void on_b0_clicked();

    void on_bc_clicked();

    void on_bd_clicked();

    void on_be_clicked();

    void on_br_clicked();

    void on_bl_clicked();

    void on_bp_clicked();

    void on_bm_clicked();

    void on_bt_clicked();

    void on_bm_2_clicked();

private:
    Ui::Widget *ui;
    QString ans;
};
#endif // WIDGET_H
