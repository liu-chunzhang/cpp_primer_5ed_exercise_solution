// 本程序用于验证教材中5.6节内容的可靠性，并提供感性认知
#include <iostream>
#include "Sales_item.h"
using namespace std;

int main() {
    Sales_item item1 , item2 ;
    while( cin >> item1 >> item2 ){
        try{
            if( item1.isbn() != item2.isbn() )
                throw runtime_error( "Data must refer to same ISBN" ) ;
            cout << item1 + item2 << endl;
        }catch( runtime_error err ){
            cout << err.what() << "\nTry Again? Enter Y or N" << endl;
            char c ;
            cin >> c ;
            if( !cin || c == 'N')
                break ;
        }
    }
    return 0;
}
