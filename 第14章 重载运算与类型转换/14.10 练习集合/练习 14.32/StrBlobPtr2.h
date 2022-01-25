#ifndef STRBLOBPTR2_H
#define STRBLOBPTR2_H

#include "StrBlobPtr.h"

class StrBlobPtr2 {

    public:
        StrBlobPtr2() = default ;
        StrBlobPtr2( StrBlobPtr sbp1 ) ;
        StrBlobPtr2 &operator = ( StrBlobPtr &sbp1 ) ;
        ~StrBlobPtr2() = default ;
        string *operator -> () const ;      // 此为题干要求的重载的箭头运算符

    private:
        StrBlobPtr *sbp ;
};

#endif // STRBLOBPTR2_H
