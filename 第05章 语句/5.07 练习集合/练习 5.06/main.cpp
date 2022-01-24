// 本程序用于验证读者在练习5.6中的想法，并在必要的地方予以说明：用条件运算符代替if else语句
#include <iostream>
#include <vector>
using namespace std;                // 基本是从练习5.5程序拷贝而来，相同的注释统一删去了。此外，如果完全使用条件运算符，则程序整体非常麻烦

int main() {
    const vector<string> scores{ "F" , "D" , "C" , "B" , "A" , "A++" } ;
    string lettergrade ;
    cout << "请输入您要评估等级的成绩，请不要超过100分：" << endl;

    unsigned grade = 0 ;
    cin >> grade ;
    lettergrade = ( grade > 100 ? "输入成绩大于100，不合理！" : "等级成绩是：" );
    cout << lettergrade << endl;
    if( lettergrade == "输入成绩大于100，不合理！" )
        return -1 ;
    lettergrade = ( grade < 60 ? scores[0] : scores[ ( grade - 50 ) / 10 ] ) ;      // 条件运算符的可读性和if else语句相比实在是突然太差了，就算
    if( grade < 60 ){
        cout << lettergrade << endl;
        return 0 ;
    }
    lettergrade = ( grade == 100 ) ? lettergrade :                                  // 是想有所增强也得加长句子，非常麻烦
                                    ( grade % 10 > 7 ) ? lettergrade + '+' :
                                                        ( grade % 10 < 3 ) ? lettergrade + '-' : lettergrade ;
    cout << lettergrade << endl;
    return 0;
}
