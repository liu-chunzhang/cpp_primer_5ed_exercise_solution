// ������������֤��������ϰ19.18�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>
using namespace std;
using std::placeholders::_1 ;

int main() {
    vector<string> svec = { "hello" , "welcome" , "" , "" , "to" , "C++" , "" , "family" } ;
    cout << count_if( svec.cbegin() , svec.cend() , bind( &string::empty , _1 ) ) << endl;
    return 0;
}
