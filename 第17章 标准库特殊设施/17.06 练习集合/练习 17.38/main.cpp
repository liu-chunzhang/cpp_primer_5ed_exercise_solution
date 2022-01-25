// 本程序用于验证读者在练习17.38中的想法，并在必要的地方予以说明
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

const size_t sz = 100 ;

int main()
{   ifstream in( "data.txt" ) ;
    if( !in ){
        cerr << "Can not open input file!" << endl;
        return -1 ;
    }
    char c[ sz ] ;
    while( !in.eof() ){
        in.getline( c , sz ) ;              // 程序逻辑如下：
        cout << c ;                         // 若读入sz个字符以后这读完这一行，进入if分支情形，流的合法性不丧失，从而直接打印换行符即可；
        if( in.good() )                     // 若读入sz个字符以后这实际上没有读完这一行，则由getline特性，流的合法性丧失，进入else分支，
            cout << endl;                  // 若实际上只是读取字符数不足，只需要恢复流的合法性即可；若实际上已经读取到EOF而停止，则跳出
        else                               // 循环，判断循环失效，结束程序即可。
            if( in.gcount() == sz - 1 )
                in.clear() ;
            else
                break ;
    }
    return 0;
}
