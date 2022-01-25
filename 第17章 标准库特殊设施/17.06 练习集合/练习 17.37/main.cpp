// 本程序用于验证读者在练习17.37中的想法，并在必要的地方予以说明
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
        in.getline( c , sz ) ;
        cout << left << setw( 100 ) << c << " " << in.gcount() << endl;
        if( !in.good() )                                // 函数good用于判定流是否处在有效状态，是则返回true：故这一句是判定流是否已不合法
            if( in.gcount() == sz - 1 )                 // 若不合法，则为读取长度不足而非读取完成，则重置流的合法性，经循环再次读取
                in.clear() ;                   // 值得注意的是，使用getline读取的字符数达到指定上限时仍没有遇到分界符，则会将
            else                               // 流的状态置为fail，需要用clear函数将流重置为valid状态
                break ;
    }
    return 0;
}
