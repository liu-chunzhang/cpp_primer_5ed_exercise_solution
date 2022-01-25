// 本程序用于验证教材中15.9节内容的可靠性，并提供感性认知
#include "AndQuery.h"
#include "OrQuery.h"
#include "NotQuery.h"
#include "WordQuery.h"

int main() {
    Query q = Query( "wind" ) | ( Query( "fiery" ) & Query( "bird" ) )  ;
    ifstream in( "data.txt" ) ;
    TextQuery tq( in ) ;
    cout << q.eval( tq ) << endl;
    return 0;
}
