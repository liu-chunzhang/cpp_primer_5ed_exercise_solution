// 本程序用于验证读者在练习15.42中的想法，并在必要的地方予以说明：本练习实现的是第三功能，即提供可选行数显示结果
#include "AndQuery.h"
#include "OrQuery.h"
#include "NotQuery.h"

int main() {
    ifstream in( "data.txt" ) ;
    TextQuery tq( in ) ;
    Query targetword = Query( "in" ) & Query( "and" ) | Query( "century" ) ;

    limitedPrint( tq.queryresult( "in" ) , 1 , 4 ) ;
    cout << endl;
    limitedPrint( tq.queryresult( "in" ) , 1 , 3 ) ;
    cout << endl;
    limitedPrint( tq.queryresult( "in" ) , 2 , 2 ) ;
    cout << endl;

    limitedPrint( targetword.eval( tq ) , 2 , 2 ) ;
    cout << endl;
    limitedPrint( targetword.eval( tq ) , 1 , 4 ) ;
    cout << endl;
    return 0;
}
