// 本程序用于验证教材中10.1节内容的可靠性，并提供感性认知
#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;

int main() {
    int val = 42 ;
    vector<int> ivec = { 12 , 22 , 34 , 45 } ;
    vector<int>::const_iterator result = find( ivec.cbegin() , ivec.cend() , val ) ;       // find函数定义在库文件<algorithm>里；此处auto的
    cout << "The value" << val << ( result == ivec.cend() ? " is not present" : " is present" ) << endl;   // 实际类型是vector<int>::const_iterator

    string val2 = "value" ;
    list<string> slst = { "She sets a high value on autonomy." } ;
    list<string>::const_iterator result2 = find( slst.cbegin() , slst.cend() , val2 ) ;

    int a[] = { 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 , 34 } ;
    cout << ( find( begin( a ) , end( a ) , 6 ) != end( a ) ? "a[]中有6" : "a[]中没有6" ) << endl;
    cout << ( find( begin( a ) , end( a ) , 8 ) != end( a ) ? "a[]中有8" : "a[]中没有8" ) << endl;
    return 0;
}
