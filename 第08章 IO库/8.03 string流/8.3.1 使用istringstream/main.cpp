// ������������֤�̲���8.3.1�����ݵĿɿ��ԣ����ṩ������֪
#include "PersonInfo.h"

int main() {
    string line , word ;                        // �ֱ𱣴����������һ�к͵���
    vector<PersonInfo> people ;                 // ����������������м�¼
    while( getline( cin , line ) ){
        PersonInfo info ;                        // ����һ������˼�¼�Ķ���
        istringstream record( line ) ;           // ����¼���ڸն������
        record >> info.name ;                    // ��ȡ����
        while( record >> word )                 // ��ȡ�绰����
            info.phones.push_back( word ) ;     // ��������
        people.push_back( info ) ;              // ���˼�¼׷�ӵ�peopleĩβ
    }
    return 0;
}
