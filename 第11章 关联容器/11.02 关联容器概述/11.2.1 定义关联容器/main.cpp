// 本程序用于验证教材中11.2.1节内容的可靠性，并提供感性认知
#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main() {
    map<string,size_t> word_count ;
    set<string> exclude = { "The" , "But" , "And" , "Or" , "An" , "A" , "the" , "but" , "and" , "or" , "an" , "a" } ;
    map<string,string> authors = { { "Joyce" , "James" } , { "Austen" , "Jane" } , { "Dicken" , "Charles" } } ;

    vector<int> ivec ;
    for( vector<int>::size_type i = 0 ; i != 10 ; ++i ){                                     // 定义一个有20个元素的vector，保存0到9每个整数
        ivec.push_back( i ) ;                                                                 // 的两个拷贝
        ivec.push_back( i ) ;
    }
    set<int> iset( ivec.cbegin() , ivec.cend() ) ;
    multiset<int> miset( ivec.cbegin() , ivec.cend() ) ;
    cout << ivec.size() << endl;                                                              // 打印为20，符合于我们的预期
    cout << iset.size() << endl;                                                              // 打印出10：iset包含来自ivec的不重复的元素
    cout << miset.size() << endl;                                                             // 打印出20：miset包含所有的20个元素
    return 0;
}
