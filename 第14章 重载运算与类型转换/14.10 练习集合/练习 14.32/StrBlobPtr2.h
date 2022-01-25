#ifndef STRBLOBPTR2_H
#define STRBLOBPTR2_H

#include "StrBlobPtr.h"

class StrBlobPtr2 {

    public:
        StrBlobPtr2() = default ;
        StrBlobPtr2( StrBlobPtr sbp1 ) ;
        StrBlobPtr2 &operator = ( StrBlobPtr &sbp1 ) ;
        ~StrBlobPtr2() = default ;
        string *operator -> () const ;      // ��Ϊ���Ҫ������صļ�ͷ�����

    private:
        StrBlobPtr *sbp ;
};

#endif // STRBLOBPTR2_H
