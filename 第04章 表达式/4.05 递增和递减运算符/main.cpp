// ������������֤�̲���4.5�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <vector>
using namespace std;

int main() {
    /*
    int i = 0 , j ;
    j = ++i ;
    cout << j << " = ++" << i << endl;
    i = 0 ;
    j = 0 ;
    j = i++ ;
    cout << j << " = " << i << "++" << endl;
    */

    vector<int> v{ 0 , 2 , -4 , 6, -8 , 10 } ;
    auto pbeg = v.begin() ;
    while(pbeg != v.end() && *pbeg >= 0)
        cout << *pbeg++ << endl;

    string s{ "hello world!" } ;
    string::iterator beg = s.begin() ;
    while( beg != s.end() && ! isspace( *beg ) ){
        cout << *beg ;
        *beg = toupper( *beg++ ) ;                  // ���󣺸ø�ֵ���δ���壡�ƺ����ͻ᲻��ִ��*beg++һ����ʵ��Ӧ������ִ���˿���������Ȼ��
    }                                               // ִ������������Ȼ��ִ�н�����������ȥ�������൱�ڴӵڶ�����ĸ��ʼ������һ����ĸ�Ĵ�д��
    return 0;                                      // ��������֮���ÿһ������char�����Ҳ��ᱨ���뾯�棡
}
