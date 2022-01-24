// 本程序用于验证读者在练习11.8中的想法，并在必要的地方予以说明
#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{   ifstream in( "data.txt" ) ;
    istream_iterator<string> iter0( in ) , eof ;
    vector<string> svec( iter0 , eof ) ;
    sort( svec.begin() , svec.end() ) ;                                         // 排序一方面是为了使用unique算法，另一方面是方便检查重复
    vector<string>::iterator iter = unique( svec.begin() , svec.end() ) ;
    svec.erase( iter , svec.end() ) ;
    for( const string& str : svec )
        cout << str << " " ;
    return 0;
}
