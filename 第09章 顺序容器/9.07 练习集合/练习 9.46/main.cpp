// 本程序用于验证读者在练习9.46中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

string& add_presuffix( string &s , const string &s1 , const string &s2 ) ;

int main() {
    string s = "James" ;
    cout << add_presuffix( s , "Mr." , "III" ) << endl;
    return 0;
}

string& add_presuffix( string &s , const string &s1 , const string &s2 ) {
    s.insert( 0 , s1 + ' ' ) ;                                             // 一般形式是Mr.James III，所以打一个空格                                                          // 在头上插入前缀
    s.insert( s.size() , ' ' + s2 ) ;                                     // 在后面打一个空格                                                         // 在后面插入后缀
    return s ;
}
