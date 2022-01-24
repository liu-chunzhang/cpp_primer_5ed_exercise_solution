// 本程序用于验证教材中5.3.2节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

int main() {
    /*
    unsigned aCnt = 0 , eCnt = 0 , iCnt = 0 , oCnt = 0 , uCnt = 0 ;
    char ch ;
    while( cin >> ch ){
         switch( ch ){
            case 'a' :
                ++aCnt ;
                break ;
            case 'e' :
                ++eCnt ;
                break;
            case 'i' :
                ++iCnt ;
                break;
            case 'o' :
                ++oCnt ;
                break;
            case 'u' :
                ++uCnt ;
                break;
         }
    }
    cout << "元音字母a的数量是：" << aCnt << endl;
    cout << "元音字母e的数量是：" << eCnt << endl;
    cout << "元音字母i的数量是：" << iCnt << endl;
    cout << "元音字母o的数量是：" << oCnt << endl;
    cout << "元音字母u的数量是：" << uCnt << endl;                                        // 只输入一个e，输出是0 1 0 0 0
    */

    /*
    unsigned aCnt = 0 , eCnt = 0 , iCnt = 0 , oCnt = 0 , uCnt = 0 ;                       // 此例说明漏写break易引发缺陷
    char ch;
    while(cin >> ch){
         switch(ch){
            case 'a' :
                ++aCnt ;
            case 'e' :
                ++eCnt ;
            case 'i' :
                ++iCnt ;
            case 'o' :
                ++oCnt ;
            case 'u' :
                ++uCnt ;
         }
    }
    cout << "元音字母a的数量是：" << aCnt << endl;
    cout << "元音字母e的数量是：" << eCnt << endl;
    cout << "元音字母i的数量是：" << iCnt << endl;
    cout << "元音字母o的数量是：" << oCnt << endl;
    cout << "元音字母u的数量是：" << uCnt << endl;                                        // 只输入一个e。输出是0 1 1 1 1
    */

    /*
    unsigned vowelCnt = 0 , otherCnt = 0 ;                                                // 此例说明switch内部的控制流和default的用处
    char ch;
    while( cin >> ch ){
         switch( ch ){
            case 'a' : case 'e' : case 'i' : case 'o' : case 'u' :
               ++vowelCnt ;
               break ;
            default:
               ++otherCnt;
               break;
         }
    }
    cout << vowelCnt << " " << otherCnt << endl;
    */

    /*
    bool flag = false ;
    switch(flag){                                                        // 因为switch中没有单独的区域块来限定变量ival的声明
        case true:                                                       // 周期，所以变量的作用域是初始化到switch语句的结尾
            string file_name ;                                           // 处。修改方法有两种：
            int ival = 0 ;                                               // 1.【缩小作用域】将case 1的代码用{}括起来，设定清
            int jval ;                                                   // 楚变量的作用域，避免被其他case访问；
            break;                                                       // 2.【扩大作用域】将变量放在switch语句之前，使得其
        case false:                                                      // 每个case都可以访问它
            int jval = 3 ;
            string file_name ;
            if( file_name.empty() )
               cout << jval ;
            break;
        }
    */
    return 0;
}
