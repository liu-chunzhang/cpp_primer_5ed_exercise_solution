// ������������֤�̲���16.1.1�����ݵĿɿ��ԣ����ṩ������֪
#include "Sales_data.h"
#include <vector>
#include <cstring>

template <typename T>
int compare( const T &v1 , const T &v2 ) ;

//template <typename T , U > T calc( const T& , const U& ) ;                    // ����U֮ǰ�������class��typename��

template <typename T , typename U>
T calc( const T &t , const U &u ) ;      // ��ȷ����ģ������б��У�typename��class������ͬ

template <unsigned N , unsigned M>
int compare( const char ( & )[ N ] , const char ( & )[ M ] ) ;

int main() {
    cout << compare( 1 , 0 ) << endl;                           // TΪint��ʵ������int compare( const int& , const int& )
    vector<int> ivec1{ 1 , 2 , 3 } , ivec2{ 4 , 5 , 6 } ;
    cout << compare( ivec1 , ivec2 ) << endl;                   // TΪvector<int>��ʵ������int compare( const vector<int>& , const vector<int>& )
    cout << compare( "hi" , "mom" ) ;
    Sales_data data1 , data2 ;
    cout << compare( data1 , data2 ) ;                           // ����Sales_dataδ����<
    return 0;
}

template <typename T>
int compare( const T &v1 , const T &v2 ){
    if( v1 < v2 )
        return -1 ;
    if( v2 < v1 )
        return 1 ;
    return 0 ;
}

template <unsigned N , unsigned M > int compare( const char ( &p1 )[ N ] , const char ( &p2 )[ M ] ) {
    return strcmp( p1 , p2 ) ;
}

template <typename T> inline T min( const T &v1 , const T &v2 ) ;      // ��ȷ��inline˵��������ģ������б�֮��
//inline template <typename T> T min2( const T& , const T& ) ;             // ���� inline˵������λ�ò���ȷ

template <typename T> int compare2( const T &v1 , const T &v2 ){
    if( less<T>()( v1 , v2 ) ) return -1 ;
    if( less<T>()( v2 , v1 ) ) return 1 ;
    return 0 ;
}
