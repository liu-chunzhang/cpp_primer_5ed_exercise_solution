// 本程序用于验证教材中12.3.2节内容的可靠性，并提供感性认知
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
        cout << "请输入您要查找的英文单词，或按Ctrl+C退出：" ;
        string s ;
        if( !( cin >> s ) )
            break;
        cout << tq.queryresult( s ) << endl;
    }
}
