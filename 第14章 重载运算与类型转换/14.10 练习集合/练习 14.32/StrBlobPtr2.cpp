#include "StrBlobPtr2.h"

StrBlobPtr2::StrBlobPtr2( StrBlobPtr sbp1 ) : sbp( &sbp1 ) { }

StrBlobPtr2 &StrBlobPtr2::operator = ( StrBlobPtr &sbp1 ) {
    sbp = &sbp1 ;
    return *this ;
}

string *StrBlobPtr2::operator -> () const{  // 此为题干要求的重载的箭头运算符定义
    return sbp->operator->() ;              // 先获取sbp成员指向的StrBlobPtr成员，再解引用它获取相应的vector[curr]
}
