// 本程序用于验证教材中18.2.1节内容的可靠性，并提供感性认知
#include "Sales_data.h"

int main() {
    using cpp_primer::Sales_data ;
    Sales_data trans1( "978-7-121-15535-2" , 5 , 128.00 ) , trans2( "978-7-121-15535-2" , 5 , 128.00 ) , sum ;
    sum = trans1 + trans2 ;
    cout << sum ;
    return 0;
}
/*
namespace cpp_primer {
    class Sales_data ;
    Sales_data operator + ( const Sales_data& , const Sales_data& ) ;
    class Query ;
    class Query_base ;
}
*/


