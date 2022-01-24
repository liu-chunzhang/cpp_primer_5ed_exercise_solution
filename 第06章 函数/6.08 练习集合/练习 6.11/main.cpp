// 本程序用于验证读者在练习6.11中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

void reset_pi( double &d ) ;

int main() {
    double pi = 0 ;
    cout << "调用reset函数前pi的值为" << pi << endl;
    reset_pi( pi ) ;
    cout << "调用reset函数后pi的值为" << pi << endl;
    return 0;
}

void reset_pi( double &d ){
    d = 3.1415926535 ;
}
