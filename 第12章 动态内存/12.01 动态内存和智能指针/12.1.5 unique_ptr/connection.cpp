#include "connection.h"

connection connect( destination* pd ){
    cout << "������" << endl;
    return connection() ;
}

void disconnect( connection c ){
    cout << "�ر�����" << endl;
}

void f( destination& d ){
    cout << "ֱ�ӹ���connect" << endl;
    connection c = connect( &d ) ;
    cout << endl;
}

void end_connection( connection* p ){
    disconnect( *p ) ;
}

void f1( destination& d ){
    cout << "��shared_ptr����connect" << endl;
    connection c = connect( &d ) ;                                                   // ������
    unique_ptr<connection,decltype(end_connection)*> p( &c , end_connection ) ;    // ʹ�����ӣ���f�˳�ʱ����ʹ����Ϊ�쳣���˳���con
    cout << endl;                                                                   // nectionҲ�ᱻ�����رգ�
}
