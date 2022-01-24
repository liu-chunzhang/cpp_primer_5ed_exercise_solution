// 本程序用于验证读者在练习3.17中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
using namespace std;

int main() {
    string str ;                                   // 这个变量用于记录用户的输入值
    vector<string> vstr ;                         // 元素类型为string类型的vector对象
    for( size_t i = 0 ; cin >> str ; ++i )        // 这个循环用于将输入的对象全部存入vector对象
        vstr.push_back( str ) ;
    for( string &i : vstr ){                      // 使用范围for循环语句遍历vstr中的每个元素
        for( char &j : i )                        // 使用范围for循环语句遍历vstr中的每个元素
            j = toupper( j ) ;                     // 改写小写字母为大写字母
        cout << i << endl;                        // 按照string变量形式输出，endl保证换行
    }
    return 0;
}
