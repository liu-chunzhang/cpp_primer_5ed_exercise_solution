// ������������֤��������ϰ8.11�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "PersonInfo.h"

int main() {
    string line , word ;
    vector<PersonInfo> people ;
    istringstream record ;                          // ����ڽ̲�8.3.1�ڵĳ��򣬵�һ���䶯�ǽ������ƶ�λ�ã����Ҳ��ٳ�ʼ��

    while( getline( cin , line ) ){
        PersonInfo info ;
        record.clear() ;                           // �ڶ����䶯���ظ�ʹ���ַ�����ʱ��ÿ�ζ�Ҫ����clear��������״̬��ÿ�����´����򲻱�����״̬��
        record.str( line ) ;                       // �������䶯�ǽ���¼���ڸն������
        record >> info.name ;
        while( record >> word )
            info.phones.push_back( word ) ;
        people.push_back( info ) ;
    }
    return 0;
}
