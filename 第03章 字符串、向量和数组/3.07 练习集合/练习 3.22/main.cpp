// ������������֤��������ϰ3.22�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> text ;
    string str ;
    while( getline( cin , str ) )
        text.push_back( str ) ;
    for( string &i : text)                                                          // �˴�����˫ѭ��������дvector��ÿ��string��ÿ���ַ�����ÿ��
        for( char &j : i )                                                          // ��Χforѭ�������������úţ�ȷ����дʵ����ɣ���������ʽ�ģ�
            j = toupper( j ) ;
    for( vector<string>::const_iterator it = text.cbegin() ; it != text.cend() && !it->empty() ; ++it )
        cout << *it << endl ;                                                       // ֮�󣬽���д���������ֱ��������һ���հ���Ϊֹ
    return 0;
}
