// ������������֤�̲���6.2.4�����ݵĿɿ��ԣ����ṩ������֪
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
    print( cp.c_str() );                                   // �������ĳ����Ҫһ��C����ַ���ʱ���޷�ֱ��ʹ��string�����������Ϊ����ɸù��ܣ�
                                                           // stringר���ṩ��һ����Ϊc_str�ĳ�Ա�������䷵��ֵΪһ��C����ַ������������ؽ��
                                                           // ��һ��ָ�룬��ָ��ָ��һ���Կ��ַ��������ַ����飬�����������������ݺ�string��
                                                           // ��һ�������⣬��Ҫע�⣬�޷���֤c_str�������ص�����һֱ��Ч�����̲�3.5.5�ڣ�P111��

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

void print( const int *beg , const int *ter ) {             // ���beg��end֮�䣨����end��������Ԫ��
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
