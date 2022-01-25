// 本程序用于验证读者在练习15.35中的想法，并在必要的地方予以说明
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
        cout << "请输入您要查找的英文单词，或按Ctrl+C退出：" ;
        string str ;
        if( !( cin >> str ) )
            break;
        cout << tq.queryresult( str ) << endl;
    }
}
