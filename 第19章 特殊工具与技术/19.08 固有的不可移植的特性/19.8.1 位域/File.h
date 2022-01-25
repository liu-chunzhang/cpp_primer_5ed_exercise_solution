#ifndef FILE_H
#define FILE_H

#include <iostream>
using namespace std;

typedef unsigned int Bit ;

class File {
    private:
        Bit mode: 2 ;
        Bit modified: 1 ;
        Bit prot_owner: 3 ;
        Bit prot_group: 3 ;
        Bit prot_world: 3 ;

    public:
        enum modes { READ = 01 , WRITE = 02 , EXECUTE = 03 };

    public:
        File();
        virtual ~File();

    public:
        File& open( modes m ) ;
        void close() ;
        void write() ;
        bool isRead() const ;
        void setWrite() ;
};

#endif // FILE_H
