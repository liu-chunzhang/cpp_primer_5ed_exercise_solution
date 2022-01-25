#include "Quote.h"
// ���캯������������
Quote::Quote( const string &book , double sales_price ) : price( sales_price ) , bookNo( book ) { }

// �����Ժ���
string Quote::isbn() const {
    return bookNo ;
}

double Quote::net_price( size_t n ) const {
    cout << "Using function Quote::net_price( size_t n ) const" << endl;
    return n * price ;
}
