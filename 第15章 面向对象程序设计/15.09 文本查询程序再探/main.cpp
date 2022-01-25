// ������������֤�̲���15.9�����ݵĿɿ��ԣ����ṩ������֪
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
