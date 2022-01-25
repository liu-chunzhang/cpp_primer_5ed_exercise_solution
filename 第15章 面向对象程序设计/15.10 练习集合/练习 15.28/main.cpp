// ������������֤��������ϰ15.28�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <fstream>
#include <vector>
#include "Bulk_quote.h"

int main() {
    vector<Quote> Qvec ;
    ifstream in( "data.txt" ) ;
    Bulk_quote bq ;
    while( in >> bq )
        Qvec.push_back( bq ) ;
    double sum = 0 ;
    for( const Quote &t : Qvec )
        sum += t.net_price( 1 ) ;
    cout << sum << endl;                           // ��ӡ�����257.16
    sum = 0 ;
    for( const Quote &t : Qvec )
        sum += t.net_price( 4 ) ;
    cout << sum << endl;                           // ��ӡ�����1028.64
    return 0;
}
