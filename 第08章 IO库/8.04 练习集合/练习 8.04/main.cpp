// ������������֤��������ϰ8.4�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <iterator>
#include <fstream>
#include <vector>
using namespace std;

static vector<string> svec ;

int main() {
    ifstream in( "data.txt" ) ;                                                       // һ��Ҫ��֤ȷʵ��ͬ���ļ���ͬһ���ļ�����������
    if( !in ){                                                                        // ֻ�����ȥִ��if��䣡
        cerr << "�޷��������ļ���" << endl;
        return -1 ;
    }
    string str ;
    while( getline( in , str ) )
        svec.push_back( str ) ;
    in.close() ;

    copy( svec.cbegin() , svec.cend() , ostream_iterator<string>( cout , "\n" ) ) ; // �����Ǽ��������ȷ�Ե����
    return 0;
}
