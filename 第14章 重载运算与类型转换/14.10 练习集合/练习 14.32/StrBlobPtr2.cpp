#include "StrBlobPtr2.h"

StrBlobPtr2::StrBlobPtr2( StrBlobPtr sbp1 ) : sbp( &sbp1 ) { }

StrBlobPtr2 &StrBlobPtr2::operator = ( StrBlobPtr &sbp1 ) {
    sbp = &sbp1 ;
    return *this ;
}

string *StrBlobPtr2::operator -> () const{  // ��Ϊ���Ҫ������صļ�ͷ���������
    return sbp->operator->() ;              // �Ȼ�ȡsbp��Աָ���StrBlobPtr��Ա���ٽ���������ȡ��Ӧ��vector[curr]
}
