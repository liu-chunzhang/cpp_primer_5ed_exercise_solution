#ifndef DEBUG_H
#define DEBUG_H

#include <iostream>
using namespace std;

class Debug {
    public:
        constexpr Debug( bool b = true ) : hw( b ) , io( b ) , math( b ) , other( b ) { }
        constexpr Debug( bool h , bool i , bool m , bool o ) : hw( h ) , io( i ) , math( m ) , other( o ) { }
        constexpr bool any() const { return hw || io || math || other ; }
        void set_io( bool ) ;
        void set_hw( bool ) ;
        void set_math( bool ) ;
        void set_other( bool ) ;

    private:
        bool hw ;
        bool io ;
        bool math ;                                                                                                  // 增加了math类，也就是所
        bool other ;                                                                                                 // 谓数学类错误。
};

#endif // DEBUG_H
