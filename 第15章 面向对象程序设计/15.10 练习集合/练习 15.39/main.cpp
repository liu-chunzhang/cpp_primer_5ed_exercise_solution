// ������������֤��������ϰ15.39�е��뷨�����ڱ�Ҫ�ĵط�����˵��
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
