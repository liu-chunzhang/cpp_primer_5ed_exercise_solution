// ������������֤��������ϰ11.23�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <map>
using namespace std;

void add_child( multimap<string,string> &families , const string &family , const string &child ) ;

int main() {
    multimap<string,string> families ;
    add_child( families , "��" , "��" ) ;
    add_child( families , "��" , "ͳ" ) ;
    add_child( families , "Ǯ" , "�巽" ) ;
    for( const pair<string,string> &f : families )
        cout << f.first << "�ҵĺ����У�" << f.second << endl;
    return 0;
}

void add_child( multimap<string,string> &families , const string &family , const string &child ){
    families.insert( { family , child } ) ;
}

// ���ﲻ��Ҫ��ʹ��<vector>�ˣ�ԭ������ʹ��multimap�ṹʹ�ó��������ɵ����巢���˸����Ա仯�����粻����Ҫ���Ӽ���ĺ���add_family����Ϊ�����йؼ�
// �ֵĸ������󣨿��ԶԱ���ϰ11.7�������⣬����ͬһ�յĺ��ӣ����ǲ��ٱ�Ȼ����ͬһ�������ˡ�
