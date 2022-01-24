// 本程序用于验证读者在练习10.17中的想法，并在必要的地方予以说明
#include "Sales_data.h"

int main() {
    vector<Sales_data> Svec ;
    ifstream in( "data.txt" ) ;
    Sales_data sldt ;
    while( in >> sldt )
        Svec.push_back( sldt ) ;
    sort( Svec.begin() , Svec.end() , []( const Sales_data &s1 , const Sales_data &s2 ){ return s1.isbn() < s2.isbn() ; } ) ;
    for( Sales_data &s : Svec )
        cout << s << endl;
    return 0;
}
