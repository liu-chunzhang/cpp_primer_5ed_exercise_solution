// 本程序用于验证读者在练习5.12中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
using namespace std;                                           // 程序设定是一个字符仅允许被统计一次！

int main() {
    unsigned ffCnt = 0 , flCnt = 0 , fiCnt = 0 ;
    char ch ;
    vector<char> cvec ;
    while( cin.get( ch ) )
         cvec.push_back( ch ) ;
    for( vector<char>::const_iterator citer = cvec.cbegin() ; citer != cvec.cend() - 1 ; ++citer ){
        if( *citer == 'f' )
            switch( *( citer + 1 ) ){
                case 'f' :
                    ++ffCnt ; ++citer ; break ;
                case 'i' :
                    ++fiCnt ; break ;
                case 'l' :
                    ++flCnt ; break ;
            }
    }
    cout << "ff出现的次数是：" << ffCnt << endl;
    cout << "fl出现的次数是：" << flCnt << endl;
    cout << "fi出现的次数是：" << fiCnt << endl;
    return 0;
}
