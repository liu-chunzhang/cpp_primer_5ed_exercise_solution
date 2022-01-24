// ������������֤�̲���6.5.2�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <ctime>
using namespace std;

inline const string &shorterString( const string &s1 , const string &s2 ) ;
const string &shorterString2( const string &s1 , const string &s2 ) ;

constexpr int new_sz() { return 42 ; }
constexpr size_t scale( size_t cnt ) { return new_sz() * cnt ; }


int main() {
    clock_t start1 , finish1 , start2 , finish2 ;
    start1 = clock() ;
    for( int i = 0 ; i != 100000 ; ++i )
        cout << shorterString( "Hello world!" , "hiya!" ) << endl;
    finish1 = clock() ;
    start2 = clock() ;
    for( int i = 0 ; i != 100000 ; ++i )
        cout << shorterString2( "Hello world!" , "hiya!" ) << endl;
    finish2 = clock() ;
    cout << finish1 - start1 << "/" << CLOCKS_PER_SEC << " (s) " << endl;
    cout << finish2 - start2 << "/" << CLOCKS_PER_SEC << " (s) " << endl;    // ������Խ������������������ʹ�û��ǵ÷ǳ������ģ�ʹ�ò��������Ͽ�Ч��

    constexpr int foo = new_sz() ;

    int arr[scale( 2 )] ;       // ��ȷ��scale(2)�ǳ������ʽ
    int i = 2 ;                 // i����һ���������ʽ
    int a2[scale( i )] ;        // ����scale(i)����һ���������ʽ��constexpr��һ�����س������ʽ��
    return 0;
}

inline const string &shorterString( const string &s1 , const string &s2 ) {
    return ( s1.size() <= s2.size() ) ? s1 : s2 ;
}

const string &shorterString2( const string &s1 , const string &s2 ) {
    return ( s1.size() <= s2.size() ) ? s1 : s2 ;
}
