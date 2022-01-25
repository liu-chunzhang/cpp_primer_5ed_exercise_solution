// 本程序用于验证教材中18.3.3节内容的可靠性，并提供感性认知
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
	Panda ling_ling = ying_yang ;              // 使用拷贝构造函数

	Bear *pb = new Panda( "ying_yang" ) ;
	pb->print() ;       // 正确：Panda::print()
  //pb->cuddle() ;      // 错误：不属于Bear的接口
  //pb->highlight() ;   // 错误：不属于Bear的接口
    delete pb ;        // 正常：Panda::~Panda()

    cout << endl;
    Endangered *pe = new Panda( "ying_yang" ) ;
    pe->print() ;       // 正确：Panda::print()
  //pe->toes() ;        // 错误：不属于Endangered的接口
  //pe->cuddle() ;      // 错误：不属于Endangered的接口
    pe->highlight() ;   // 正确：Panda::highlight()
    delete pe ;        // 正确：Panda::~Panda()
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
