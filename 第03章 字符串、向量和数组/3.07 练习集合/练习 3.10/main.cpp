// 本程序用于验证读者在练习3.10中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main() {
    string trans ,total ;
    cout << "请输入一个字符串：" << endl;
    getline( cin , trans );
    for( char c : trans )
        if( !ispunct( c ) )
            total += c;
    cout << total << endl;
    return 0;
}
