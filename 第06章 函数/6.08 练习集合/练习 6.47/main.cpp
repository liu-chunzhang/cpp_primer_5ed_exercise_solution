// 本程序用于验证读者在练习6.47中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>                               // 打开调试器时，每次递归调用print函数都会输出“vector<string>对象的总大小为4”；关闭调试器时，
using namespace std;                          // 程序只输出vector对象的内容，不再输出其大小。

void add_string( vector<string> s , unsigned index ) ;

int main() {
    vector<string> svec{ "Hello" , " " , "world" , "!" } ;
    add_string( svec , 0 ) ;
    system( "pause" ) ;
    return 0;
}

void add_string( vector<string> s , unsigned index ) {   // 如本程序增加了两个NDEBUG宏：NDEBUG0和NEDBUG1，来测试程序具有多个NDEBUG宏的情况
    if( index != s.size() && !s.empty() ){
        #ifndef NDEBUG0
            cout << "这次调用的对象的大小为" << s[index].size() << ": ";
        #endif // NDEBUG0
        #ifndef NDEBUG1
            cout << s[index] << endl;
        #endif // NDEBUG1
        add_string( s , ++index ) ;
    }
}
