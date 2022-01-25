// 本程序用于验证读者在练习17.18中的想法，并在必要的地方予以说明
#include <iostream>
#include <functional>
#include <regex>
#include <vector>
using namespace std;
using std::placeholders::_1 ;

int main() {
    string pattern( "[^c]ei" ) , word ;                                   // 用于测试的单词串：receipt freind theif receive albeit
    pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*" ;
    regex r( pattern , regex::icase ) ;
    vector<string> svec = { "albeit" , "neighbor" } ;
    cout << "请输入一个待查询的单词，按Ctrl+C停止:" << endl;
    while( getline( cin , word ) ){
        for( sregex_iterator it( word.begin() , word.end() , r ) , end_it ; it != end_it ; ++it )
            if( find( svec.begin() , svec.end() , it->str() ) == svec.end() )
                cout << it->str() << " " ;
        cout << endl;
        cout << "请输入一个待查询的单词，按Ctrl+C停止:" << endl;
    }
    return 0;
}
