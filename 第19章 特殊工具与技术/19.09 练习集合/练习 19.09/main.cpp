// ������������֤��������ϰ19.9�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "Base.h"
using namespace std;

int main(){
    Base b , *pb = nullptr ;
    Derived d ;

    cout << typeid( int ).name() << endl;
    cout << typeid( unsigned ).name() << endl;
    cout << typeid( long ).name() << endl;
    cout << typeid( unsigned long ).name() << endl;
    cout << typeid( char ).name() << endl;
    cout << typeid( unsigned char ).name() << endl;
    cout << typeid( float ).name() << endl;
    cout << typeid( double ).name() << endl;
    cout << typeid( string ).name() << endl;
    cout << typeid( Base ).name() << endl;
    cout << typeid( b ).name() << endl;
    cout << typeid( pb ).name() << endl;
    cout << typeid( Derived ).name() << endl;
    cout << typeid( d ).name() << endl;
    cout << typeid( type_info ).name() << endl;
    return 0;
}
