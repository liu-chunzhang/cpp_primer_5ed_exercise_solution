// 本程序用于验证读者在练习6.5中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

double absoluteValue( double d ){
    return ( d >= 0 ) ? d : -d ;
}

int main() {
    double d ;
    cout << "请输入一个双精度浮点数：" << endl;
    cin >> d ;
    cout << absoluteValue( d ) << endl;
    return 0;
}
