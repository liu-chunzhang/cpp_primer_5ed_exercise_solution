#include "Figure.h"

// FigureÀà
Figure::Figure( double d1 , double d2 , double d3 ) {
    center[ 0 ] = d1 ;
    center[ 1 ] = d2 ;
    center[ 2 ] = d3 ;
}

Figure::Figure( const Figure &figure ) {
    center[ 0 ] = figure.center[ 0 ] ;
    center[ 1 ] = figure.center[ 1 ] ;
    center[ 2 ] = figure.center[ 2 ] ;
}

Figure &Figure::operator = ( const Figure &figure ) {
    center[ 0 ] = figure.center[ 0 ] ;
    center[ 1 ] = figure.center[ 1 ] ;
    center[ 2 ] = figure.center[ 2 ] ;
    return *this ;
}

// Figure_2DÀà
Figure_2D::Figure_2D( double d1 , double d2 ) : Figure( d1 , d2 , 0.0 ) { }

Figure_2D::Figure_2D( const Figure_2D &figure_2d ) : Figure( figure_2d.center[0] , figure_2d.center[1] , figure_2d.center[2] ) { }

Figure_2D &Figure_2D::operator = ( const Figure_2D &figure_2d ) {
    center[0] = figure_2d.center[0] ;
    center[1] = figure_2d.center[1] ;
    center[2] = figure_2d.center[2] ;
    return *this ;
}

square::square( double d1 , double d2 , double edgelength ) : Figure_2D( d1 , d2 ) {
    if( edgelength < 0 )
        throw invalid_argument( "EdgeLength of any square must excel 0!" ) ;
    edgeLength = edgelength ;
}

double square::parameter() {
    return edgeLength ;
}

double square::area(){
    return pow( edgeLength , 2 ) ;
}

circle::circle( double d1 , double d2 , double rad ) : Figure_2D( d1 , d2 ) {
    if( rad < 0 )
        throw invalid_argument( "Radius of any circle must excel 0!" ) ;
    radius = rad ;
}

double circle::parameter() {
    return radius ;
}

double circle::area(){
    return pi * pow( radius , 2 ) ;
}

Figure_3D::Figure_3D( double d1 , double d2 , double d3 ) : Figure( d1 , d2 , d3 ) { }

Figure_3D::Figure_3D( const Figure_3D &figure_3d ) : Figure( figure_3d.center[0] , figure_3d.center[1] , figure_3d.center[2] ) { }

Figure_3D &Figure_3D::operator = ( const Figure_3D &figure_3d ) {
    center[0] = figure_3d.center[0] ;
    center[1] = figure_3d.center[1] ;
    center[2] = figure_3d.center[2] ;
    return *this ;
}

sphere::sphere( double d1 , double d2 , double d3 , double rad ) : Figure_3D( d1 , d2 , d3 ) {
    if( rad < 0 )
        throw invalid_argument( "Radius of any sphere must excel 0!" ) ;
    radius = rad ;
}

double sphere::parameter() {
    return radius ;
}

double sphere::volume() {
    return 4 * pi * pow( radius , 3 ) / 3 ;
}
