// ������������֤�̲���19.2.4�����ݵĿɿ��ԣ����ṩ������֪
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
