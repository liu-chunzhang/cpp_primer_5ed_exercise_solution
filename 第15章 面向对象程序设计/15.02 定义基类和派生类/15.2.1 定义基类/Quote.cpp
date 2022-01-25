#include "Quote.h"
// ���캯������������
Quote::Quote( const string &book , double sales_price ) : price( sales_price ) , bookNo( book ) { }

// �����Ժ���
inline
string Quote::isbn() const {
    return bookNo ;
}

double Quote::net_price( size_t n ) const {
    return n * price ;
}
