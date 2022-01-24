// 本程序用于验证读者在练习6.17中的想法，并在必要的地方予以说明：将string对象全部改写为小写形式
#include <iostream>
using namespace std;

void change_majuscules_to_minuscule( string &s ) ;

int main() {
    cout << "请输入一个需要将其内部全部大写字母改写为小写字母的字符串：" << endl;
    string s ;
    cin >> s ;
    change_majuscules_to_minuscule( s ) ;
    cout << "转换后的字符串为" << s << endl;
    return 0;
}

void change_majuscules_to_minuscule( string &s ){                      // minuscule意为小写字母；majuscule意为大写字母
    for( char &c : s )
        c = tolower( c ) ;
}
