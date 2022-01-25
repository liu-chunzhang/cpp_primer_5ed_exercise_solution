// ������������֤��������ϰ15.28�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <fstream>
#include <memory>
#include <vector>
#include "Bulk_quote.h"

int main() {
    vector<shared_ptr<Quote>> pQvec ;
    ifstream in( "data.txt" ) ;
    Bulk_quote bq ;
    double sum = 0 ;
    while( in >> bq )
        pQvec.push_back( make_shared<Bulk_quote>( bq ) ) ;
    for( const shared_ptr<Quote> &t : pQvec )
        sum += t->net_price( 1 ) ;
    cout << sum << endl;                                        // ��ӡ�����257.16����֮ǰ��ͬ����Ϊ��������Ҳ�ù�������С��3
    sum = 0 ;
    for( const shared_ptr<Quote> &t : pQvec )
        sum += t->net_price( 4 ) ;
    cout << sum << endl;                                        // ��ӡ�����937.578����֮ǰ��ͬ��ԭ���ǹ�����4>3���ɲο�txt�ļ��������
    return 0;
}

// ��������Ľ����������죬��Ϊ��ͨ��Quote��Ķ�������麯��net_priceʱ�����ڶ�̬�󶨣�����Quote���ж���İ汾����ͨ��Quote����ָ������麯��
// net_price���е��Ƕ�̬�󶨣�����ָ��ʵ��ָ��Bulk_quoteʱ�����Bulk_quote���еİ汾��
