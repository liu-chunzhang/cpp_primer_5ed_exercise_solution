// 本程序用于验证读者在练习3.43中的想法，并在必要的地方予以说明：使用传统for循环和使用指针，用auto代替控制变量的类型
#include <iostream>
using namespace std;

int main() {
    int ia[3][4] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 } ;
    for( auto i = begin(ia) ; i != end(ia) ; ++i ){
        for( auto j = begin(*i) ; j != end(*i); ++j )
            cout << *j << " " ;
        cout << endl;
    }
    return 0;
}


