#include "Message.h"
// ��Ԫ����
void swap( Message &m1 , Message &m2 ){
    using std::swap ;
    for( Folder *f : m1.folders )                            // ��ÿ����Ϣ��ָ�붼����ԭ����Folderɾ��
        f->remMsg( &m1 ) ;
    for( Folder* f : m2.folders )
        f->remMsg( &m2 ) ;
    swap( m1.folders , m2.folders ) ;                        // ʹ��swap( set& , set& )
    swap( m1.contents , m2.contents ) ;                      // ʹ��swap( string& , string& )
    for( Folder *f : m1.folders )                            // ��ÿ��Message��ָ����ӵ������µ�Folder��
        f->addMsg( &m1 ) ;
    for( Folder *f : m2.folders )
        f->addMsg( &m2 ) ;
}

// ���к���

Message::Message( const string &str ) : contents( str ) { }

Message::Message( const Message &m ) : contents( m.contents ) , folders( m.folders ) {
    add_to_Folders( m ) ;                                    // ������Ϣ��ӵ�ָ��m��Folder��
}

Message &Message::operator = ( const Message &m ){          // ͨ����ɾ��ָ���ٲ��������������Ը�ֵ���
    remove_from_Folders() ;                                  // ��������Folder
    contents = m.contents ;                                  // ��m�п���������Ϣ
    folders = m.folders ;                                    // ��m����Folderָ��
    add_to_Folders( m ) ;                                    // ����Message��ӵ���ЩFolder��
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

Message::~Message() {                                        // ��������������������Ա
    remove_from_Folders() ;
}

void Message::save( Folder &f ){
    folders.insert( &f ) ;                                  // ������Folder��ӵ����ǵ�Folder�б���
    f.addMsg( this ) ;                                      // ����Message��ӵ�f��Message������
}

void Message::remove( Folder &f ){
    folders.erase( &f ) ;                                   // ������Folder�����ǵ�Folder�б���ɾ��
    f.remMsg( this ) ;                                      // ����Message��f��Message������ɾ��
}

void Message::addFldr( Folder *f ){
    folders.insert( f ) ;
}

void Message::remFldr( Folder *f ){
    folders.erase( f ) ;
}

// ˽�к���
void Message::add_to_Folders( const Message &m ){           // ���������ڿ������Ƴ�Ա
    for( Folder *f : m.folders )                            // ����ÿ������m��folder���˴��̲ĳ����������autoӦ����Folder*����ͬ
        f->addMsg( this ) ;                                 // ���Folder���һ��ָ��Message��ָ��
}

void Message::remove_from_Folders(){                        // ��������������������Ա
    for( Folder *f : folders )                              // ��folders�е�ÿ��ָ��
        f->remMsg( this ) ;                                 // �Ӹ�Folder��ɾ����Message
}

void Message::move_Folders( Message *m ) {
    folders = std::move( m->folders ) ;
    for( Folder *f : folders )
        f->remMsg( m ) , f->addMsg( this ) ;
    m->folders.clear() ;
}
