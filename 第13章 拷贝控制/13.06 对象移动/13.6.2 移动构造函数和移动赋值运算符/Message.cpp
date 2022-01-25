#include "Message.h"
// 友元函数
void swap( Message &m1 , Message &m2 ){
    using std::swap ;
    for( Folder *f : m1.folders )                            // 将每个消息的指针都从它原来的Folder删除
        f->remMsg( &m1 ) ;
    for( Folder* f : m2.folders )
        f->remMsg( &m2 ) ;
    swap( m1.folders , m2.folders ) ;                        // 使用swap( set& , set& )
    swap( m1.contents , m2.contents ) ;                      // 使用swap( string& , string& )
    for( Folder *f : m1.folders )                            // 将每个Message的指针添加到它的新的Folder中
        f->addMsg( &m1 ) ;
    for( Folder *f : m2.folders )
        f->addMsg( &m2 ) ;
}

// 公有函数

Message::Message( const string &str ) : contents( str ) { }

Message::Message( const Message &m ) : contents( m.contents ) , folders( m.folders ) {
    add_to_Folders( m ) ;                                    // 将本消息添加到指向m的Folder中
}

Message &Message::operator = ( const Message &m ){          // 通过先删除指针再插入它们来处理自赋值情况
    remove_from_Folders() ;                                  // 更新已有Folder
    contents = m.contents ;                                  // 从m中拷贝内容消息
    folders = m.folders ;                                    // 从m拷贝Folder指针
    add_to_Folders( m ) ;                                    // 将本Message添加到那些Folder中
    return *this ;
}

Message::Message( Message &&m ) : contents( std::move( m.contents ) ) {
    move_Folders( &m ) ;
}

Message &Message::operator = ( Message &&m ) {
    if( this != &m ){
        contents = std::move( contents ) ;
        remove_from_Folders() ;
        move_Folders( &m ) ;
    }
    return *this ;
}

Message::~Message() {                                        // 本函数属于析构函数成员
    remove_from_Folders() ;
}

void Message::save( Folder &f ){
    folders.insert( &f ) ;                                  // 将给定Folder添加到我们的Folder列表中
    f.addMsg( this ) ;                                      // 将本Message添加到f的Message集合中
}

void Message::remove( Folder &f ){
    folders.erase( &f ) ;                                   // 将给定Folder从我们的Folder列表中删除
    f.remMsg( this ) ;                                      // 将本Message从f的Message集合里删除
}

void Message::addFldr( Folder *f ){
    folders.insert( f ) ;
}

void Message::remFldr( Folder *f ){
    folders.erase( f ) ;
}

// 私有函数
void Message::add_to_Folders( const Message &m ){           // 本函数属于拷贝控制成员
    for( Folder *f : m.folders )                            // 对于每个包含m的folder，此处教材程序正文里的auto应该是Folder*，下同
        f->addMsg( this ) ;                                 // 向该Folder添加一个指向本Message的指针
}

void Message::remove_from_Folders(){                        // 本函数属于析构函数成员
    for( Folder *f : folders )                              // 对folders中的每个指针
        f->remMsg( this ) ;                                 // 从该Folder中删除本Message
}

void Message::move_Folders( Message *m ) {
    folders = std::move( m->folders ) ;
    for( Folder *f : folders )
        f->remMsg( m ) , f->addMsg( this ) ;
    m->folders.clear() ;
}
