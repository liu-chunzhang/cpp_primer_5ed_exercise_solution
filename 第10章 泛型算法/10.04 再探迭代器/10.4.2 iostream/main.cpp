// ������������֤�̲���10.4.2�����ݵĿɿ��ԣ����ṩ������֪
#include <fstream>
#include <numeric>
#include "Sales_item.h"

void print( vector<int>& ) ;

int main() {
    /*
    istream_iterator<int> int_it( cin ) ;               // ��cin��ȡint
    istream_iterator<int> int_eof ;                     // β�������
    ifstream in( "afile" ) ;
    istream_iterator<string> str_it( in ) ;             // ��"afile"�ж�ȡ�ַ���
    */

    /*
    vector<int> ivec ;
    istream_iterator<int> in_iter( cin ) ;
    istream_iterator<int> eof ;
    while( in_iter != eof )
        ivec.push_back( *in_iter++ ) ;
    print( ivec ) ;
    */

    /*
    istream_iterator<int> in_iter2( cin ) , eof2 ;
    vector<int> ivec2( in_iter2 , eof2 ) ;
    print( ivec2 ) ;
    */

    /*
    istream_iterator<int> in3( cin ) , eof3 ;
    cout << accumulate( in3 , eof3 , 0 ) << endl;
    */

    /*
    vector<int> ivec3 = { 1 , 1 , 2 , 3 , 5 , 8 , 13 } ;
    ostream_iterator<int> out_iter( cout , " " ) ;
    for( int e : ivec3 )
        out_iter = e ;
    cout << endl;
    for( int e : ivec3 )
        *out_iter++ = e ;      // �����úͺ��üӷ���ostream_iterator�������á��������Ժ������޸ĵĽǶȣ����Լ��������ʹ�ó���˼·������
    cout << endl;
    copy( ivec3.cbegin() , ivec3.cend() , out_iter ) ;
    cout << endl;
    */


    istream_iterator<Sales_item> item_iter( cin ) , eof ;
    ostream_iterator<Sales_item> out_iter( cout , "\n" ) ;
    Sales_item sum = *item_iter++ ;
    while( item_iter != eof ){
        if( item_iter->isbn() == sum.isbn() )
            sum += *item_iter++ ;
        else
            out_iter = sum , sum = *item_iter++ ;
    }
    out_iter = sum ;
    return 0;
}

void print( vector<int>& ivec ){
    for( const int i : ivec )
        cout << i << " " ;
    cout << endl;
}
