// ������������֤��������ϰ16.22�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "TextQuery.h"

void runQueries( ifstream &infile ) ;

int main() {
    ifstream in( "data.txt" ) ;
    runQueries( in ) ;
    return 0;
}

void runQueries( ifstream &infile ){
    TextQuery tq( infile ) ;
    while( true ){
        cout << "��������Ҫ���ҵ�Ӣ�ĵ��ʣ���Ctrl+C�˳���" ;
        string s ;
        if( !( cin >> s ) )
            break;
        cout << tq.queryresult( s ) << endl;
    }
}
