// 本程序用于验证教材中10.4.2节内容的可靠性，并提供感性认知
#include <fstream>
#include <numeric>
#include "Sales_item.h"

void print( vector<int>& ) ;

int main() {
    /*
    istream_iterator<int> int_it( cin ) ;               // 从cin读取int
    istream_iterator<int> int_eof ;                     // 尾后迭代器
    ifstream in( "afile" ) ;
    istream_iterator<string> str_it( in ) ;             // 从"afile"中读取字符串
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
        *out_iter++ = e ;      // 解引用和后置加法对ostream_iterator不起作用。但出于以后理解和修改的角度，可以加上这两项，使得程序思路更清晰
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
