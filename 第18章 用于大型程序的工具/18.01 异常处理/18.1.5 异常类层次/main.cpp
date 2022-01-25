// 本程序用于验证教材中18.1.5节内容的可靠性，并提供感性认知
#include "Sales_data.h"

int main() {
    Sales_data item1 , item2 , sum ;
    cin >> item1 >> item2 ;                                  // 为了结果明显，稍微改一下
    try{
        sum = item1 + item2 ;
        cout << sum << endl;
    }catch( const isbn_mismatch &e ){
        cerr << e.what() << ": left isbn(" << e.left << ") right isbn(" << e.right << ")" << endl;
    }
    return 0 ;
}
