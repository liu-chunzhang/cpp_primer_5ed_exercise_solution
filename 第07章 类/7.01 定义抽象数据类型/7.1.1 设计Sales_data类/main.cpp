// ������������֤�̲���7.1.1�����ݵĿɿ��ԣ����ṩ������֪
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
        cerr << "δ��⵽������������!" << endl;
        return -1 ;
    }
    return 0;
}
