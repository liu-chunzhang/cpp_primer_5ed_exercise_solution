// ������������֤�̲���16.1.4�����ݵĿɿ��ԣ����ṩ������֪
#include <list>
#include <memory>
#include "Blob.h"
#include "DebugDelete.h"

int main() {
    double *p = new double() ;
    DebugDelete d ;                 // ����delete���ʽ����ʹ�õĶ���
    d( p ) ;                        // ����DebugDelte::operator()( double* )���ͷ�p
    int *ip = new int() ;          // ��һ����ʱDebugDelete�����ϵ���operator()( int* )
    DebugDelete()( ip ) ;

    unique_ptr<int,DebugDelete> p2( new int( 5 ) , DebugDelete() ) ;      // ����p2ָ��Ķ���ʵ����DebugDelete::operator()<int>( int* )
    unique_ptr<string,DebugDelete> sp( new string() , DebugDelete() ) ;  // ����spָ��Ķ���ʵ����DebugDelete::operator()<string>( string* )

    int ia[] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
    vector<long> vi = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
    list<const char*> w = { "now" , "is" , "the" , "time" } ;
    Blob<int> a1( begin( ia ) , end( ia ) ) ;                    // ʵ����Blob<int>��Ľ�������int*�����Ĺ��캯��
    Blob<int> a2( vi.cbegin() , vi.cend() ) ;                    // ʵ����Blob<int>��Ľ�������vector<long>::iterator�����Ĺ��캯��
    Blob<string> a3( w.begin() , w.end() ) ;                     // ʵ����Blob<string>��Ľ�������list<const char*>::iterator�����Ĺ��캯��
    return 0;
}
