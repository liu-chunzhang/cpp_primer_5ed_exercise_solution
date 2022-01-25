// 本程序用于验证读者在练习19.6中的想法，并在必要的地方予以说明
#include "AndQuery.h"
#include "OrQuery.h"
#include "NotQuery.h"
#include <typeinfo>

int main() {
    Query_base *b = nullptr ;
    AndQuery *a = static_cast<AndQuery*>( b ) ;
    try{
        if( typeid( *a ) == typeid( Query_base ) )
            cout << "typeid( a ) == typeid( Query_base )" << endl;
        else
            cout << "Conversion failed." << endl;
    }catch( bad_typeid e ){
        cout << "bad_typeid" << endl;
    }
    return 0;
}

// 因为Query_base是抽象基类，所以不能定义此类型对象，相应的定义其指针只能是个未初始化的无效指针或者初始化的空指针，如果是无效指针，
// 则再进行转化会引起内部程序运行不具名出错（虽然编译不会出错），因为不知道具体绑定到何种类型（测试结果是绑定的类型Query_base、
// BinaryQuery和AndQuery都不是）；绑定到空指针则会同教程19.2.2节最后所述抛出bad_typeid的异常。
