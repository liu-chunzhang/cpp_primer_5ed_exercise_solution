// ������������֤��������ϰ15.42�е��뷨�����ڱ�Ҫ�ĵط�����˵��������ϰʵ�ֵ��ǵ������ܣ����ṩ��ѡ������ʾ���
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
