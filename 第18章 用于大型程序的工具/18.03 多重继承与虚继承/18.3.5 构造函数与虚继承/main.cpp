// 本程序用于验证教材中18.3.5节内容的可靠性，并提供感性认知
#include "Animal.h"
using std::ostream;
using std::cout;
using std::endl;

// operations that take references to base classes of type Panda
void dance( const Bear &b );
void rummage( const Raccoon &r );
ostream& operator << ( ostream &os, const ZooAnimal &z ) ;

int main() {
    Panda ying_yang( "ying_yang" ) ;
	dance( ying_yang ) ;
	rummage( ying_yang ) ;
	cout << ying_yang ;
    return 0;
}

void dance( const Bear &b ){
	cout << "dance( const Bear &b )" << std::endl;
}

void rummage( const Raccoon &r ) {
	cout << "rummage( const Raccoon &r )" << std::endl;
}

ostream& operator << ( ostream &os, const ZooAnimal &z ) {
	return os << "ZooAnimal output operator" << endl;
}
