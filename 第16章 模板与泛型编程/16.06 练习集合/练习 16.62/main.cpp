// ������������֤��������ϰ16.62�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <fstream>
#include <iterator>
#include <unordered_set>
#include "Sales_data.h"

int main() {
    unordered_multiset<Sales_data> SDset ;
    ifstream in( "data.txt" ) ;
    Sales_data temp ;
    while( in >> temp )
        SDset.insert( temp ) ;
    copy( SDset.begin() , SDset.end() , ostream_iterator<Sales_data>( cout , "\n" ) ) ;
    return 0;
}
