// ������������֤��������ϰ14.36�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <fstream>
#include <vector>
#include "PrintString2.h"

int main() {
    vector<string> svec ;
    string str ;
    ifstream in( "data.txt" ) ;
    PrintString2 ps2( in ) ;
    while( in )
        svec.push_back( ps2() ) ;
    for( const string &s : svec )              // �˴���ӡ�����������������ȷ��
        cout << s << endl;
    return 0;
}

// // ��ʹĳ����������ϢΪ�գ��������������vector����Ϊ��ɲ�Ҫ���ܿ�Ԫ�ش���
