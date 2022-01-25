// 本程序用于验证读者在练习13.48中的想法，并在必要的地方予以说明
#include <vector>
#include "String.h"

int main() {
    String s1( "first" ) , s2( "second" ) ;                                                        // 程序已写好，请自行观察打印结果并从相应
    vector<String> Svec ;                                                                         // 储存函数定义的String.cpp内寻找解读
    cout << "1 " << endl;
    Svec.push_back( s1 ) ;
    cout << "2 " << endl;
    Svec.push_back( std::move( s2 ) ) ;
    cout << "3 " << endl;
    char s3[] = "third" ;
    Svec.push_back( String( s3 ) ) ;
    cout << "4 " << endl;
    Svec.push_back( "four" ) ;
    cout << "5 " << endl;
    for_each( Svec.begin() , Svec.end() ,[]( const String& s )->void{ cout << s << " " ; } ) ;
    cout << endl;
    return 0;
}
