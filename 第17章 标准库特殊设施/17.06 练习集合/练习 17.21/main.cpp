// ������������֤��������ϰ17.21�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <fstream>
#include <regex>
#include <sstream>
#include <tuple>
#include <vector>
#include "PersonInfo.h"

bool valid( const smatch &s ) ;
bool bracevalid( const smatch &s ) ;
bool prefixvalid( const smatch &s ) ;
bool suffixvalid( const smatch &s ) ;

int main() {
    vector<PersonInfo> people ;                                                          // ����������ȡ�����м�¼
    string line ;
    ifstream in( "data.txt" ) ;                                                          // �ļ��������
    regex phone( "(\\()?([+])?(\\d{2})?(\\))?(\\d{3})([ ])?(\\d{4})([ ])?(\\d{4})" ) ;   // ϣ��һ��ĸ�ʽΪ(+86)159 XXXX XXXX����㲻��

    while( getline( in , line ) ){                           // ��ȡһ�к��𲽲��Ϊ�����ʣ���Ҳ�ǹ����ַ���
        PersonInfo info ;                                    // ����һ������˳���Ķ���line�Ա�������
        istringstream record( line ) ;                       // ����ÿ�ζ����¶��壬���Բ���clear����record�ˡ�ͬʱ����¼��
        string temp ;
        record >> temp ;
        info.changeName( temp ) ;
        getline( record , line ) ;
        for( sregex_iterator it( line.begin() , line.end() , phone ) , end_it ; it != end_it ; ++it )
            if( valid( *it ) )
                info.push_back( "V" + it->str() ) ;
            else
                info.push_back( "I" + it->str() ) ;
        people.push_back( info ) ;
    }

    for( const PersonInfo &entry : people ){                        // ��people�е�ÿһ��
        ostringstream formatted , badNums ;                          // ÿ��ѭ�������������ַ��������
        for( const string &nums : entry.getPhone() )             // ����ÿ���������ɸѡ�ж�
            if( nums[ 0 ] == 'I' )
                badNums << " " << nums.substr( 1 ) << endl;
            else
                formatted << " " << nums.substr( 1 ) << endl;
        if( badNums.str().empty() )                                         // ���޲��Ϸ����룬���ӡ���ֺͺ���
            cout << entry.getname() << " " << formatted.str() << endl;
        else                                                                // �����ӡ���ּ��������
            cerr << "�������" << entry.getname() << "��Ч���룺" << badNums.str() << endl;
    }
    return 0;
}

bool valid( const smatch &s ) {
    return prefixvalid( s ) && bracevalid( s ) && suffixvalid( s ) ;
}

bool bracevalid( const smatch &s ) {
    return !( s[1].matched ^ s[4].matched ) ;
}

bool prefixvalid( const smatch &s ) {
    return !( s[2].matched ^ s[3].matched ) ;
}

bool suffixvalid( const smatch &s ) {
    return !( s[7].matched ^ s[9].matched ) ;
}
