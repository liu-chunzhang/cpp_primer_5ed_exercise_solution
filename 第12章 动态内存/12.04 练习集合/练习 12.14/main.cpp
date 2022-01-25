// 本程序用于验证读者在练习12.14中的想法，并在必要的地方予以说明
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
    cout << "打开连接" << endl;
    return connection() ;
}

void disconnect( connection c ){
    cout << "关闭连接" << endl;
}

void end_connection( connection *p ){
    disconnect( *p ) ;
}

void process( destination &d ){                                // 使用shared_ptr的版本
    connection c = connect( &d ) ;
    shared_ptr<connection> p( &c , end_connection ) ;
    cout << endl;
}
