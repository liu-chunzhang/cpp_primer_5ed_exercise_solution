// ������������֤��������ϰ6.25�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

int main( int argc , char **argv ) {
    string str ;
    for( int i = 1 ; i != argc ; ++i )
        str += argv[i] ;
    cout << str << endl;
    system( "pause" ) ;
    return 0;
}
