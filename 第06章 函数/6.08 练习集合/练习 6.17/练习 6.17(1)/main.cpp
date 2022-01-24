// 本程序用于验证读者在练习6.17中的想法，并在必要的地方予以说明：判断一个标准输入的字符串有无大小字母
#include <iostream>
using namespace std;

bool exist_majuscule( const string &s ) ;

int main() {
    cout << "请输入一个待判断有无大小字母的字符串：" << endl;
    string s ;
    cin >> s ;
    cout << ( exist_majuscule( s ) ? "这个字符串有大写字母。" : "这个字符串无大写字母。" ) << endl;
    return 0;
}

bool exist_majuscule( const string &s ){
    for( char c : s )
        if( isupper( c ) )
           return true ;
    return false ;
}
