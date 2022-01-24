// 本程序用于验证教材中6.2.2节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

void reset( int &i ) ;
bool isShorter( const string &s1 , const string &s2 ) ;
string::size_type find_char( const string &s , char c ,string::size_type &occurs ) ;

int main() {
    int i = 42 ;
    reset( i ) ;                                               // i采用传引用方式，值被改变
    cout << i << endl;

    string s1{ "hello" } , s2{ "hiya" } ;
    cout << ( isShorter( s1 , s2 ) ? "s2稍长" : "s1稍长" ) << endl;

    /*
    const string s1{"Welcome to C++ family!"} ;
    string::size_type i = 0 ;
    cout << find_char( s1 , 'm' , i ) << " " << i << endl;
    */

    return 0 ;
}

void reset(int &i){                                                                           // i是传给reset函数对象的另一个名字
    i = 0 ;                                                                                     // 改变了i所引对象的值
}

bool isShorter( const string &s1 , const string &s2 ){
    return s1.size() < s2.size() ;
}

string::size_type find_char( const string &s , char c ,string::size_type &occurs ){
    string::size_type ret = s.size() ;                                                         // 第一次出现的位置（如果有的话）
    occurs = 0 ;                                                                                 // 设置表示形参的值
    for( string::size_type i = 0 ; i != s.size() ; ++i )
        if( s[i] == c ){
            if( ret == s.size() )                                                               // 判断并记录c第一次出现的位置
                ret = i ;
            ++occurs;                                                                            // 将出现次数+1
        }
    return ret ;                                                                                // 返回值是s中c第一次出现的位置索引，出现次数由occurs返回
}
