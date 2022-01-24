// 本程序用于验证教材中6.2.3节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

void reset( int* ip ) ;
void reset( int &i ) ;
string::size_type find_char( const string &s , char c ,string::size_type &occurs ) ;

int main() {
    /*
    const int ci = 42 ;
    int i = ci ;
    cout << ci << " " << i << endl;
  //int *const p = &ci ;                          // 存放常量对象的地址，只能用存放常量的指针
  //*p = 0 ;
    cout << ci << " " << i << endl;
    */

    int i = 0 ;
    const int ci = i ;
    string::size_type ctr = 0 ;
    reset( &i ) ;
    reset( &ci ) ;                                  // 错误：不能用指向const int对象的指针初始化int*
    reset( i ) ;                                    // 调用类型是int&的reset函数
    reset( ci ) ;                                   // 错误：不能把普通引用绑定到const对象ci上
    reset( 42 ) ;                                   // 错误；不能把普通引用绑定到字面值上
    reset( ctr ) ;                                  // 错误：类型不匹配，因为ctr是无符号类型
    find_char( "Hello world!" , 'o' ,ctr ) ;        // find_char的第一个形参是常量引用

    return 0;
}

void reset( int* ip ) {
    *ip = 0 ;
    ip = 0 ;
}

void reset( int &i ) {
    i = 0 ;
}

string::size_type find_char( const string &s , char c ,string::size_type &occurs ){
    string::size_type ret = s.size() ;                                                         // 第一次出现的位置
    occurs = 0 ;                                                                                 // 设置表示形参的值
    for( string::size_type i = 0 ; i != s.size() ; ++i )
        if( s[i] == c ){
            if( ret == s.size() )                                                               // 判断并记录c第一次出现的位置
                ret = i ;
            ++occurs;                                                                           // 将出现次数+1
        }
    return ret + 1 ;                                                                            // 返回值是s中c第一次出现的位置索引，出现次数
}
