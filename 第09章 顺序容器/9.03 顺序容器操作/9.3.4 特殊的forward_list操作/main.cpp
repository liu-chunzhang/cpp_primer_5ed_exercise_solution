// 本程序用于验证教材中9.3.4节内容的可靠性，并提供感性认知
#include <iostream>
#include <forward_list>
using namespace std;

int main() {
    forward_list<int> iflst = { 0 , 1 , 2 , 3 , 5 , 8 , 13 , 21 , 34 , 55 } ;
    forward_list<int>::const_iterator prev = iflst.before_begin() ;            // 表示iflst的“首前元素”
    forward_list<int>::const_iterator curr = iflst.cbegin() ;                 // 表示iflst中的第一个元素
    while( curr != iflst.cend() )                                                // 如果仍然有元素要处理
        if( *curr & 1 )                                                          // 若元素为奇数
            curr = iflst.erase_after( prev ) ;                                    // 删除它并移动curr
        else
            prev = curr++ ;                                                       // 移动迭代器curr，指向下一个元素，pre指向curr之前的元素
    for( const int i : iflst )
        cout << i << " " ;
    return 0;
}
