// ������������֤�̲���13.6.2�����ݵĿɿ��ԣ����ṩ������֪
#include "Folder.h"
#include "Foo.h"
#include "HasPtr.h"
#include "Message.h"
#include "StrVec.h"
#include "X.h"

StrVec getVec( istream &in ) ;

int main() {
    StrVec v1 , v2 ;
    v1 = v2 ;
    cout << "1" << endl;

    X x1 , x2 = std::move( x1 ) ;               // ʹ�úϳɵ��ƶ����캯��
    hasX hx1 , hx2 = std::move( hx1 ) ;         // ʹ�úϳɵ��ƶ����캯��

    v2 = getVec( cin ) ;

    Foo x ;
    Foo y( x ) ;                               // �������캯����x��һ����ֵ
    Foo z( std::move( x ) ) ;                 // �������캯������Ϊû�����ƶ����캯��

    cout << "2" << endl;
    HasPtr hp , hp2 ;
    hp = hp2 ;
    cout << "3" << endl;
    hp = std::move( hp2 ) ;
    return 0;
}

StrVec getVec( istream &in ) {
    string str ;
    StrVec Svec ;
    if( in >> str )
        Svec.push_back( str ) ;
    return Svec ;
}
