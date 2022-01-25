// 本程序用于验证教材中12.1.4节内容的可靠性，并提供感性认知
#include <iostream>
#include <memory>
using namespace std;

struct destination {} ;
struct connection {} ;

connection connect( destination *pd ) ;
void disconnect( connection c ) ;
void f( destination &d ) ;
void end_connection( connection *p ) ;                      // 这就是教材中提到的删除器

int main() {
    destination d ;
    f( d ) ;
    return 0;
}

connection connect( destination *pd ){
    cout << "打开连接" << endl;
    return connection() ;
}

void disconnect( connection c ){
    cout << "关闭连接" << endl;
}

void f( destination &d ){
    cout << "直接管理connect" << endl;
    connection c = connect( &d ) ;
    shared_ptr<connection> p( &c , end_connection ) ;    // 使用连接，当f退出时（即使是因为异常而退出），connection会被正确关闭
    cout << endl;
}

void end_connection( connection *p ){
    disconnect( *p ) ;
}
