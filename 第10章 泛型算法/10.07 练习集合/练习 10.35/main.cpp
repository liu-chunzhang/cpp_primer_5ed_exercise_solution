// ������������֤��������ϰ10.35�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
using namespace std;

int main() {
    ifstream istm( "data.txt" ) ;
    istream_iterator<string> in( istm ) , eof ;
    vector<string> svec( in , eof ) ;
    ostream_iterator<string> out( cout , " " ) ;
    for( vector<string>::const_iterator csiter = svec.cend() ; csiter != svec.cbegin() ; )
         *out++ = *(--csiter) ;
    return 0;
}
