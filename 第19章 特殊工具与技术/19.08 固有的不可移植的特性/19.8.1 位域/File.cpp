#include "File.h"

File::File() { }

File::~File() { }

void File::write() {
    modified = 1 ;
    // ...
}

void File::close() {
    if( modified ){
        cout << "modified!" << endl;
    }
}

File& File::open( modes m ) {
    mode |= READ ;                                      // ����Ĭ�Ϸ�ʽ����READ
    if( m & WRITE ){
        cout << "���ն�д��ʽ���ļ���" << endl;
    }
    return *this;
}

bool File::isRead() const {
    return mode & READ ;
}

void File::setWrite() {
    mode |= WRITE ;
}
