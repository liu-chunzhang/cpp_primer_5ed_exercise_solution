#include "Folder.h"

Folder::Folder( const Folder& fl ) : Mset( fl.Mset ){     // 拷贝构造函数，先拷贝Mset集合，然后调用add_to_Messages添加到它所有的folders集合
    add_to_Message( fl ) ;
}

Folder &Folder::operator = ( const Folder &fl ){         // 拷贝赋值运算符
    remove_from_Message() ;                               // 从每个Message中删除此Folder
    Mset = fl.Mset ;                                      // 从右侧运算对象拷贝Message集合
    add_to_Message( fl ) ;                                // 将此Folder添加到每个新Message中
    return *this ;
}

void Folder::addMsg( Message *m ){
    Mset.insert( m ) ;
}

void Folder::remMsg( Message *m ){
    Mset.erase( m ) ;
}

void Folder::add_to_Message( const Folder &f ){          // Folder应该有将自身添加和删除出所有Message和folders集合的成员函数
    for( Message *m : f.Mset )
        m->addFldr( this ) ;                             // 将这个Folder添加到所有Message中
}

void Folder::remove_from_Message(){                      // 将这个Folder从它所有的Message中删除
    while( !Mset.empty() )
        ( *Mset.begin() )->remove( *this ) ;
}

Folder::~Folder() {
    remove_from_Message() ;
}
