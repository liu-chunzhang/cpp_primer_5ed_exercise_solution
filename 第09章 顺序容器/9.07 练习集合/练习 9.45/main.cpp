// ������������֤��������ϰ9.45�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

string& add_presuffix( string &s , const string &s1 , const string &s2 ) ;

int main() {
    string s = "James" ;
    cout << add_presuffix( s , "Mr." , "III" ) << endl;
    return 0;
}

string& add_presuffix( string &s , const string &s1 , const string &s2 ) {
    s.insert( 0 , s1 ) ;                                                      // һ����ʽ��Mr.James III��������ͷ�ϲ���ǰ׺���һ���ո�
    s.append( ' ' + s2 ) ;                                                    // �ں�������׺
    return s ;
}
