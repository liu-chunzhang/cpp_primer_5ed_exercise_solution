// ������������֤��������ϰ18.10�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "Sales_data.h"

int main() {
    Sales_data item1( "0-201-82470-1" , 4 , 45.39 , 43.22 ) , item2( "0-201-70353-X" , 4 , 24.99 , 20.99 ) , sum ;
    #ifndef NDEBUG1
    try{
        sum = item1 + item2 ;
        cout << sum ;
    }catch( const isbn_mismatch &e ){
        cerr << e.what() << ": left isbn(" << e.getleft() << ") right:(" << e.getright() << ")" << endl;
    }
    #endif

    #ifndef NEDBUG2
    sum = item1 + item2 ;
    cout << sum ;
    #endif // NEDBUG2

    system( "pause" ) ;
    return 0;
}
