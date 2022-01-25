// ������������֤�̲���16.2.6�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

template <typename T> typename remove_reference<T>::type&& move( T &&t ) ;

int main() {
    string s1( "hi!" ) , s2 ;
    s2 = std::move( string( "bye!" ) ) ;        // ��ȷ����һ����ֵ�ƶ����ݡ������������� string&& move( string && )
    cout << s1 << " " << s2 << endl;
    s2 = std::move( s1 ) ;                       // ��ȷ������ֵ�Ժ�s1��ֵ��ȷ��.������������ string&& move( string & )
    cout << s1 << " " << s2 ;
    return 0;
}

template <typename T> typename remove_reference<T>::type&& move( T &&t ) {
    return static_cast<typename remove_reference<T>::type&&>( t ) ;
}
