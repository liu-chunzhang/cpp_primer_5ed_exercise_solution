// ������������֤�̲���16.2.4�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

template <typename T> int compare( const T &lhs , const T &rhs ) ;


int main() {
    int (*pf1)( const int & , const int & ) = compare ;        // ��Ȼ��ֱ��ע��intҲ�У�pf1ָ��ʵ��int compare( const int& , const int& ) ;

    void func( int(*)( const string &lhs , const string &rhs ) ) ;
    void func( int(*)( const int &lhs , const int &rhs ) ) ;

    func( compare ) ;                                            // ���󣺶����Ե���
    func( compare<int> ) ;                                       // ��ȷ����ʽָ��ʹ��ĳһ��ʵ�����汾
    func( pf1 ) ;
    return 0;
}

template <typename T> int compare( const T &lhs , const T &rhs ) {
    if( less<T>()( lhs , rhs ) )
        return -1 ;
    if( less<T>()( rhs , lhs ) )
        return 1 ;
    return 0 ;
}

void func( decltype( compare<int> ) ) { }                           // ��仰ֻ��Ϊ������δ�����趨�ģ�������
