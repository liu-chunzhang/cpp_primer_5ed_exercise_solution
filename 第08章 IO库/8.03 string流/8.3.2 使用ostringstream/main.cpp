// ������������֤�̲���8.3.2�����ݵĿɿ��ԣ����ṩ������֪
#include "PersonInfo.h"

string format( const string &s ) ;
bool valid( const string &s ) ;

int main() {
    vector<PersonInfo> people ;
    for( const PersonInfo &entry : people ){
        ostringstream formatted , badNums ;                             // ÿ��ѭ���������Ķ���
        for( const string &nums : entry.phones ){                      // ��ÿ����
            if( !valid( nums ) )
                badNums << " " << nums ;                                // �������ַ�����ʽ����badNums
            else
                formatted << " " << format( nums ) ;                    // ����ʽ�����ַ�����д�롱formatted
        }
        if( badNums.str().empty() )
            cout << entry.name << " " << formatted.str() << endl;                           // û�д������
        else
            cerr << "�������" << entry.name << "��Ч���룺" << badNums.str() << endl;    // ���򣬴�ӡ���ֺʹ������
    }
    return 0;
}

string format( const string &s ) {
    return s ;
}

bool valid( const string &s ) {
    return true ;
}
