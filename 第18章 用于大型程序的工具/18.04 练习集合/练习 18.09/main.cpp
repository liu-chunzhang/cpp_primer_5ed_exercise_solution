// ������������֤��������ϰ18.9�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "Sales_data.h"

int main() {
    Sales_data data1( "978-7-121-15535-2" , 5 , 128.00 , 108.00 ) , data2( "978-7-121-15535-3" , 3 , 128.00 , 118.00 ) , sum ;
    try{
        sum = data1 + data2 ;
    }catch( isbn_mismatch &e ){
        cerr << e.what() << ": left isbn(" << e.getleft() << ") right isbn(" << e.getright() << ")" << endl;
    }
    return 0;
}
