// 本程序用于验证读者在练习15.35中的想法，并在必要的地方予以说明
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
        cout << "请输入您要查找的英文单词，或按Ctrl+C退出：" ;
        string str ;
        if( !( cin >> str ))
            break;
        print( cout , tq.query( str ) ) << endl;
    }
}
