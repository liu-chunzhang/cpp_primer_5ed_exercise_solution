// ������������֤��������ϰ10.42�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
using namespace std;

void elimDups( list<string> &slst ) ;

int main() {
    list<string> slst = { "hello" , "world" , "!" , "hello" , "hiya" } ;
    copy( slst.cbegin() , slst.cend() , ostream_iterator<string>( cout , " " ) ) ; cout << endl;
    elimDups( slst ) ;
    copy( slst.cbegin() , slst.cend() , ostream_iterator<string>( cout , " " ) ) ; cout << endl;
    return 0;
}

void elimDups( list<string> &slst ){
    slst.sort() ;
    slst.unique() ;
}
