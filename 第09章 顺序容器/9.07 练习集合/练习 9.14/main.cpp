// ������������֤��������ϰ9.14�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
    list<char*> slst = { "hello" , "world" , "!" } ;
    vector<string> svec ;
    svec.assign( slst.cbegin() , slst.cend() ) ;
    for( const string& s : svec )
        cout << s << " " ;
    cout << endl;
    return 0;
}

// ����list<char*>��vector<string>�ǲ�ͬ���͵�����������޷����ø�ֵ�����=������Ԫ�ظ�ֵ������char*����ת��Ϊstring����˿��Բ��÷�Χ��ֵ��ʽ
// ʵ�ֱ���Ҫ��
