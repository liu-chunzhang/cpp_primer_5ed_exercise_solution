// ������������֤��������ϰ10.21�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

void get_int_to_0( int i ) ;

int main() {
    int i = 5 ;
    get_int_to_0( i ) ;
    return 0;
}

void get_int_to_0( int i ){
    auto f = [ i ]() mutable -> bool { if( i != 0 ) { --i ;  return false ; } else return true ; } ;
    for( int k = 0 ; k <= i ; ++k )
        cout << f() << " " ;
    cout << endl;
}

// lambda���ʽ�е�i��ȡ�˱���i�ڳ��ڵĿ���������֮��ִ��������������lambda���ʽ�еı���i�������Ǻ������ڵı���i�������lambda���ʽ�Ĵ�ֵ����˼��
