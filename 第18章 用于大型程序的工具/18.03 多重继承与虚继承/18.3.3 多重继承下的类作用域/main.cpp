// ������������֤�̲���18.3.3�����ݵĿɿ��ԣ����ṩ������֪
#include "Animal.h"
using std::ostream;
using std::cout;
using std::endl;

// operations that take references to base classes of type Panda
void print( const Bear &b ) ;
void highlight( const Endangered &e ) ;
ostream& operator << ( ostream &os, const ZooAnimal &z ) ;

int main() {
    Panda ying_yang("ying_yang");
	print( ying_yang );
	highlight( ying_yang ) ;
	cout << ying_yang << endl;
	Panda ling_ling = ying_yang ;              // ʹ�ÿ������캯��

	Bear *pb = new Panda( "ying_yang" ) ;
	pb->print() ;       // ��ȷ��Panda::print()
  //pb->cuddle() ;      // ���󣺲�����Bear�Ľӿ�
  //pb->highlight() ;   // ���󣺲�����Bear�Ľӿ�
    delete pb ;        // ������Panda::~Panda()

    cout << endl;
    Endangered *pe = new Panda( "ying_yang" ) ;
    pe->print() ;       // ��ȷ��Panda::print()
  //pe->toes() ;        // ���󣺲�����Endangered�Ľӿ�
  //pe->cuddle() ;      // ���󣺲�����Endangered�Ľӿ�
    pe->highlight() ;   // ��ȷ��Panda::highlight()
    delete pe ;        // ��ȷ��Panda::~Panda()
    return 0;
}

void highlight( const Endangered &e ){
	cout << "highlight( const Endangered &e )" << std::endl;
}

void print( const Bear &b ) {
	cout << "print( const Bear &b )" << std::endl;
}

ostream& operator << ( ostream &os, const ZooAnimal &z ) {
	return os << "ZooAnimal output operator" << endl;
}
