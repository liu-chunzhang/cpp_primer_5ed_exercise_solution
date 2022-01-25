#ifndef GARBAGE_H
#define GARBAGE_H

class Class { };

class Base : public Class {
    public:
        Base() ;
        Base( int i ) ;
        Base( const Base &b ) = default ;

    public:
        virtual int getival() const ;

    protected:
        int ival ;
};

class D1 : virtual public Base {
    public:
        D1() ;
        D1( int i , int j ) ;
        D1( const D1 &d ) = default ;

    public:
        int getiival() const ;

    protected:
        int iival = 0 ;
};

class D2 : virtual public Base {
    public:
        D2() ;
        D2( int i ) ;
        D2( const D2 &d ) = default ;
};

class MI : public D1 , public D2 {
    public:
        MI() ;
        MI( int i ) ;
        MI( const MI &m ) = default ;
};

class Final : public MI , public Class {
    public:
        Final() ;
        Final( int i ) ;
        Final( const Final &f ) = default ;
};

#endif // GARBAGE_H
