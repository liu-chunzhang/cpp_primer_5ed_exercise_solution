// ������������֤��������ϰ16.48�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <sstream>
using namespace std;

template <typename T> string debug_rep( const T &t ) ;
template <typename T> string debug_rep( T *t ) ;

int main() {
    string str = "hi" , *sp = &str ;
    cout << debug_rep( str ) << endl;
    cout << debug_rep( sp ) << endl;
    return 0;
}

template <typename T> string debug_rep( const T &t ) {
    cout << "Using function template <typename T> string debug_rep( const T &t )" << endl;
    ostringstream ret ;
    ret << t ;
    return ret.str() ;
}

template <typename T> string debug_rep( T *t ) {
    cout << "Using function template <typename T> string debug_rep( T *t )" << endl;
    ostringstream ret ;
    ret << ( t ? " " + debug_rep( *t ) : " null pointer" ) ;
    return ret.str() ;
}
