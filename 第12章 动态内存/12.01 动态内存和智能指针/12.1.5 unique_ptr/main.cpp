// 本程序用于验证教材中12.1.5节内容的可靠性，并提供感性认知
#include "connection.h"

unique_ptr<int> clone( int p ) ;
unique_ptr<double> clone( double p ) ;

int main() {
    unique_ptr<double> p1 ;
    unique_ptr<int> p2( new int( 42 ) ) ;

    unique_ptr<string> p21( new string( "Stegosaurus" ) ) ;
  //unique_ptr<string> p22( p21 ) ;                                // 错误：unique_ptr不支持拷贝
    unique_ptr<string> p23 ;
  //p23 = p21 ;                                                    // 错误：unique_ptr不支持赋值

    unique_ptr<string> p31( new string( "Stegosaurus" ) ) ;
    unique_ptr<string> p32( p31.release() ) ;
    unique_ptr<string> p33( new string( "Trex" ) ) ;
    cout << "|" << *p32 << "| |" << *p33 << "|" << endl;
    p32.reset( p33.release() ) ;
  //cout << "|" << *p32 << "| |" << *p33 << "|" << endl;           // 此时p33的对象已经被释放掉了，解指针p33是未定义行为

    p32.release() ;                                               // 错误：p2不会释放内存，而且我们丢失了指针，但是编译器不会检查这样的事情
    unique_ptr<string>::pointer p = p32.release() ;             // 此处auto的实指类型很奇怪：用*不可以代替此处的::pointer
    return 0;
}

unique_ptr<int> clone( int p ){
    return unique_ptr<int>( new int( p ) ) ;
}

unique_ptr<double> clone( double p ){
    unique_ptr<double> ret( new double (p) ) ;
    return ret ;
}
