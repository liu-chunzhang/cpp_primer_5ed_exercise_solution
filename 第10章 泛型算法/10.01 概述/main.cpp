// ������������֤�̲���10.1�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;

int main() {
    int val = 42 ;
    vector<int> ivec = { 12 , 22 , 34 , 45 } ;
    vector<int>::const_iterator result = find( ivec.cbegin() , ivec.cend() , val ) ;       // find���������ڿ��ļ�<algorithm>��˴�auto��
    cout << "The value" << val << ( result == ivec.cend() ? " is not present" : " is present" ) << endl;   // ʵ��������vector<int>::const_iterator

    string val2 = "value" ;
    list<string> slst = { "She sets a high value on autonomy." } ;
    list<string>::const_iterator result2 = find( slst.cbegin() , slst.cend() , val2 ) ;

    int a[] = { 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 , 34 } ;
    cout << ( find( begin( a ) , end( a ) , 6 ) != end( a ) ? "a[]����6" : "a[]��û��6" ) << endl;
    cout << ( find( begin( a ) , end( a ) , 8 ) != end( a ) ? "a[]����8" : "a[]��û��8" ) << endl;
    return 0;
}
