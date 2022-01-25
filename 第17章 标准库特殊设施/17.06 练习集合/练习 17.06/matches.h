#ifndef MATCHES_H
#define MATCHES_H

#include <vector>
#include "Sales_data.h"

class matches{
    public:
        using size_type = vector<Sales_data>::size_type ;
        using const_iterator = vector<Sales_data>::const_iterator ;

    public:
        matches( size_type n , const_iterator l , const_iterator r ) : cnt( n ) , first( l ) , second( r ) { }
        matches( size_type n , pair<const_iterator,const_iterator> h ) : cnt( n ) , first( h.first ) , second( h.second ) { }
        ~matches() = default ;

    public:
        size_type get_number() const ;
        const_iterator get_first_iter() const ;
        const_iterator get_second_iter() const ;

    private:
        size_type cnt ;
        const_iterator first ;
        const_iterator second ;
};

#endif // MATCHES_H
