// ������������֤�̲���14.8.1�����ݵĿɿ��ԣ����ṩ������֪
#include <algorithm>
#include <vector>
#include "ShorterString.h"
#include "SizeComp.h"

int main() {
    vector<string> svec = { "welcome" , "to" , "c++" , "family" } ;
    stable_sort( svec.begin() , svec.end() , []( const string &a , const string &b ){ return a.size() < b.size() ; } ) ;
    for( const string &s : svec )
        cout << s << " " ;
    cout << endl;
    vector<string> svec2 = { "welcome" , "to" , "c++" , "family" } ;
    stable_sort( svec2.begin() , svec2.end() , ShorterString() ) ;
    for( const string &s : svec2 )
        cout << s << " " ;
    cout << endl;

    size_t sz = 3 ;
    vector<string>::iterator wc = find_if( svec.begin() , svec.end() , [sz]( const string &a ){ return a.size() >= sz ; } ) ;
    cout << *wc << endl;
    sz = 5 ;
    vector<string>::iterator wc2 = find_if( svec2.begin() , svec2.end() , SizeComp( sz ) ) ;       // ��õ�һ����������Ԫ�صĵ�����
    cout << *wc2 << endl;
    return 0;
}
