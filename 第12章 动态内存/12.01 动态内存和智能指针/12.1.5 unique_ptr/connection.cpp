#include "connection.h"

connection connect( destination* pd ){
    cout << "打开连接" << endl;
    return connection() ;
}

void disconnect( connection c ){
    cout << "关闭连接" << endl;
}

void f( destination& d ){
    cout << "直接管理connect" << endl;
    connection c = connect( &d ) ;
    cout << endl;
}

void end_connection( connection* p ){
    disconnect( *p ) ;
}

void f1( destination& d ){
    cout << "用shared_ptr管理connect" << endl;
    connection c = connect( &d ) ;                                                   // 打开连接
    unique_ptr<connection,decltype(end_connection)*> p( &c , end_connection ) ;    // 使用连接，当f退出时（即使是因为异常而退出，con
    cout << endl;                                                                   // nection也会被正常关闭）
}
