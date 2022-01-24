// 本程序用于验证教材中3.4.1节内容的可靠性，并提供感性认知
#include <iostream>
#include <vector>
using namespace std;

int main() {
    /*
    string s{ "Hello world!" } ;
    auto b = s.begin() , e = s.end();               // b表示v的第一个元素，e表示v尾元素的下一位置
    cout << *b << endl;                             // b和e的类型相同，必须通过解引用迭代器获取其所指示的元素，但是不能解引用尾后迭代器！
    */

    /*
    string s{ "some string" } ;
    if( s.begin() != s.end() ){                                                       // 首先确保s非空
        string::iterator it = s.begin() ;                                             // 用it表示s的第一个字符，it的类型是string::iterator
        *it = toupper( *it ) ;                                                        // 将当前字符改写为大写形式
        cout << s << endl;
    }
    else
        cout << "这个字符串是空串！" << endl;
    */

    /*
    string s{ "some string" } ;
    for( string::iterator it = s.begin() ; it != s.end() && !isspace( *it ) ; ++it ) // string::iterator类型并不常见，教材通常用auto规避此问题
        *it = toupper( *it ) ;                                                       // 循环条件是读取结束且未遇见空格
    for( char it : s )
        cout << it ;
    */

    /*
    vector<int>::iterator it1;                                                      // it1能够读写vector<int>的元素
    string::iterator it2;                                                           // it2能够读写string对象中的字符
    vector<int>::const_iterator it3;                                                // it3只能够读元素，不能写元素
    string::const_iterator it4;                                                     // it4只能读字符，不能写字符
    */

    /*
    vector<int> v{1,2,3,4,5} ;
    const vector<int> cv{6,7,8,9,0} ;
    vector<int>::iterator it1 = v.begin() ;
    auto it2 = cv.cbegin() ;
    it1[3] = it2[3];                                                                // 这是相应vector里整型变量之间的直接赋值，关于这一点，可以
  //cout << typeid(it2).name() << endl;                                             // 用typeid(typename).name()函数来验证这一点
    */


    vector<string> text ;
    string str ;
    while( getline( cin , str ) )
        text.push_back( str ) ;
    for( vector<string>::const_iterator it = text.cbegin() ; it != text.cend() && !it->empty() ; ++it )  // 依次输出text的每一行直至遇到第一个空白行为止
        cout << *it << endl;

    return 0;
}
