#ifndef FOLDER_H
#define FOLDER_H

#include "Message.h"
using namespace::std ;

class Message ;

class Folder{
    friend class Message ;

    public:
        Folder();
        Folder( const Folder &fl ) ;
        Folder &operator = ( const Folder &fl ) ;
        ~Folder() ;                                      // ��������

    public:
        void addMsg( Message *m ) ;                     // �Ӹ���Folder�����Message��������ӻ�ɾ��Message
        void remMsg( Message *m ) ;
        void add_to_Message( const Folder &f ) ;
        void remove_from_Message() ;

    private:
        set<Message*> Mset ;                            // Mset��������Folder��������Ϣ��ָ��
};

#endif // FOLDER_H
