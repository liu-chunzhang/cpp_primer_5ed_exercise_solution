// 本程序用于验证教材中19.2.4节内容的可靠性，并提供感性认知
#include <typeinfo>
#include "Base.h"
#include "Sales_data.h"
using namespace std;

int main() {
    int arr[10] ;
    Derived d ;
    Base *p = &d ;

    cout << typeid( 42 ).name() << endl;
    cout << typeid( arr ).name() << endl;
    cout << typeid( Sales_data ).name() << endl;
    cout << typeid( std::string ).name() << endl;
    cout << typeid( p ).name() << endl;
    cout << typeid( *p ).name() << endl;
    return 0;
}
