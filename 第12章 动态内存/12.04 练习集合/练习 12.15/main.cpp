// 本程序用于验证读者在练习12.15中的想法，并在必要的地方予以说明
#include <iostream>
#include <memory>
using namespace std;

struct destination {} ;
struct connection {} ;

connection connect( destination *pd ) ;
void disconnect( connection c ) ;
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

void process( destination &d ){                                // 使用shared_ptr的版本
    connection c = connect( &d ) ;
    shared_ptr<connection> p( &c , []( connection *p ) -> void { disconnect( *p ) ; } ) ;    // 仅仅在此处用lambda表达式代替了删除器
    cout << endl;
}
