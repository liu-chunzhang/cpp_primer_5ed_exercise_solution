// 本程序用于验证教材中5.1节内容的可靠性，并提供感性认知
#include <iostream>
#include <vector>
using namespace std;

int main() {
    const vector<string> scores{ "F" , "D" , "C" , "B" , "A" , "A++" } ;
    string lettergrade ;
    unsigned grade = 0 ;
    cin >> grade ;
    cout << "请输入您要评估等级的成绩，请不要超过100分：" << endl;
    if ( grade > 100 )                                                   // 为了保证程序可以正常进行，我增加了一步判断语句，用来排除输入分数
        cout << "输入成绩大于100，不合理！" << endl;                    // 大于100的情形
    else{
        if( grade < 60 )
            lettergrade = scores[0] ;
        else{
            lettergrade = scores[ ( grade - 50 ) / 10 ] ;
            if( grade != 100 ){                                         // 此处不加这个大括号也没问题，只是这里给了一个警告，加了就消除了
                if( grade % 10 > 7 )
                    lettergrade += '+' ;
                else if( grade % 10 < 3 )
                    lettergrade += '-' ;
            }
        }
        cout << "等级成绩是：" << lettergrade << endl;
    }
    return 0;
}
