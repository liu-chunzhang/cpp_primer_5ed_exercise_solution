// 本程序用于验证读者在练习16.62中的想法，并在必要的地方予以说明
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
