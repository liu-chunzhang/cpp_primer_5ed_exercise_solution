// ������������֤�̲���16.1.3�����ݵĿɿ��ԣ����ṩ������֪
#include "Sales_data.h"
#include "Numbers.h"

template <typename T> int calc( const T &lhs , const T &rhs ) ;
template <typename U> int calc( const U &lhs , const U &rhs ) ;

template <typename T>
typename T::value_type top( const T &c ) {                              // ԭ����if-else�����Щ��������������������������
    return ( !c.empty() ) ? c.back() : typename T::value_type() ;
}

template <typename T,typename F = less<T>>
int compare( const T &lhs , const T &rhs , F f = F() ) ;

int main() {
    cout << compare( 3 , 5 , greater<int>() ) ;
    bool i = compare( 0 , 42 ) ;
    cout << endl;
    Sales_data item1( cin ) , item2( cin ) ;
    bool j = compare( item1 , item2 , less<Sales_data>() ) ;               // compareIsbn������ʵ�֣����ж�����<�����������less����������
    cout << i << " " << j << " " << compare( 3 , 5 ) ;

    Numbers<long double> lots_of_precision ;
    Numbers<> average_precision ;                                          // <>��ʾʹ��Ĭ������
    return 0;
}

template <typename T,typename F>
int compare( const T &lhs , const T &rhs , F f ) {                           // ԭ����if-else�����Щ��������������������������
    if( f( lhs , rhs ) )
        return -1 ;
    if( f( rhs , lhs ) )
        return 1 ;
    return 0 ;
}
