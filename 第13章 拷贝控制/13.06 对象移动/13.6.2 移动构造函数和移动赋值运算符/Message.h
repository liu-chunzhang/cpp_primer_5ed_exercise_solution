#ifndef MESSAGE_H
#define MESSAGE_H

#include <iostream>
#include <set>
#include "Folder.h"
using namespace std;

class Folder ;

class Message{
    friend class Folder ;
    friend void swap( Message &m1 , Message &m2 ) ;                           // ��������

    public:                                                                    // folders����ʽ��ʼ��Ϊ�ռ���
        explicit Message( const string &str = "" ) ;                          // Ĭ�Ϲ��캯��
        Message( const Message &m ) ;                                          // �������캯��
        Message& operator = ( const Message &m ) ;                            // ������ֵ�����
        Message( Message &&m ) ;
        Message& operator = ( Message &&m ) ;
        ~Message();                                                             // ��������
        void save( Folder &f ) ;                                               // �Ӹ���Folder��������ӻ�ɾ����Message
        void remove( Folder &f ) ;
        void addFldr( Folder *f ) ;                                            // ��ӵ���������Folder
        void remFldr( Folder *f ) ;                                            // ɾ������������Folder

    private:
        string contents ;                                                      // ʵ���ı���Ϣ��������Ϣ�ı���
        set<Folder*> folders ;                                                 // ������Message��Folder������ָ��Message������Folderָ�룩
        void add_to_Folders( const Message &m ) ;                              // ����Message��ӵ�ָ�������Folder��
        void remove_from_Folders() ;                                           // ��folders�е�ÿ��Folder��ɾ����Message
        void move_Folders( Message *m ) ;
};

#endif // MESSAGE_H
