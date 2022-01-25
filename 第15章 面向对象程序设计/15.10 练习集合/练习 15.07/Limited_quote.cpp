#include "Limited_quote.h"
// 构造函数与析构函数
Limited_quote::Limited_quote( const string &book , double price , size_t cnt , double disc ) : Quote( book , price ) , max_pty( cnt ) , discount( disc ) { }

// 功能性函数
double Limited_quote::net_price( size_t cnt ) const {
    return cnt > max_pty ? max_pty * price * ( 1 - discount ) + ( cnt - max_pty ) * price : cnt * price * ( 1 - discount ) ;
}
