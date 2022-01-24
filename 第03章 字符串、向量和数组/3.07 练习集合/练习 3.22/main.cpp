// 本程序用于验证读者在练习3.22中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> text ;
    string str ;
    while( getline( cin , str ) )
        text.push_back( str ) ;
    for( string &i : text)                                                          // 此处利用双循环，来改写vector里每个string的每个字符，且每个
        for( char &j : i )                                                          // 范围for循环变量都有引用号，确保改写实际完成（而不是形式的）
            j = toupper( j ) ;
    for( vector<string>::const_iterator it = text.cbegin() ; it != text.cend() && !it->empty() ; ++it )
        cout << *it << endl ;                                                       // 之后，将改写依次输出，直至遇到第一个空白行为止
    return 0;
}
