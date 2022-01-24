// 本程序用于验证教材中7.1.1节内容的可靠性，并提供感性认知
#include "Sales_data.h"
using namespace std;

int main(){
    Sales_data total ;
    if( read( cin , total ) ){
        Sales_data trans ;
        while( read( cin , trans ) ){
            if( total.isbn() == trans.isbn() )
                total.combine( trans ) ;
            else{
                print( cout , total ) << endl;
                total = trans ;
            }
            print( cout , total ) << endl;
        }
    }
    else{
        cerr << "未检测到您输入了数据!" << endl;
        return -1 ;
    }
    return 0;
}
