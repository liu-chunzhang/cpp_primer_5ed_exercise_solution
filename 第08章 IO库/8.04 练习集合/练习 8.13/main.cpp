// ������������֤��������ϰ8.13�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <fstream>                                            // ��Ȼѡ��������ļ����ȡ���ݣ���ô������ļ��Ǳز����ٵ�
#include <sstream>
#include "PersonInfo.h"

string format( const string &s ) ;
bool valid( const string &s ) ;

int main() {
    vector<PersonInfo> people ;
    string line , word ;
    ifstream in( "data.txt" ) ;

    while( getline( in , line ) ){
        PersonInfo info ;                                    // ����һ������˳���Ķ���line�Ա�������
        istringstream record( line ) ;                       // ����ÿ�ζ����¶��壬���Բ���clear����record�ˡ�ͬʱ����¼��
        record >> info.name ;
        while( record >> word )
            info.phones.push_back( word ) ;
        people.push_back( info ) ;
    }

    for( const PersonInfo &entry : people ){                // ��һ���ֻ���������8.3.2�ڣ�ֻ����ȷ��auto�ؼ�����ָ������
        ostringstream formatted , badNums ;
        for( const string &nums : entry.phones ){
            if( !valid( nums ) )
                badNums << " " << nums ;
            else
                formatted << " " << format( nums ) ;
        }
        if( badNums.str().empty() )
            cout << entry.name << " " << formatted.str() << endl;
        else
            cerr << "�������" << entry.name << "��Ч���룺" << badNums.str() << endl;
    }
    return 0;
}

string format( const string &s ) {
    return s ;
}

bool valid( const string &s ) {
    return true ;
}
