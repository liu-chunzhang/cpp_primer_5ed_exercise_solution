// ������������֤��������ϰ12.32�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "TextQuery.h"
using namespace std;

void runQueries( ifstream &in ) ;

int main() {
    ifstream in( "data.txt" ) ;
    runQueries( in ) ;
    return 0;
}

void runQueries( ifstream &in ){
    TextQuery tq( in ) ;
    while( true ){
        cout << "��������Ҫ���ҵ�Ӣ�ĵ��ʣ���Ctrl+C�˳���" ;
        string str ;
        if( !( cin >> str ) )
            break;
        cout << tq.queryresult( str ) << endl;
    }
}
