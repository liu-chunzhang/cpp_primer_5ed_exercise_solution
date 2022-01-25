// 本程序用于验证读者在练习14.37中的想法，并在必要的地方予以说明
#include <algorithm>
#include <vector>
#include "doublecompare.h"

int main() {
    vector<double> dvec = { 1 , 2 , 3 , 7 , 3 , 3.2 , 4 , 5 } ;
    replace_if( dvec.begin() , dvec.end() , doublecompare( 3 ) , 6 ) ;  // 单独的dcmp可以用来做一元谓词，但是dcmp(3)已经被是为函数，不可做谓词
    for( const double d : dvec )                                        // 打印语句用来确保程序的正确性
        cout << d << " " ;
    return 0;
}
