#include "Basket.h"

// 辅助函数
double print_total( ostream& out , const Quote& q , size_t n ){
    double ret = q.net_price( n ) ;
    out << "ISBN: " << q.isbn() << " # sold: " << n << " total due: " << ret << endl;       // 本段函数定义在P527
    return ret ;
}

// 功能性函数
double Basket::total_receipt( ostream &out ) const {
    double sum = 0.0 ;
    for( multiset<shared_ptr<Quote>,decltype(compare)*>::const_iterator iter = items.cbegin() ; iter != items.cend() ; iter = items.upper_bound( *iter ) )
        sum += print_total( out , **iter , items.count( *iter ) ) ;
    out << "Total Sale: " << sum << endl;
    return sum ;
}

void Basket::add_item( const Quote &q ) {
    items.insert( shared_ptr<Quote>( q.clone() ) ) ;
}

void Basket::add_item( Quote &&q ) noexcept {
    items.insert( shared_ptr<Quote>( std::move( q ).clone() ) ) ;
}

bool Basket::compare( const shared_ptr<Quote>& l , const shared_ptr<Quote>& r ) {
    return l->isbn() < r->isbn() ;
}

double Basket::read( size_t n ) {
    double sum = 0.0 ;
    for( auto iter = items.cbegin() ; iter != items.cend() ; ++iter )
        sum += (*iter)->net_price( n ) ;
    return sum ;
}
