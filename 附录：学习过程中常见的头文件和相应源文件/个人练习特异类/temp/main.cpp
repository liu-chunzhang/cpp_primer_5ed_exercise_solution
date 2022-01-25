// ������������֤��������ϰ15.35�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "AndQuery.h"
#include "NotQuery.h"
#include "OrQuery.h"
#include "WordQuery.h"
#include "QueryResult.h"

string make_plural( size_t , const string& , const string& ) ;
ostream& print( ostream& , const QueryResult& ) ;
void runQueries( ifstream& ) ;

int main()
{   Query q = Query( "fiery" ) & Query( "bird" ) | Query( "wind" ) ;
    ifstream in( "data.txt" ) ;
    TextQuery tq( in ) ;
    cout << endl;
    cout << q << endl;
    print( cout , q.eval( tq ) ) << endl;
    return 0;
}

string make_plural( size_t n , const string& s1 , const string& s2 ){
  return ( n == 1 ) ? s1 : s1 + s2 ;
}

ostream& print( ostream& out , const QueryResult& qr ) {
    out << qr.sought << " occurs " << qr.lines->size() << " " << make_plural( qr.lines->size() , "time" , "s" ) << endl;
    for( auto num : *qr.lines )
        out << "(line " << num + 1 << ") " << *( qr.file->begin() + num ) << endl;
    return out ;
}

void runQueries( ifstream& in ){
    TextQuery tq( in ) ;
    while( true ){
        cout << "��������Ҫ���ҵ�Ӣ�ĵ��ʣ���Ctrl+C�˳���" ;
        string str ;
        if( !( cin >> str ))
            break;
        print( cout , tq.query( str ) ) << endl;
    }
}
