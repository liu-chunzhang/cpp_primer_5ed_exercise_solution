// 本程序用于验证教材中1.5.2节内容的可靠性，并提供感性认知
#include <iostream>
#include "Sales_item.h"
using namespace std;

int main() {
    Sales_item item1 , item2 ;
    cin >> item1 >> item2 ;
    if( item1.isbn() == item2.isbn() ) {
        cout << item1 + item2 << endl;
        return 0;
    }else {
        cerr << "Data must refer to same ISBN!" << endl;
        return -1 ;
    }
}
