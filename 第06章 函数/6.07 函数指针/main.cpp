// 本程序用于验证教材中6.7节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;
using F = int( int * , int ) ;
using PF = int(*)( int * , int ) ;
typedef bool Func( const string & , const string & ) ;                      // Func是函数类型
typedef bool ( *FuncP )( const string & , const string & ) ;             // Func2是指向函数的指针

bool lengthCompare( const string &s1 , const string &s2 ) ;
bool ( *pf )( const string & , const string & ) ;
string::size_type sumLength( const string &s1 , const string &s2 ) ;
bool cstringCompare( const char *p1 , const char *p2 ) ;
void ff( int *i ) ;
void ff( unsigned int u ) ;
void ( *pf1 )( unsigned int ) = ff ;                                          // pf1指向ff( unsigned )
void useBigger( const string &s1 , const string &s2 , Func ) ;

PF f11( int ) ;                                                                // PF是指向函数的指针
F f12( int ) ;                                                                 // 错误：F是函数类型，f1不能返回一个函数
F *f13( int ) ;                                                                // 正确：显式指定返回类型是函数指针

int main() {
    pf = lengthCompare ;                                                       // 因为pf已经申明为了函数指针，所以不需要重新申明类型
    auto pf2 = &lengthCompare ;                                               // 用auto重新定义也没问题；pf2就必须重新定义
    bool b1 = pf( "hello" , "goodbye" ) ;
    bool b2 = ( *pf )( "hello" , "goodbye" ) ;
    bool b3 = lengthCompare( "hello" , "goodbye" ) ;
    cout << boolalpha << pf2 << " " << b1 << " " << b2 << " " << b3 << endl;  // （这一句用来消除过多的变量无用警告，实际没用）

    pf = 0 ;
    pf = sumLength ;                                                           // 返回类型不匹配
    pf = cstringCompare ;                                                      // 形参类型不匹配
    pf = lengthCompare ;

    void ( *pf3 )( int ) = ff ;                                               // 错误：没有一个ff与该形参列表匹配
    double ( *pf4 )( int * ) = ff ;                                           // 错误：ff和pf3的返回类型不匹配

    return 0;
}

bool lengthCompare( const string &s1 , const string &s2 ) {
    return ( s1.size() > s2.size() ) ? true : false ;
}

string::size_type sumLength( const string &s1 , const string &s2 ){
    return s1.size() + s2.size() ;
}

bool cstringCompare( const char *p1 , const char *p2 ) {
    return ( &p1 > &p2 ) ? true : false ;
}

void ff( int *i ) { cout << "ff( int *" << *i << endl; }

void ff( unsigned int u ) { cout << "ff( unsigned int *" << u << endl; }
