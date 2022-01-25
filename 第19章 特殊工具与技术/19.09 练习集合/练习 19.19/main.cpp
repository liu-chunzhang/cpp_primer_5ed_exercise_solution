// ������������֤��������ϰ19.19�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <algorithm>
#include <functional>
#include <vector>
#include "Sales_data.h"
using std::placeholders::_1 ;

int main() {
    vector<Sales_data> sdatavec = { Sales_data( "978-7-121-20934-5" , 3 , 65.00 ) } ;
    sdatavec.emplace_back( "978-7-121-25229-7" , 7 , 89.00 ) ;
    sdatavec.emplace_back( "978-7-121-15535-2" , 5 , 128.00 ) ;
    vector<Sales_data>::const_iterator iter = find_if( sdatavec.cbegin() , sdatavec.cend() , bind( &Sales_data::check_value , _1 , 90 ) ) ;
    if( iter != sdatavec.cend() )
        cout << *iter << endl;
    return 0;
}
