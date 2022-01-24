// 本程序用于验证读者在练习10.28中的想法，并在必要的地方予以说明
#include <list>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main() {
    vector<int> ivec = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
    list<int> ilst1 , ilst2 , ilst3 ;
    copy( ivec.cbegin() , ivec.cend() , inserter( ilst1 , ilst1.begin() ) ) ;
    copy( ivec.cbegin() , ivec.cend() , back_inserter( ilst2 ) ) ;
    copy( ivec.cbegin() , ivec.cend() , front_inserter( ilst3 ) ) ;                // 由于vector不支持push_front，所以统一使用了list作为容器
    copy( ilst1.cbegin() , ilst1.cend() , ostream_iterator<int>( cout , " " ) ) ; cout << endl;
    copy( ilst2.cbegin() , ilst2.cend() , ostream_iterator<int>( cout , " " ) ) ; cout << endl;
    copy( ilst3.cbegin() , ilst3.cend() , ostream_iterator<int>( cout , " " ) ) ; cout << endl;
    return 0;
}

// 若三个目的容器为空，则显然inserter和back_inserter的输出结果是"1 2 3 4 5 6 7 8 9 "，而front_inserter的结果是"9 8 7 6 5 4 3 2 1 "；若目的容器
// 不空，则inserter的结果还取决于传入的起始迭代器的位置。
