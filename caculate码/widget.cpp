#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
     ui->setupUi(this);
     QFont f("微软雅黑",13);
     ui->lo->setFont(f);//改个字体
     this->setWindowTitle("simple caculate");
     QIcon png("D:\\qtbain1\\caculate\\QAQ.png");//按钮放图
     ui->bd->setIcon(png);
     QSize s(30,30);
     ui->bd->setIconSize(s);
     //ui->be->setStyleSheet("background:blue");改颜色
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_b1_clicked()
{
    ans+="1";
    ui->lo->setText(ans);
}

void Widget::on_b2_clicked()
{
    ans+="2";
    ui->lo->setText(ans);
}

void Widget::on_b3_clicked()
{
    ans+="3";
    ui->lo->setText(ans);
}

void Widget::on_b4_clicked()
{
    ans+="4";
    ui->lo->setText(ans);
}
void Widget::on_b5_clicked()
{
    ans+="5";
    ui->lo->setText(ans);
}


void Widget::on_b6_clicked()
{
    ans+="6";
    ui->lo->setText(ans);
}

void Widget::on_b7_clicked()
{
    ans+="7";
    ui->lo->setText(ans);
}

void Widget::on_b8_clicked()
{
    ans+="8";
    ui->lo->setText(ans);
}

void Widget::on_b9_clicked()
{
    ans+="9";
    ui->lo->setText(ans);
}

void Widget::on_b0_clicked()
{
    ans+="0";
    ui->lo->setText(ans);
}

void Widget::on_bc_clicked()
{
    ans.clear();
    ui->lo->clear();
}

void Widget::on_bd_clicked()
{
    ans.chop(1);//去掉一个结尾的数字
    ui->lo->setText(ans);
}

void Widget::on_br_clicked()
{
    ans+=")";
    ui->lo->setText(ans);
}

void Widget::on_bl_clicked()
{
    ans+="(";
    ui->lo->setText(ans);
}

void Widget::on_bp_clicked()
{
    ans+="+";
    ui->lo->setText(ans);
}

void Widget::on_bm_clicked()
{
    ans+="-";
    ui->lo->setText(ans);
}

void Widget::on_bt_clicked()
{
    ans+="*";
    ui->lo->setText(ans);
}

void Widget::on_bm_2_clicked()
{
    ans+="/";
    ui->lo->setText(ans);
}
void Widget::on_be_clicked()//终于写逻辑了,用栈模拟
{
    QStack<int> num;//放数字
    QStack<char> opt;//放运算符
    char op[128]={'0'};
    int tmp=0,num1,num2;//其实tmp用数组更好可以进行大数据模拟(但是我懒)
    int i=0;
    QByteArray huan;
    huan.append(ans);//转qbytearray再转char
    strcpy(op,huan.data());//
   //string s = ans.toStdString();//转string
    while(op[i]!='\0'||!opt.empty()){
        if(op[i]>='0'&&op[i]<='9'){
            tmp=tmp*10+op[i]-'0';
            i++;
            if(op[i]<'0'||op[i]>'9'){//下一个是运算符时将数字入栈
                num.push(tmp);
                tmp=0;
            }
        }
        else{
            if(opt.empty()||judge(op[i])>judge(opt.top())||(opt.top()=='(' && op[i]!=')')){//判断优先级
                opt.push(op[i]);
                i++;
                continue;//这个continue是直接过节省时间
            }
            if(opt.top()=='('&&op[i]==')'){
                opt.pop();//括号成对出战
                i++;
                continue;
            }
            if(judge(op[i])<=judge(opt.top())||(opt[i]==')'&&opt.top()!='(')||op[i]=='\0'&&!opt.empty()){//外面运算符优先级小或者成对括号里有运算符就开算
                char ggsimida=opt.top();
                opt.pop();//我记得stack的pop好像不返回值
                switch(ggsimida){
                case '+':
                    num1=num.top(),num.pop();
                    num2=num.top(),num.pop();
                    num.push(num1+num2);//用数组的话这边改或者直接重载
                    break;
                case'-':
                    num1=num.top(),num.pop();
                    num2=num.top(),num.pop();
                    num.push(num2-num1);
                    break;
                case'*':
                    num1=num.top(),num.pop();
                    num2=num.top(),num.pop();
                    num.push(num1*num2);
                    break;
                case'/':
                    num1=num.top(),num.pop();
                    num2=num.top(),num.pop();
                    num.push(num2/num1);
                    break;
                }
            }
        }
    }
    ui->lo->setText(QString::number(num.top()));
    ans.clear();
}

