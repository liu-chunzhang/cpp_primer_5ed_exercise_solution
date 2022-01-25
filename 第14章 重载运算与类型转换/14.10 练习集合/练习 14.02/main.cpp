// 本程序用于验证读者在练习14.2中的想法，并在必要的地方予以说明
#include "Sales_data.h"

int main() {
    Sales_data s1( "0-201-78345-X" , 3 , 20.00 , 16 ) , s2( "0-201-78345-X" , 2 , 25.00 , 23 ) ;   // 这些是测试行，没有并不妨碍题干要求代码的正确性
    cout << s1 + s2 << endl;
    s1 += s2 ;
    Sales_data s3 = s1 + s2 ;
    cout << s3 << endl;
    return 0;
}
