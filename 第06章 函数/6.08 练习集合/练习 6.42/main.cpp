// ������������֤��������ϰ6.42�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

string make_plural( size_t ctr , const string &word , const string &ending = "s" ) ;

int main() {
    cout << "success�ĵ�����ʽΪ" << make_plural( 1 , "success" , "es" ) << endl;           // success�ĸ�����successes
    cout << "success�ĸ�����ʽΪ" << make_plural( 2 , "success" , "es" ) << endl;
    cout << "failure�ĵ�����ʽΪ" << make_plural( 1 , "failure" ) << endl;                  // failure�ĸ�����failures
    cout << "failure�ĸ�����ʽΪ" << make_plural( 2 , "failure" ) << endl;
    return 0;
}

string make_plural( size_t ctr , const string &word , const string &ending ) {           // ���븳�����Ĭ���βΣ�����û����ȥ����Ҫ�Ĳ���
    return ( ctr > 1 ) ? word + ending : word ;
}
