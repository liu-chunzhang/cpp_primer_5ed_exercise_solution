// ������������֤��������ϰ14.49�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "Book.h"

int main() {
    Book cpp_primer5ed( "C++ Primer����5�棩" , "978-7-121-15535-2" , 128.00 , "���ա���޷�" , "���ӹ�ҵ������" ) , nullbook ;
    if( static_cast<bool>( cpp_primer5ed ) )
        cout << cpp_primer5ed << endl;
    if( !static_cast<bool>( nullbook ) )
        cout << nullbook << endl;
    return 0;
}
