// 本程序用于验证读者在练习9.34中的想法，并在必要的地方予以说明：此乃调整后的原始版本，用于查看分析的正确性
#include <iostream>
#include <vector>
using namespace std;

int main() {                                                           // 当我们将++iter放入循环体，其依然是错误的，除非容器为空或仅含偶数，
    vector<int> ivec = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;         // 否则程序依然会陷入死循环。原因是，当遍历到奇数时，执行insert将该值
    vector<int>::const_iterator iter = ivec.cbegin() ;               // 插入到旧元素之前，将返回指向新元素的迭代器赋予iter，再递增iter，此
    string tmp ;                                                       // 时iter将指向旧元素。继续执行仍会重复着几个步骤，程序陷入死循环。正
    while( iter != ivec.cend() ){                                      // 确的程序应该是将++iter移入循环体，再增加一个++iter，如本程序所示，
        if( *iter & 1 ){                                               // 令iter指向奇数之后的元素
            iter = ivec.insert( iter , *iter ) ;
            ++iter ;
        }
        ++iter ;
        for( const int i : ivec )                                      // 这一段效果同前，完整的结果需要多执行几次输入（总数不超过10次）
            cout << i << " " ;
        cout << endl;
        cin >> tmp ;
    }
    return 0;
}
