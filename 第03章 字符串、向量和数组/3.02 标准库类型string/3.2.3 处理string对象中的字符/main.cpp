// ������������֤�̲���3.2.3�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

int main() {
    /*
    string str( "some string" ) ;                                        // �˴��÷�Χfor���ʹ��ÿ�����str�е�һ���ַ�
    for( char c : str )                                                  // ����str�е�ÿ���ַ�
        cout << c << endl;                                               // �����ǰ�ַ����������һ�����з�
    */

    /*
    string s( "Hello world!!!" ) ;
    string::size_type punct_cnt = 0 ;                                    // �˴���decltype(s.size())Ҳ���Դ���string::size_type���Ͷ����������
    for( auto c : s )                                                    // �˴���auto�ñ������жϱ������ͣ���ʵ����char
        if( ispunct( c ) )
           ++punct_cnt ;                                                 // ��һ�仰����˼�ǣ��������ַ��Ǳ����ţ����¼�����������ı���+1
    cout << punct_cnt << " punctuation characters in " << s << endl;
    */

    /*
    string s( "Hello world!!!" ) ;                                       // ��Ҫ��дstring�ж����ֵ�����뽫ѭ������������������ͣ�ͨ��������
    for( auto &c : s )                                                   // �����󶨵��ַ���
        c = toupper( c ) ;                                               // ע���s�е�ÿ���ַ���c��һ�����ã���˸�ֵ��佫�ı�s���ַ���ֵ
    cout << s << endl;
    */

    /*
    if( !s.empty() )                                                     // ȷ��ȷʵ�������ַ���Ҫ���
        cout << s[0] << endl;                                            // ���s�ĵ�һ���ַ�
    */

    /*
    string si( "some string" );
    if( !si.empty() )
        si[0] = toupper( si[0] );
    cout << si << endl;

    for( size_t index = 0 ; index != si.size() && !isspace( si[index] ) ; ++index )  // ���δ���s�е��ַ�ֱ�����Ǵ���ȫ�����ַ���������һ���հ�
        si[index] = toupper( si[index] ) ;                                            // ����ǰ�ַ�ȫ����Ϊ��д��ʽ
    cout << si << endl;
    */

    /*
    const string hexdigits = "0123456789ABCDEF" ;
    cout << "Enter a series of numbers between 0 and 15 separated by spaces. Hit Enter when finished:"  << endl;
    string result ;
    string::size_type n ;
    while( cin >> n )
        if( n < hexdigits.size() )
           result += hexdigits[n] ;
    cout << "Your hex number is:" << result << endl;
    */

    return 0;
}
