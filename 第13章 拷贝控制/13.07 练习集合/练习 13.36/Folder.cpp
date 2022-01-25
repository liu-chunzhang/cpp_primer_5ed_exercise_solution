#include "Folder.h"

Folder::Folder( const Folder& fl ) : Mset( fl.Mset ){     // �������캯�����ȿ���Mset���ϣ�Ȼ�����add_to_Messages��ӵ������е�folders����
    add_to_Message( fl ) ;
}

Folder &Folder::operator = ( const Folder &fl ){         // ������ֵ�����
    remove_from_Message() ;                               // ��ÿ��Message��ɾ����Folder
    Mset = fl.Mset ;                                      // ���Ҳ�������󿽱�Message����
    add_to_Message( fl ) ;                                // ����Folder��ӵ�ÿ����Message��
    return *this ;
}

void Folder::addMsg( Message *m ){
    Mset.insert( m ) ;
}

void Folder::remMsg( Message *m ){
    Mset.erase( m ) ;
}

void Folder::add_to_Message( const Folder &f ){          // FolderӦ���н�������Ӻ�ɾ��������Message��folders���ϵĳ�Ա����
    for( Message *m : f.Mset )
        m->addFldr( this ) ;                             // �����Folder��ӵ�����Message��
}

void Folder::remove_from_Message(){                      // �����Folder�������е�Message��ɾ��
    while( !Mset.empty() )
        ( *Mset.begin() )->remove( *this ) ;
}

Folder::~Folder() {
    remove_from_Message() ;
}
