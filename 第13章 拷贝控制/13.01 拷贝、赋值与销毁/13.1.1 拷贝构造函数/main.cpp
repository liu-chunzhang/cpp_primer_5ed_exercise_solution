// ������������֤�̲���13.1.1�����ݵĿɿ��ԣ����ṩ������֪
#include <vector>
#include "Sales_data.h"

void f( const vector<int> &ivec ) ;

int main() {
    string dots( 10 , '.' ) ;                   // ֱ�ӳ�ʼ��
    string s( dots ) ;                          // ֱ�ӳ�ʼ��
    string s2 = dots ;                          // ������ʼ��
    string null_book = "9-999-99999-9" ;        // ������ʼ��
    string nines = string( 100 , '9' ) ;       // ������ʼ��

    vector<int> v1( 10 ) ;
    vector<int> v2 = 10 ;                       // ���ܴ�С�����Ĺ��캯����explicit��
    f( 10 ) ;                                    // ���󣺲�����explicit�Ĺ��캯������һ��ʵ��
    f( vector<int>( 10 ) ) ;
    return 0;
}

void f( const vector<int> &ivec ) {
    cout << "The function about vector<int> is running!" << endl;
}
