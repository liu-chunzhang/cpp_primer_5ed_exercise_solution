// ������������֤��������ϰ7.13�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "Sales_data.h"
using namespace std;

int main() {
    Sales_data total( cin ) ;
    if( cin ){
        Sales_data trans( cin ) ;
        do{
            if( total.isbn() == trans.isbn() )
                total += trans ;
            else{
                cout << total << endl;
                total = trans ;
            }
        }while( cin >> trans ) ;
        cout << total << endl;
    }
    else{
        cerr << "δ��⵽������������!" << endl;
        return -1 ;
    }
    return 0;
}
