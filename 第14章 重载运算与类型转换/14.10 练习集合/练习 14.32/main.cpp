// ������������֤��������ϰ14.32�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "StrBlob.h"
#include "StrBlobPtr.h"
#include "StrBlobPtr2.h"

int main() {
    StrBlob sb = { "a" , "an" , "the" } ;
    StrBlobPtr sbp1( sb , 2 ) ;
    StrBlobPtr2 sbp2( sbp1 ) ;
    return 0;
}

// StrBlobPtr2�������Ҫ��������࣬��ǰȥ�鿴�䶨��
