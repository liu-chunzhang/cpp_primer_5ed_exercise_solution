// 本程序用于验证教材中16.1.4节内容的可靠性，并提供感性认知
#include <list>
#include <memory>
#include "Blob.h"
#include "DebugDelete.h"

int main() {
    double *p = new double() ;
    DebugDelete d ;                 // 可像delete表达式意义使用的对象
    d( p ) ;                        // 调用DebugDelte::operator()( double* )，释放p
    int *ip = new int() ;          // 在一个临时DebugDelete对象上调用operator()( int* )
    DebugDelete()( ip ) ;

    unique_ptr<int,DebugDelete> p2( new int( 5 ) , DebugDelete() ) ;      // 销毁p2指向的对象；实例化DebugDelete::operator()<int>( int* )
    unique_ptr<string,DebugDelete> sp( new string() , DebugDelete() ) ;  // 销毁sp指向的对象；实例化DebugDelete::operator()<string>( string* )

    int ia[] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
    vector<long> vi = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
    list<const char*> w = { "now" , "is" , "the" , "time" } ;
    Blob<int> a1( begin( ia ) , end( ia ) ) ;                    // 实例化Blob<int>类的接受两个int*参数的构造函数
    Blob<int> a2( vi.cbegin() , vi.cend() ) ;                    // 实例化Blob<int>类的接受两个vector<long>::iterator参数的构造函数
    Blob<string> a3( w.begin() , w.end() ) ;                     // 实例化Blob<string>类的接受两个list<const char*>::iterator参数的构造函数
    return 0;
}
