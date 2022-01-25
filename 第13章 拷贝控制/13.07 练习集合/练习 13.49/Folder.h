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
        ~Folder() ;                                      // 析构函数

    public:
        void addMsg( Message *m ) ;                     // 从给定Folder对象的Message集合中添加或删除Message
        void remMsg( Message *m ) ;
        void add_to_Message( const Folder &f ) ;
        void remove_from_Message() ;

    private:
        set<Message*> Mset ;                            // Mset用来保存Folder中所有消息的指针
};

#endif // FOLDER_H
