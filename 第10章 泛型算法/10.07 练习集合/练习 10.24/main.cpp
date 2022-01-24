// ������������֤��������ϰ10.24�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>
using namespace std;
using namespace placeholders;

bool check_size( const string &s , string::size_type sz ) ;
int find_int_more_strlen_of_target( const string &s , vector<int> &ivec ) ;

int main() {
    vector<int> ivec = { 0 , 1 , 2 , 4 , 8 , 7 } ;
    string s( "hello" ) ;
    cout << find_int_more_strlen_of_target( s , ivec ) << endl;
    return 0;
}

bool check_size( const string &s , string::size_type sz ){
    return s.size() <= sz ;
}

int find_int_more_strlen_of_target( const string &s , vector<int> &ivec ) {
    vector<int>::iterator iter = find_if( ivec.begin() , ivec.end() , bind( check_size , s , _1 ) ) ;
    return ( ( iter != ivec.end() ) ? *iter : -1 ) ;
}
