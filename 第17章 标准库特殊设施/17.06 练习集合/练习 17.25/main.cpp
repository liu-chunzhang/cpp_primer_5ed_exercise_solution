// ������������֤��������ϰ17.25�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <fstream>
#include <iomanip>
#include <regex>
#include <sstream>
#include <tuple>
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
    smatch m ;                                                                           // ��������ƥ���smatch
    if( !in ){
        cerr << "δ�ҵ�����ָ���ļ���" << endl;
        return -1 ;
    }

    while( getline( in , line ) ){                           // ��ȡһ�к��𲽲��Ϊ�����ʣ���Ҳ�ǹ����ַ���
        PersonInfo info ;                                    // ����һ������˳���Ķ���line�Ա�������
        istringstream record( line ) ;                       // ����ÿ�ζ����¶��壬���Բ���clear����record�ˡ�ͬʱ����¼��
        string temp ;
        record >> temp ;
        info.changeName( temp ) ;
        getline( record , line ) ;
        regex_search( line , m , phone ) ;
        info.push_back( m.str() ) ;
        people.push_back( info ) ;
    }

    for( const PersonInfo &entry : people )                                                               // ��people�е�ÿһ��
        cout << left << setw( 10 ) << entry.getname() << setw( 15 ) << entry.getPhone()[0] << endl;
    return EXIT_SUCCESS ;
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
