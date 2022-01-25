// 本程序用于验证读者在练习17.17中的想法，并在必要的地方予以说明
#include <iostream>
#include <regex>
using namespace std;

int main() {
    string pattern( "[^c]ei" ) , word ;
    pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*" ;
    regex r( pattern , regex::icase ) ;
    cout << "请输入一个待查询的单词，按Ctrl+C停止:" << endl;
    while( getline( cin , word ) ){
        for( sregex_iterator it( word.cbegin() , word.cend() , r ) , end_it ; it != end_it ; ++it )
            cout << it->str() << " " ;
        cout << endl;
        cout << "请输入一个待查询的单词，按Ctrl+C停止:" << endl;
    }
    return 0;
}
