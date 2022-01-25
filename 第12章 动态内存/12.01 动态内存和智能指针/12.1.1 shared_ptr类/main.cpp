// ������������֤�̲���12.1.1�����ݵĿɿ��ԣ����ṩ������֪
#include <list>
#include "StrBlob.h"

void use_factory( int a ) ;

int main() {
    shared_ptr<string> p1 ;
    shared_ptr<list<int>> p2 ;
    if( p1 && p1->empty() )
        *p1 = "hi" ;

    shared_ptr<int> p3 = make_shared<int>( 42 ) ;               // ָ��һ��ֵΪ42��int��shared_ptr
    cout << "*p3 = " << *p3 << endl;
    shared_ptr<string> p4 = make_shared<string>( 10 , '9' ) ;
    cout << "*p4 = " << *p4 << endl;
    shared_ptr<int> p5 = make_shared<int>() ;                   // ָ��ָ��Ķ��󲻴����κβ��������ֵ��ʼ��
    cout << "*p5 = " << *p5 << endl;
    auto p6 = make_shared<vector<string>>() ;

    shared_ptr<int> p = make_shared<int>( 42 ) ;
    shared_ptr<int> q( p ) ;

    shared_ptr<int> r = make_shared<int>( 0 ) ;
    cout << "r = " << r << " " << "q =" << q << endl;
    r = q ;
    cout << "r = " << r << " " << "q =" << q << endl;
    cout << "*r = " << *r << endl;
    cout << "*p = " << *p << endl;

    use_factory( 3 ) ;

    return 0;
}

shared_ptr<int> factory( int a ){
    a = a + 1 ;
    return make_shared<int>( a ) ;
}

void use_factory( int a ){
    shared_ptr<int> p = factory( a ) ;
}
