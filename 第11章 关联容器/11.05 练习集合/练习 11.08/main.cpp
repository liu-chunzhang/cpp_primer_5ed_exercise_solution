// ������������֤��������ϰ11.8�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{   ifstream in( "data.txt" ) ;
    istream_iterator<string> iter0( in ) , eof ;
    vector<string> svec( iter0 , eof ) ;
    sort( svec.begin() , svec.end() ) ;                                         // ����һ������Ϊ��ʹ��unique�㷨����һ�����Ƿ������ظ�
    vector<string>::iterator iter = unique( svec.begin() , svec.end() ) ;
    svec.erase( iter , svec.end() ) ;
    for( const string& str : svec )
        cout << str << " " ;
    return 0;
}
