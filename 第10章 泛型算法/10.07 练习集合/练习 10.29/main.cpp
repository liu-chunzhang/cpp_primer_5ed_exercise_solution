// ������������֤��������ϰ10.29�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
using namespace std;

int main() {
    ifstream in( "data.txt" ) ;
    istream_iterator<string> initer( in ) , eof ;
    vector<string> svec( initer , eof ) ;
    copy( svec.cbegin() , svec.cend() , ostream_iterator<string>( cout , " " ) ) ;
    return 0;
}
