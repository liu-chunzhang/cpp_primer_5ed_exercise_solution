// 本程序用于验证读者在练习2.6中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main() {
    /*
    int mouth = 9 , day = 7 ;
    cout << mouth << " " << day << endl;
    */

    int mouth = 09 ;            // 这一组定义有问题，因为以0定义开头的是八进制数，而9超出了八进制数所能够表出的范围，故不会被编译通过
    int day = 07 ;
    cout << mouth << " " << day << endl;
    return 0;
}
