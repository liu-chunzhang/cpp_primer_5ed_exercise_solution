// ������������֤��������ϰ12.27�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "TextQuery.h"
#include "QueryResult.h"
using namespace std;

void runQueries( ifstream& ) ;

int main() {
    ifstream in( "data.txt" ) ;
    runQueries( in ) ;
    return 0;
}

void runQueries( ifstream& infile ){
    TextQuery tq( infile ) ;
    while( true ){
        cout << "��������Ҫ���ҵ�Ӣ�ĵ��ʣ���Ctrl+C�˳���" ;
        string s ;
        if( !( cin >> s ) )
            break;
        cout << tq.queryresult( s ) << endl;
    }
}
