// ������������֤��������ϰ10.30�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main() {
    istream_iterator<int> initer( cin ) , eof ;
    vector<int> ivec( initer , eof ) ;
    sort( ivec.begin() , ivec.end() ) ;
    copy( ivec.cbegin() , ivec.cend() , ostream_iterator<int>( cout , " " ) ) ;
    return 0;
}
