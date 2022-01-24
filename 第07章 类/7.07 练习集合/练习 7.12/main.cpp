// 本程序用于验证读者在练习7.12中的想法，并在必要的地方予以说明
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
