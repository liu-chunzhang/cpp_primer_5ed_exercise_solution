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
    mode |= READ ;                                      // 按照默认方式设置READ
    if( m & WRITE ){
        cout << "按照读写方式打开文件！" << endl;
    }
    return *this;
}

bool File::isRead() const {
    return mode & READ ;
}

void File::setWrite() {
    mode |= WRITE ;
}
