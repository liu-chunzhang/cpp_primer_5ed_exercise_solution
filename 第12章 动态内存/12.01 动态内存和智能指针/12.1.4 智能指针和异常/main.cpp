// ������������֤�̲���12.1.4�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <memory>
using namespace std;

struct destination {} ;
struct connection {} ;

connection connect( destination *pd ) ;
void disconnect( connection c ) ;
void f( destination &d ) ;
void end_connection( connection *p ) ;                      // ����ǽ̲����ᵽ��ɾ����

int main() {
    destination d ;
    f( d ) ;
    return 0;
}

connection connect( destination *pd ){
    cout << "������" << endl;
    return connection() ;
}

void disconnect( connection c ){
    cout << "�ر�����" << endl;
}

void f( destination &d ){
    cout << "ֱ�ӹ���connect" << endl;
    connection c = connect( &d ) ;
    shared_ptr<connection> p( &c , end_connection ) ;    // ʹ�����ӣ���f�˳�ʱ����ʹ����Ϊ�쳣���˳�����connection�ᱻ��ȷ�ر�
    cout << endl;
}

void end_connection( connection *p ){
    disconnect( *p ) ;
}
