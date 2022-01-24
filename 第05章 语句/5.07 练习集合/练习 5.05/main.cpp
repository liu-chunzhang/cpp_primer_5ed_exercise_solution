// 本程序用于验证读者在练习5.5中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
using namespace std;                                                   // 基本是从5.3.1节程序拷贝而来，参考答案的方法非常麻烦。

int main() {
    const vector<string> scores{ "F" , "D" , "C" , "B" , "A" , "A++" } ;
    string lettergrade ;
    cout << "请输入您要评估等级的成绩，请不要超过100分：" << endl;
    unsigned grade = 0 ;
    cin >> grade ;
    if ( grade > 100 )                                                   // 为了保证程序可以正常进行，我增加了一步判断语句，用来排除输入分数
        cout << "输入成绩大于100，不合理！" << endl;                    // 大于100的情形
    else{
        if( grade < 60 )                                                 // 这里我先判定是不是不及格，而不是像参考答案那样先判定是不是满分，
            lettergrade = scores[0] ;                                    // 是为了效率：在实际上，满分数应该远小于不及格数；从分布上，不及格
        else{                                                            // 占有的判定有效整数区比满分大得多
            lettergrade = scores[ ( grade - 50 ) / 10 ] ;
            if( grade != 100 ){                                         // 此处不加这个大括号也没问题，只是这里给了一个警告，加了就消除了
                if( grade % 10 > 7 )
                    lettergrade += '+' ;
                else if ( grade % 10 < 3 )
                    lettergrade += '-' ;
            }
        }
        cout << "等级成绩是：" << lettergrade << endl;
    }
    return 0;
}
