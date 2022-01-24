// 本程序用于验证教材中6.2.4节内容的可靠性，并提供感性认知
#include <iostream>
//#include <iterator>
using namespace std;

void print( const int *i ) ;
void print( const char *cp ) ;
void print( const int *beg , const int *ter ) ;
void print( const int ia[] , size_t sizenum ) ;
void print( int (&arr)[10] ) ;

int main() {
    int i = 0 , j[5] = { 1 ,2 , 3 , 4 , 5 } ;
    print( &i ) ;
    print( j ) ;

    string cp( "Hello world! " ) ;
    print( cp.c_str() );                                   // 当程序的某处需要一个C风格字符串时，无法直接使用string对象代替它。为了完成该功能，
                                                           // string专门提供了一个名为c_str的成员函数，其返回值为一个C风格字符串，函数返回结果
                                                           // 是一个指针，该指针指向一个以空字符结束的字符数组，而这个数组所存的数据和string对
                                                           // 象一样。此外，需要注意，无法保证c_str函数返回的数组一直有效。（教材3.5.5节，P111）

    cout << endl;
    print( begin( j ) , end( j ) ) ;
    cout << endl;
    print( j , end( j ) - begin( j ) ) ;
    return 0;
}

void print( const int *i ){
    cout << *i << endl;
}

void print( const char *cp ){
    if( cp )
        while( *cp )
            cout << *cp++ ;
}

void print( const int *beg , const int *ter ) {             // 输出beg到end之间（不含end）的所有元素
    while( beg != ter )
        cout << *beg++ << " " ;
}

void print( const int ia[] , size_t sizenum ) {
    for( size_t i = 0 ; i != sizenum ; ++i )
        cout << ia[i] << " " ;
}

void print( int (&arr)[10] ) {
    for( int i : arr )
        cout << i << " " ;
}
