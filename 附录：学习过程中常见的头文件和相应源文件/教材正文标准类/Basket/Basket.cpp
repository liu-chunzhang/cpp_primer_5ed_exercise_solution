#include "Basket.h"

// 辅助函数
double print_total( ostream &out , const Quote &q , size_t n ){
    double ret = q.net_price( n ) ;
    out << "ISBN: " << q.isbn() << " # sold: " << n << " total due: " << ret << endl;       // 本段函数定义在P527
    return ret ;
}

void Basket::add_item( const shared_ptr<Quote> &q ) {
    items.insert( q ) ;
}

double Basket::total_receipt( ostream &out ) const {
    double sum = 0.0 ;                                                      // 保存实时计算出的总价格
    for( multiset<shared_ptr<Quote>,decltype(compare)*>::const_iterator iter = items.cbegin() ; iter != items.cend() ; iter = items.upper_bound( *iter ) )
        sum += print_total( out , **iter , items.count( *iter ) ) ;         // upper_bound在P390已经使用过了；count在附录A里，用来判断出现次数，也出现在练习10.1（P337）
    out << "Total Sale: " << sum << endl;
    return sum ;
}

bool Basket::compare( const shared_ptr<Quote> &lhs , const shared_ptr<Quote> &rhs ) {
    return lhs->isbn() < rhs->isbn() ;
}

void Basket::add_item( const Quote &q ) {
    items.insert( shared_ptr<Quote>( q.clone() ) ) ;
}

void Basket::add_item( Quote &&q ) {
    items.insert( shared_ptr<Quote>( std::move( q ).clone() ) ) ;
}
