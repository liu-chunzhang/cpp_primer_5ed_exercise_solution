#include "Quote.h"

string Quote::isbn() const {
    return bookNo ;
}

double Quote::net_price( size_t n ) const {
    return n * price ;
}

void Quote::debug(){                                                    // ����ӵ�debug��������
    cout << "ISBN: " << bookNo << " # price: " << price << endl;
}
