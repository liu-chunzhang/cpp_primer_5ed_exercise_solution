// ������������֤��������ϰ9.44�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

void replace( string &s , const string &oldVal , const string &newVal ) ;

int main() {
    string s = "I got thru the tunnel tho there are all difficulties." ;          // ͬ��ϰ9.43����ȥ����s����oldVal��ͬ���Ӵ������ǲ��ܹ�������
    replace( s , "tho" , "though" ) ;                                             // �������۴ӱ��Ч�ʻ���Ŀ�����Ч�ʿ��ǣ����������Ǻ�������
    replace( s , "thru" , "through" ) ;                                           // �ġ�������ȷ��Ŀ�������Ч���ϵ����⣬����Ӧ����ʹ�ñ�׼��
    cout << s << endl;                                                            // ������д���⻯���򣬶����Ǵ�ͷ�����ӡ�
    return 0;
}

void replace( string &s , const string &oldVal , const string &newVal ){
    for( string::size_type p = s.find( oldVal , 0 ) ; p != string::npos ; p = s.find( oldVal , p ) )
        s.replace( p , oldVal.size() , newVal ) , p += newVal.size() ;
}
