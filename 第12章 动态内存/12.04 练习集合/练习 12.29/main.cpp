// 本程序用于验证读者在练习12.29中的想法，并在必要的地方予以说明
#include "TextQuery.h"

void runQueries( ifstream &infile ) ;

int main() {
    ifstream in( "data.txt" ) ;
    runQueries( in ) ;

    return 0;
}

string& trans( string& s ){
    for( char &c : s )
        c = tolower( c ) ;
    for( size_t u = 0 ; u < s.size() ; ++u )
        if( ispunct( s[u] ) )
            s.erase( u , 1 ) ;
    return s ;
}

void runQueries( ifstream &infile ) {
    TextQuery tq( infile ) ;
    do{                                                            // 其实在效果上没什么不同，因为循环条件形同虚设
        cout << "请输入您要查找的英文单词，或按Ctrl+C退出：" ;
        string target ;
        if( !( cin >> target ) )
            break;
        cout << tq.queryresult( target ) ;
    }while( true ) ;
}
