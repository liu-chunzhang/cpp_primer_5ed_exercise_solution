// 本程序用于验证读者在练习13.42中的想法，并在必要的地方予以说明
#include "TextQuery.h"

void runQueries( ifstream &inflie ) ;

int main() {
    ifstream in( "data.txt" ) ;
    runQueries( in ) ;
    return 0;
}

void runQueries( ifstream &infile ){
    TextQuery tq( infile ) ;
    while( true ){
        cout << "请输入您要查找的英文单词，或按Ctrl+C退出：" ;
        string s ;
        if( !( cin >> s ) )
            break;
        cout << tq.queryresult( s ) << endl;
    }
}
