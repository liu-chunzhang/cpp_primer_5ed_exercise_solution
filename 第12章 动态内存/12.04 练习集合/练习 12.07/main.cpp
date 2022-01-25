// 本程序用于验证读者在练习12.7中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
#include <memory>                                                  // 首先还是要加上头文件<memory>
using namespace std;

void read( shared_ptr<vector<int>> ivec , istream &in ) ;
void print( shared_ptr<vector<int>> ivec ) ;

int main() {
    shared_ptr<vector<int>> ivec = make_shared<vector<int>>() ;
    read( ivec , cin ) ;
    print( ivec ) ;
    return 0;
}

void read( shared_ptr<vector<int>> ivec , istream &in ) {
    int i ;
    while( in >> i )
        ivec->push_back( i ) ;
}

void print( shared_ptr<vector<int>> ivec ){
    for( const int i : *ivec )                                  // 此处还是需要解引用
        cout << i << " " ;
    cout << endl;
}
