// ������������֤��������ϰ7.12�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "Sales_data.h"
using namespace std;

int main() {
    Sales_data data1 ;
    Sales_data data2( "978-7-121-15535-2" ) ;
    Sales_data data3( "978-7-121-15535-2" , 100 , 128 , 100 ) ;
    Sales_data data4( cin ) ;
    cout << data1 << endl;
    cout << data2 << endl;
    cout << data3 << endl;
    cout << data4 << endl;
    return 0;
}
