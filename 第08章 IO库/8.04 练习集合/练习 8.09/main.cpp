// 本程序用于验证读者在练习8.9中的想法，并在必要的地方予以说明
#include <iostream>
#include <sstream>
using namespace std;

istream& printInt( istream &in ) ;                   // 函数的声明，接收的参数类型是istream&,返回值类型也是istream&

int main() {
    ostringstream ostr ;
    ostr << "hello, welcome to C++ world." << endl;
    istringstream in( ostr.str() ) ;
    printInt( in ) ;
    return 0;
}

istream& printInt( istream &in ){
    string v ;
    while( in >> v )
        cout << v << endl;                                  // 将读取的数据打印在标准输出上。
    in.clear() ;                                            // 完成这些操作后，在返回流之前，对流进行复位，使其处于有效状态
    return in ;
}
