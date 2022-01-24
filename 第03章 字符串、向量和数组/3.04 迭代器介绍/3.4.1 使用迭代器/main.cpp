// ������������֤�̲���3.4.1�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <vector>
using namespace std;

int main() {
    /*
    string s{ "Hello world!" } ;
    auto b = s.begin() , e = s.end();               // b��ʾv�ĵ�һ��Ԫ�أ�e��ʾvβԪ�ص���һλ��
    cout << *b << endl;                             // b��e��������ͬ������ͨ�������õ�������ȡ����ָʾ��Ԫ�أ����ǲ��ܽ�����β���������
    */

    /*
    string s{ "some string" } ;
    if( s.begin() != s.end() ){                                                       // ����ȷ��s�ǿ�
        string::iterator it = s.begin() ;                                             // ��it��ʾs�ĵ�һ���ַ���it��������string::iterator
        *it = toupper( *it ) ;                                                        // ����ǰ�ַ���дΪ��д��ʽ
        cout << s << endl;
    }
    else
        cout << "����ַ����ǿմ���" << endl;
    */

    /*
    string s{ "some string" } ;
    for( string::iterator it = s.begin() ; it != s.end() && !isspace( *it ) ; ++it ) // string::iterator���Ͳ����������̲�ͨ����auto��ܴ�����
        *it = toupper( *it ) ;                                                       // ѭ�������Ƕ�ȡ������δ�����ո�
    for( char it : s )
        cout << it ;
    */

    /*
    vector<int>::iterator it1;                                                      // it1�ܹ���дvector<int>��Ԫ��
    string::iterator it2;                                                           // it2�ܹ���дstring�����е��ַ�
    vector<int>::const_iterator it3;                                                // it3ֻ�ܹ���Ԫ�أ�����дԪ��
    string::const_iterator it4;                                                     // it4ֻ�ܶ��ַ�������д�ַ�
    */

    /*
    vector<int> v{1,2,3,4,5} ;
    const vector<int> cv{6,7,8,9,0} ;
    vector<int>::iterator it1 = v.begin() ;
    auto it2 = cv.cbegin() ;
    it1[3] = it2[3];                                                                // ������Ӧvector�����ͱ���֮���ֱ�Ӹ�ֵ��������һ�㣬����
  //cout << typeid(it2).name() << endl;                                             // ��typeid(typename).name()��������֤��һ��
    */


    vector<string> text ;
    string str ;
    while( getline( cin , str ) )
        text.push_back( str ) ;
    for( vector<string>::const_iterator it = text.cbegin() ; it != text.cend() && !it->empty() ; ++it )  // �������text��ÿһ��ֱ��������һ���հ���Ϊֹ
        cout << *it << endl;

    return 0;
}
