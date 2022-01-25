#include "Quote.h"

string Quote::isbn() const {
    return bookNo ;
}

double Quote::net_price( size_t n ) const {
    return n * price ;
}

void Quote::debug(){                                                    // 新添加的debug函数定义
    cout << "ISBN: " << bookNo << " # price: " << price << endl;
}
