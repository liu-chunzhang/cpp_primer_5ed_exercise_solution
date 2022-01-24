// 本程序用于验证读者在练习11.19中的想法，并在必要的地方予以说明
#include <set>
#include "Sales_data.h"

typedef bool ( *pf )( const Sales_data& , const Sales_data& ) ;

bool compareIsbn( const Sales_data &lhs , const Sales_data &rhs ) ;

int main() {
    multiset<Sales_data,pf> bookstore( compareIsbn ) ;
    multiset<Sales_data,pf>::iterator it = bookstore.begin() ;
    return 0;
}

bool compareIsbn( const Sales_data &lhs , const Sales_data &rhs ) {
    return lhs.isbn() == rhs.isbn() ;
}

// 回顾教材P379，在类类型的multiset结构中，类类型需要提供一个偏序运算符，这时我们可以使用函数指针来提供所需的比较操作类型，而不必使用decltype（并且
// 使用decltype时需要注意加上取指针符*，因为decltype取得的结果是不包含指针的）。
