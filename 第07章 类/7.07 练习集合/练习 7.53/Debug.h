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
        bool math ;                                                                                                  // ������math�࣬Ҳ������
        bool other ;                                                                                                 // ν��ѧ�����
};

#endif // DEBUG_H
