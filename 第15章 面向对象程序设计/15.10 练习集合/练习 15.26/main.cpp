// ������������֤��������ϰ15.26�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "Bulk_quote.h"

int main()                                                              // ��д�����д˳��򣬿��Կ������̲�P556���������𼶹��������˳��
{   Quote base( "C++ Primer 5th edition" , 128.00 ) ;
    Bulk_quote bulk( "Core Python Programming" , 89.00 , 5 , 0.19 ) ;
    cout << base << endl;
    cout << bulk << endl;
    return 0;
}
