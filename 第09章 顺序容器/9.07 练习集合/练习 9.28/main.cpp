// ������������֤��������ϰ9.28�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <forward_list>
using namespace std;

void insert_afterAString( forward_list<string> &sflst , const string &s1 , const string &s2  ) ;

int main() {
    forward_list<string> sflst = { "Welcome" , "to" , "C++" , "family" } ;                          // ��һ�δ�ӡ��Ϊ�˺�֮���������Ƚ�
    for( const string &str : sflst )
        cout << str << " " ;
    cout << endl;
    insert_afterAString( sflst , "C++" ,"!" ) ;                                                       // �ڶ��δ�ӡ�������������ַ���ʱЧ��
    for( const string &str : sflst )
        cout << str << " " ;
    cout << endl ;
    insert_afterAString( sflst , "hello" ,"?" ) ;                                                     // �����δ�ӡ����û�������ַ���ʱЧ��
    for( const string &str : sflst )
        cout << str << " " ;
}

void insert_afterAString( forward_list<string>& sflst , const string& s1 , const string& s2 ){
    forward_list<string>::const_iterator sflstpre = sflst.before_begin() , sflstcurr = sflst.cbegin() ;
    while( sflstcurr != sflst.cend() )
        if( *sflstcurr == s1 ){
            sflst.insert_after( sflstcurr , s2 ) ;                                                    // �ҵ�ƥ��Ĵ�����currָ����
            return ;
        }
        else
            sflstpre = sflstcurr++ ;                                                                 // δ�ҵ�ָ���ַ��������β��
    sflst.insert_after( sflstpre , s2 ) ;
}

// �����ʹ�ú���find���ص���������ô���Ҳ���s1ʱ��find���ص��Ѿ���β��������ˣ���foeward_list�ĵ�����Ҳû�еݼ��������ò���ָ��forward_list
// �����Ԫ�����ڵĵ���������û�취������������ˣ����Ծ��ܿ�����ʹ�÷����㷨�ƺ�����࣬���������޷����ǵ���Щ�����ֻ������
