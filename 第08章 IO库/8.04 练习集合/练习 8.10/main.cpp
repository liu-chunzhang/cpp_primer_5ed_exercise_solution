// ������������֤��������ϰ8.10�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    vector<string> vstr ;
    ifstream istr( "data.txt" ) ;               // ���ļ�
    string str ;

    if( !istr ) {
        cerr << "�޷��������ļ���" << endl;
        return -1 ;
    }

    while( getline( istr , str ) ) {             // ���ļ��ж�ȡһ��
        vstr.push_back( str ) ;                 // ��ӵ�vector��
    }
    istr.close() ;                               // ������ϣ��ر��ļ�

    for( const string &line : vstr ){          // �˴�ʹ�÷�Χfor������ѭ��
        istringstream istr2( line ) ;            // ����˴�ʹ�ô�����ȡ��istream�����޷������Ч��Ϣ����Ϊi��string���ͣ�Ӧ����istring
        while( istr2 >> str )                   // stream���Ͷ�ȡ
            cout << str << " " ;
        cout << endl;
    }
    return 0;
}
