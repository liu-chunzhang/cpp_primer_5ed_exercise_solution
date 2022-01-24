// ������������֤��������ϰ10.32�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <algorithm>
#include <fstream>
#include <functional>
#include <iterator>
#include <numeric>
#include <vector>
#include "Sales_item.h"
using namespace std::placeholders ;

bool compareIsbn( const Sales_item &lhs , const Sales_item &rhs ) ;

int main() {
    ifstream in( "data.txt" ) ;
    istream_iterator<Sales_item> inSiter( in ) , Seof ;
    vector<Sales_item> Svec( inSiter , Seof ) ;
    sort( Svec.begin() , Svec.end() , compareIsbn ) ;
    for( vector<Sales_item>::iterator Siter = Svec.begin() ; Siter != Svec.end() ; ){
        Sales_item item1 = *Siter ;
        vector<Sales_item>::iterator Siter2 = find_if( Siter , Svec.end() , bind( compareIsbn , _1 , item1 ) ) ;
        cout << accumulate( Siter , Siter2 , Sales_item( 0 , 0 , Siter->isbn() ) ) << endl;
        Siter = Siter2 ;
    }
    return 0;
}

bool compareIsbn( const Sales_item &lhs , const Sales_item &rhs ) {
    return lhs.isbn() != rhs.isbn();
}
