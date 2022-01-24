// 本程序用于验证教材中6.4.0节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

using Record = long unsigned ;
using phone = long unsigned ;
typedef phone telno ;
Record lookup( const phone u ) ;
Record lookup( const telno u ) ;              // 声明的是同一个函数。但是如果不加入函数体，只有定义的话，编译器不会报错
Record lookup( phone ) ;

const string &shorterString( const string &s1 , const string &s2 ) ;

string &shorterString( string &s1 , string &s2 ) ;

int main() {
    string str1 = "hello" , str2 = "hiya" , result = shorterString( str1 , str2 ) ;
    cout << result ;
    return 0;
}

const string &shorterString( const string &s1 , const string &s2 ) {
    return s1.size() <= s2.size() ? s1 : s2 ;
}

/*
Record lookup( const phone u ) {
    return u ;
}

Record lookup( phone u ) {
    return u ;
}
*/

string &shorterString( string &s1 , string &s2 ){
    const string &r = shorterString( const_cast<const string&>( s1 ) , const_cast<const string&>( s2 ) ) ;
    return const_cast<string&>( r ) ;
}
