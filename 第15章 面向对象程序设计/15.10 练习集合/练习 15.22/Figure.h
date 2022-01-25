#ifndef FIGURE_H
#define FIGURE_H

#include <cmath>
#include <iostream>
using namespace std;

typedef double coordinate[ 3 ] ;
const double pi = 3.1415926535 ;

class Figure{
    public:
        Figure( double , double , double );
        Figure( const Figure &figure ) ;
        Figure &operator = ( const Figure &figure ) ;
        virtual ~Figure() = default ;

    protected:
        coordinate center = { 0.0 , 0.0 , 0.0 } ;

    private:
        string name ;
};

class Figure_2D : public Figure {
    public:
        Figure_2D( double d1 , double d2 ) ;
        Figure_2D( const Figure_2D &figure_2d ) ;
        Figure_2D &operator = ( const Figure_2D &figure_2d ) ;
        virtual ~Figure_2D() override = default ;

    public:
        virtual double parameter() = 0 ;
        virtual double area() = 0 ;
};

class square: public Figure_2D {
    public:
        square( double d1 , double d2 , double edgelength ) ;

    public:
        virtual double parameter() override ;
        virtual double area() override ;

    private:
        string realname ;
        double edgeLength = 0.0 ;
};

class circle : public Figure_2D {
    public:
        circle( double d1 , double d2 , double rad ) ;

    public:
        double parameter() override ;
        double area() override ;

    private:
        string name ;
        double radius = 0.0 ;
};

class Figure_3D : public Figure {
    public:
        Figure_3D( double d1 , double d2 , double d3 ) ;
        Figure_3D( const Figure_3D &figure_3d ) ;
        Figure_3D &operator = ( const Figure_3D &figure_3d ) ;
        ~Figure_3D() = default ;

    public:
        virtual double parameter() = 0 ;
        virtual double volume() = 0 ;
};

class sphere : public Figure_3D {
    public:
        sphere( double d1 , double d2 , double d3 , double rad ) ;

    public:
        double parameter() override ;
        double volume() override ;

    private:
        string name ;
        double radius = 0.0 ;
};

#endif // FIGURE_H
