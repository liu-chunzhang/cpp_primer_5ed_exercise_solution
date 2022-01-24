// 本程序用于验证读者在练习11.12中的想法，并在必要的地方予以说明
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    ifstream in( "data.txt" ) ;
    string word ;
    int i ;
    vector<pair<string,int>> pvec ;
    while( in >> word && in >> i )
        pvec.push_back( pair<string,int>( word , i ) ) ;
    for( const pair<string,int> &d : pvec )
        cout << d.first << " " << d.second << endl;
    return 0;
}
