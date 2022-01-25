#ifndef MESSAGE_H
#define MESSAGE_H

#include <iostream>
#include <set>
#include "Folder.h"
using namespace std;

class Folder ;

class Message{
    friend class Folder ;
    friend void swap( Message &m1 , Message &m2 ) ;                           // 交换函数

    public:                                                                    // folders被隐式初始化为空集合
        explicit Message( const string &str = "" ) ;                          // 默认构造函数
        Message( const Message &m ) ;                                          // 拷贝构造函数
        Message& operator = ( const Message &m ) ;                            // 拷贝赋值运算符
        Message( Message &&m ) ;
        Message& operator = ( Message &&m ) ;
        ~Message();                                                             // 析构函数
        void save( Folder &f ) ;                                               // 从给定Folder集合中添加或删除本Message
        void remove( Folder &f ) ;
        void addFldr( Folder *f ) ;                                            // 添加单个给定的Folder
        void remFldr( Folder *f ) ;                                            // 删除单个给定的Folder

    private:
        string contents ;                                                      // 实际文本消息（保存消息文本）
        set<Folder*> folders ;                                                 // 包含本Message的Folder（保存指向本Message的所在Folder指针）
        void add_to_Folders( const Message &m ) ;                              // 将本Message添加到指向参数的Folder中
        void remove_from_Folders() ;                                           // 从folders中的每个Folder中删除本Message
        void move_Folders( Message *m ) ;
};

#endif // MESSAGE_H
