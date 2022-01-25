// 本程序用于验证读者在练习13.31中的想法，并在必要的地方予以说明
#include "HasPtr.h"
#include <vector>
#include <fstream>                                             // 使用文件流输入是为了提升输入效率
#include <algorithm>

int main() {
    size_t u = 20 ;
    vector<HasPtr> hvec ;
    ifstream in( "data.txt" ) ;
    string str ;
    for( unsigned i = 0 ; in >> str && i != u ; ++i )
        hvec.push_back( str ) ;
    for( const HasPtr &h : hvec )
        cout << *h << " " ;
    cout << endl;
    sort( hvec.begin() , hvec.end() ) ;
    for( const HasPtr &h : hvec )
        cout << *h << " " ;
    cout << endl;
    return 0;
}

// 可以尝试调整循环条件来查看输出，可选数字有10、15、16、17、20、30和50，会发现输出结果大不相同。原因是在dm-gcc8.1.0的STL实现中，当元素数不大于
// 16时，sort使用的是插入排序算法，且未使用swap交换元素，而是用内存区域的整片移动；当元素数不小于17时，sort调用了swap，采用的是快速排序，尽管如
// 此，但交换元素的次数仍可能比预期使用快速排序少，原因是如果子序列恢复到长度不多于16，则又转入插入排序，而不会继续递归到子序列长度为1。
// 此处能够使用const字样，是因为HasPtr类自定义的解引用操作规定了this指针是常量指针，这一函数我已经重载了常量版本，所以可以使用const字样，否则只
// 能用没用const的版本。
