// 本程序用于验证教材中6.5.3节内容的可靠性，并提供感性认知
#include <iostream>
#include <cassert>              // <cassert>是调用assert宏必须的头文件！
using namespace std;

void print( const int ia[] , size_t size0 ) ;

int main() {
    assert( 10 ) ;                                                       // 由于定义了NEDBUG，所以assert什么也不做
    string word( "Hello" ) ;
    constexpr unsigned threshold = 20 ;
    if( word.size() < threshold )
        cerr << "Error: " << __FILE__  << " : in function "              // __FILE__存放文件名的字符串字面值
              << __func__ << " at line " << __LINE__ << endl             // __LINE__存放当前行号的整型字面值
              << "\tCompiled on " << __DATE__ << " at " << __TIME__      // __DATE__存放文件编译日期的字符串字面值
              << endl << "\tWord read was \"" << word                    // __TIME__存放文件编译时间的字符串字面值
              << "\": Length too short." << endl;
    return 0;
}

void print( const int ia[] , size_t size0 ) {
    #ifndef NDEBUG
    cerr << __func__ << ": array size is " << size0 << endl;             // __func__是编译器定义的一个局部变量，用于存放函数的名字
    #endif // NDEBUG
}
