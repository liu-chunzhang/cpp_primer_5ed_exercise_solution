// ������������֤��������ϰ15.35�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "AndQuery.h"
#include "NotQuery.h"
#include "OrQuery.h"
#include "WordQuery.h"

string make_plural( size_t n , const string &s1 , const string &s2 ) ;
void runQueries( ifstream &in ) ;

int main() {
    Query q = Query( "fiery" ) & Query( "bird" ) | Query( "wind" ) ;
    ifstream in( "data.txt" ) ;
    TextQuery tq( in ) ;
    cout << endl;
    cout << q << endl;
    return 0;
}

string make_plural( size_t n , const string &s1 , const string &s2 ){
    return ( n == 1 ) ? s1 : s1 + s2 ;
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
