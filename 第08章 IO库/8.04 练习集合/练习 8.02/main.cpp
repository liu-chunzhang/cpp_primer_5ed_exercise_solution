// 本程序用于验证读者在练习8.2中的想法，并在必要的地方予以说明
#include <fstream>
#include <iostream>
using namespace std;

istream& printInt( istream &in ) ;         // 函数的声明，接收的参数类型是istream&,返回值类型也是istream&

int main() {
    ifstream in( "data.txt" ) ;
    printInt( in ) ;
    return 0;
}

istream& printInt( istream &in ){
    int v ;
    while( in >> v )                       // 循环条件：从给定流中读入数据，直到遇到文件结束标识时停止.
        cout << v << endl;
    in.clear() ;                           // 完成这些操作后，在返回流之前，对流进行复位，使其处于有效状态
    return in ;
}
