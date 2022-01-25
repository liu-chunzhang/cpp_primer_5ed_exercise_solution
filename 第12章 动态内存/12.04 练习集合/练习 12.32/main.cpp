// 本程序用于验证读者在练习12.32中的想法，并在必要的地方予以说明
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
        cout << "请输入您要查找的英文单词，或按Ctrl+C退出：" ;
        string str ;
        if( !( cin >> str ) )
            break;
        cout << tq.queryresult( str ) << endl;
    }
}
