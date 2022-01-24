// 本程序用于验证读者在练习9.44中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

void replace( string &s , const string &oldVal , const string &newVal ) ;

int main() {
    string s = "I got thru the tunnel tho there are all difficulties." ;          // 同练习9.43那样去查找s中与oldVal相同的子串并不是不能够做到，
    replace( s , "tho" , "though" ) ;                                             // 而是无论从编程效率还是目标代码效率考虑，这样做都是毫无意义
    replace( s , "thru" , "through" ) ;                                           // 的。除非你确信目标程序有效率上的问题，否则应尽量使用标准库
    cout << s << endl;                                                            // 功能来写特殊化程序，而非是从头造轮子。
    return 0;
}

void replace( string &s , const string &oldVal , const string &newVal ){
    for( string::size_type p = s.find( oldVal , 0 ) ; p != string::npos ; p = s.find( oldVal , p ) )
        s.replace( p , oldVal.size() , newVal ) , p += newVal.size() ;
}
