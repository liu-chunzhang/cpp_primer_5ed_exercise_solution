// ������������֤��������ϰ6.30�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

bool str_subrange( const string &str1 , const string &str2 ) ;

int main() {
    return 0 ;
}

bool str_subrange( const string &str1 , const string &str2 ) {                   // ��Ϊ�������Ͳ���ȷ�ķ���ֵ��������α����޷�ͨ������
    if( str1.size() == str2.size() )
        return str1 == str2 ;
    size_t size0 = ( str1.size() < str2.size() ) ? str1.size() : str2.size() ;   // size_t���Ϳ������ڷ����������У�����size_typeֻ����������
    for( size_t i = 0 ; i != size0 ; ++i )                                        // �������Ȼ���������ڱ�ʾstrign����Ĵ�С
        if( str1[i] != str2[i] )
            return ;                                                              // û�з���ֵ����������������һ����
}                                         // ������������δ�����κ�ֵ�ͽ����˺�����ִ�С�ʵ���ϣ�������ȷʵû�м����������
