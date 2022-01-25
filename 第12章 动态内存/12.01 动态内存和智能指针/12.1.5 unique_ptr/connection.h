#ifndef CONNECTION_H
#define CONNECTION_H

#include <iostream>
#include <memory>
using namespace std;

struct destination {

};
struct connection {

};

connection connect( destination* ) ;
void disconnect( connection ) ;
void f( destination& ) ;
void end_connection( connection* ) ;
void f1( destination& ) ;

#endif // CONNECTION_H
