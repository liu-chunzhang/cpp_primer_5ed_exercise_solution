// ������������֤��������ϰ17.16�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <regex>
using namespace std;

int main() {
    string str( "[^c]ei" ) , word ;                                         // �������ϰ17.15��ɾȥ�˵ڶ��䣬������Ҫ��ǰ��ƥ����
    regex r( str ) ;                                                        // �����õĴ����ṩ�ڴˣ�receipt freind theif receive
    smatch results ;
    cout << "��������һ�������ĵ��ʣ�ѡ��Ctrl+C��ֹͣ:" << endl;        // ��patternֻ��"[^c]ei"����ֻ����"?ei"��ʽ���ַ���ƥ�䣬
    while( cin >> word ){                                                   // ���У��ǳ���c֮����ַ�����������ֻ��ƴд����Ĳ��֣�
        if( regex_search( word , results , r ) )                            // �����ǰ�������ƴд���������ʡ�
            cout << "���뵥�ʲ������﷨: " << results.str() << endl;        // ���磬freind���rei
        else
            cout << "���뵥�ʷ����﷨" << endl;
        cout << "��������һ�������ĵ��ʣ�ѡ��Ctrl+C��ֹͣ:" << endl;
    }
    return 0;
}
