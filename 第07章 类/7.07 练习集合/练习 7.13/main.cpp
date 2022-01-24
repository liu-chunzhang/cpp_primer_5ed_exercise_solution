// 本程序用于验证读者在练习7.13中的想法，并在必要的地方予以说明
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
        cerr << "未检测到您输入了数据!" << endl;
        return -1 ;
    }
    return 0;
}
