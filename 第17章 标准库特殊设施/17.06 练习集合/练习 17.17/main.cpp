// ������������֤��������ϰ17.17�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <regex>
using namespace std;

int main() {
    string pattern( "[^c]ei" ) , word ;
    pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*" ;
    regex r( pattern , regex::icase ) ;
    cout << "������һ������ѯ�ĵ��ʣ���Ctrl+Cֹͣ:" << endl;
    while( getline( cin , word ) ){
        for( sregex_iterator it( word.cbegin() , word.cend() , r ) , end_it ; it != end_it ; ++it )
            cout << it->str() << " " ;
        cout << endl;
        cout << "������һ������ѯ�ĵ��ʣ���Ctrl+Cֹͣ:" << endl;
    }
    return 0;
}
