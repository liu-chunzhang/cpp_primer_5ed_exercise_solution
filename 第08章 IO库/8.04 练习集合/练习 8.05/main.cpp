// ������������֤��������ϰ8.5�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <iterator>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    ifstream in( "data.txt" ) ;
    if( !in ){
        cerr << "�޷��������ļ���" << endl;
        return -1 ;
    }
    string str ;
    vector<string> svec ;
    while( in >> str )
        svec.push_back( str ) ;
    in.close() ;

    copy( svec.cbegin() , svec.cend() , ostream_iterator<string>( cout , " " ) ) ;
    return 0;
}



