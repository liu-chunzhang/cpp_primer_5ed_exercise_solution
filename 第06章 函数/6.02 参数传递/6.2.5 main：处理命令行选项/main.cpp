// 本程序用于验证教材中6.2.5节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

int main( int argc , char **argv ) {
    string str ;
    for( int i = 0 ; i != argc ; ++i ) {    //元素0指向程序的名字（位置），如果保证数组不止1个元素，完全可以改成i = 1。
        str = argv[i] ;
        cout << "argv[" << i << "] = " << str << endl;
    }
    system( "pause" ) ;
    return 0;
}
