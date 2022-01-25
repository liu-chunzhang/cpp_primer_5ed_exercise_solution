// 本程序用于验证教材中12.2.1节内容的可靠性，并提供感性认知
#include <iostream>
#include <memory>
using namespace std;
typedef int arrT[42] ;

size_t get_size( const string &s ) ;

int main() {
    string str ;
    cin >> str ;
    int *pia = new int[ get_size( str ) ] ;                                        // 方括号中的大小不必是常量，是整型变量即可

    int *p = new arrT() ;
    cout << sizeof( p )/ sizeof( int ) << endl;                                  // 此处不能用数组大小除以元素大小得到元素数，很奇怪

    int* pia2 = new int[10] ;                                                        // 10个没有初始化的int
    for( int *q = pia2 ; q != pia2 + 10 ; ++q )
        cout << "|" << *q << "| " ;
    cout << endl;
    int* pia3 = new int[10]() ;                                                     // 10个初始化为0的int
    for( int* q = pia3 ; q != pia3 + 10 ; ++q )
        cout << "|" << *q << "| " ;
    cout << endl;
    string* psa = new string[10] ;                                                  // 10个空string
    for( string* q = psa ; q != psa + 10 ; ++q )
        cout << "|" << *q << "| " ;
    cout << endl;
    string* psa2 = new string[10]() ;                                               // 10个空string
    for( string* q = psa2 ; q != psa2 + 10 ; ++q )
        cout << "|" << *q << "| " ;
    cout << endl;
    int* pia4 = new int[10]{ 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;              // 10个int分别用列表中对应的初始化器初始化
    for( int* q = pia4 ; q != pia4 + 10 ; ++q )
        cout << "|" << *q << "| " ;
    cout << endl;
    string* psa3 = new string[10]{ "a" , "an" , "the" , string( 3 , 'x' ) } ;       // 10个string，前4个用给定的初始化器初始化，剩下的进
    for( string* q = psa3 ; q != psa3 + 10 ; ++q )                                  // 行值初始化
        cout << "|" << *q << "| " ;
    cout << endl;


    size_t n = get_size( "" ) ;
    int* p2 = new int[n] ;
    for( int *q = p2 ; q != p2 + n ; ++q )
        cout << q << " " ;
    delete [] p2 ;                                                                  // p必须指向一个动态分配的数组或为空


    unique_ptr<int[]> up( new int[10] ) ;                                         // up指向了一个包含10个未初始化int的数组
  //up.release() ;                                                                  // 自动用delete[]销毁了指针up
    for( size_t i = 0 ; i != 10 ; ++i )
        up[i] = i ;                                                                 // 为每个元素赋一个新值

    shared_ptr<int> sp( new int[10] , []( int *p ){ delete[] p ; } ) ;
  //sp.reset() ;                                                                    // 使用提供的lambda表达式释放数组，它使用delete[]
    for( size_t i = 0 ; i != 10 ; ++i )                                            // 由于shared_ptr未定义下标运算符，并且不支持指针的算
        *( sp.get() + i ) = i ;                                                     // 术运算，故需要用get获取一个内置指针
    for( size_t i = 0 ; i != 10 ; ++i )
        cout << *( sp.get() + i ) << " " ;

    return 0;
}

size_t get_size( const string &s ) {
    return s.size() ;
}
