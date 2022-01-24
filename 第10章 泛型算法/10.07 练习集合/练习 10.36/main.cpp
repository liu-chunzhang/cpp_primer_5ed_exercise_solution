// 本程序用于验证读者在练习10.36中的想法，并在必要的地方予以说明
#include <iostream>
#include <fstream>
#include <list>
#include <iterator>
#include <algorithm>
using namespace std;

int main() {
    ifstream in( "data.txt" ) ;
    istream_iterator<int> iiter( in ) , eof ;
    list<int> ilst( iiter , eof ) ;
    list<int>::reverse_iterator citer = find( ilst.rbegin() , ilst.rend() , 0 ) ;
    unsigned j = 0 ;
    for( unsigned i = 0 ; citer.base() != ilst.end() ; ++i , --citer )   // reverse_iterator的成员base返回一个与构建此反向迭代器相同类型的迭代器的拷贝
        j = i ;
    cout << "list的最后一个0在其第" << ilst.size() - 1 - j << "位上。" << endl;
    return 0;
}
