// ������������֤��������ϰ9.43�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

void replace( string &s , const string &oldVal , const string &newVal ) ;

int main() {
    string s = "I got thru the tunnel tho there are all difficulties." ;
    replace( s , "tho" , "though" ) ;
    replace( s , "thru" , "through" ) ;
    cout << s << endl;
    return 0;
}
                                                                                                  // ������д�İ汾
void replace( string &s , const string &oldVal , const string &newVal ){
    if( oldVal.empty() )                                                                         // �����Ҫ�滻�Ĵ��ǿյģ�����Ҫ���κ���
        return ;
    for( string::iterator siter = s.begin() ; siter != s.end() ; ++siter )                     // ���ַ����ĵ�һ��Ԫ�ؿ�ʼ��飬�յ���β��
        if( *siter == *oldVal.cbegin() ){                                                        // �����������ܼ���oldVal.size��ԭ������
            string::iterator siter2 = siter ;                                                   // iter2������¼������ͬ����ĸ��λ��
            for( string::const_iterator oldsiter = oldVal.cbegin() ; ; ++oldsiter, ++siter )   // �������ĸ��oldVal��ͬ�µ����
                if( *siter != *oldsiter )
                    break;                                                                       // �м���һ����ĸ������ֱ���ų�
                else if( oldsiter == oldVal.cend() - 1 ){                                       // ����ܹ������˵����oldVal���ظ�����ȥ
                    siter = s.erase( siter2 , ++siter ) ;                                        // ����siter2��++siter�����ݣ�����oldVal��
                    siter = s.insert( siter , newVal.cbegin() , newVal.cend() ) ;               // ע���ж�������β���������һ�������ڷ���
                    break ;                                                                      // �ĵ�����λ���Ͻ�����伴��
                }
        }
}
