// 本程序用于验证读者在练习12.23中的想法，并在必要的地方予以说明
#include <iostream>
#include <cstring>
#include <memory>
using namespace std;

char* link2charArr( const char* c1 , const char* c2 ) ;               // 这是连接两个字符串字面常量的版本，将其保存
string* link2str( const string& , const string& ) ;          // 这是连接两个string对象的版本，并将其保存

int main() {
    char c1[] = "Hello" , c2[] = "world" ;
    char* r = link2charArr( c1 , c2 ) ;                           // 为了明确的释放内存，特地写出了中间变量
    cout << r << endl;
    delete[] r ;
    string s1 = "Hi" , s2 = "world!" ;
    string* r2 = link2str( s1 , s2 ) ;
    cout << *link2str( s1 , s2 ) << endl;
    delete r2 ;
    return 0;
}

char* link2charArr( const char* c1 , const char* c2 ){
    char* r( new char [ strlen( c1 ) + strlen( c2 ) + 1 ] ) ;
    strcpy( r , c1 ) ;
    strcat( r , c2 ) ;
    return r ;
}

string* link2str( const string& s1 , const string& s2 ){
    string* sp = new string ( s1 + s2 ) ;
    return sp ;
}
