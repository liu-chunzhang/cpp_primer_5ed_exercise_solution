// ������������֤��������ϰ17.15�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <regex>
using namespace std;

int main() {
    string str( "[^c]ei" ) , word ;
    str = "[[:alpha:]]*" + str + "[[:alpha:]]*" ;
    regex r( str ) ;
    smatch results ;
    cout << "��������һ�������ĵ��ʣ�ѡ��Ctrl+C��ֹͣ:" << endl;
    while( cin >> word ){
        if( regex_search( word , results , r ) )
            cout << "���뵥�ʲ������﷨: " << results.str() << endl;
        else
            cout << "���뵥�ʷ����﷨" << endl;
        cout << "��������һ�������ĵ��ʣ�ѡ��Ctrl+C��ֹͣ:" << endl;
    }
    return 0;
}

// �����õĴ����ṩ�ڴˣ�receipt freind theif receive
