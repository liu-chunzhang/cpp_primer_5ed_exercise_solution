// ������������֤��������ϰ12.14�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <memory>
using namespace std;

struct destination {} ;
struct connection {} ;

connection connect( destination *pd ) ;
void disconnect( connection c ) ;
void end_connection( connection *p ) ;
void process( destination &d ) ;

int main() {
    destination d ;
    process( d ) ;
    return 0;
}

connection connect( destination *pd ){
    cout << "������" << endl;
    return connection() ;
}

void disconnect( connection c ){
    cout << "�ر�����" << endl;
}

void end_connection( connection *p ){
    disconnect( *p ) ;
}

void process( destination &d ){                                // ʹ��shared_ptr�İ汾
    connection c = connect( &d ) ;
    shared_ptr<connection> p( &c , end_connection ) ;
    cout << endl;
}
