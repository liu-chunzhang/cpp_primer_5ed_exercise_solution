// 本程序用于验证读者在练习15.39中的想法，并在必要的地方予以说明
#include "AndQuery.h"
#include "NotQuery.h"
#include "OrQuery.h"

int main() {
    Query q = Query( "fiery" ) & Query( "bird" ) | Query( "wind" ) ;
    ifstream in( "data.txt" ) ;
    TextQuery tq( in ) ;
    cout << q.eval( tq ) << endl;
    return 0;
}
