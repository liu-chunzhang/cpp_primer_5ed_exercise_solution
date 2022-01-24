// 本程序用于验证读者在练习9.43中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

void replace( string &s , const string &oldVal , const string &newVal ) ;

int main() {
    string s = "I got thru the tunnel tho there are all difficulties." ;
    replace( s , "tho" , "though" ) ;
    replace( s , "thru" , "through" ) ;
    cout << s << endl;
    return 0;
}
                                                                                                  // 这是我写的版本
void replace( string &s , const string &oldVal , const string &newVal ){
    if( oldVal.empty() )                                                                         // 如果需要替换的词是空的，则不需要做任何事
        return ;
    for( string::iterator siter = s.begin() ; siter != s.end() ; ++siter )                     // 从字符串的第一个元素开始检查，终点是尾后
        if( *siter == *oldVal.cbegin() ){                                                        // 迭代器（不能减少oldVal.size，原因不明）
            string::iterator siter2 = siter ;                                                   // iter2用来记录遇到相同首字母的位置
            for( string::const_iterator oldsiter = oldVal.cbegin() ; ; ++oldsiter, ++siter )   // 检查首字母与oldVal相同下的情况
                if( *siter != *oldsiter )
                    break;                                                                       // 中间有一个字母不符合直接排除
                else if( oldsiter == oldVal.cend() - 1 ){                                       // 如果能够到这里，说明有oldVal的重复，先去
                    siter = s.erase( siter2 , ++siter ) ;                                        // 擦除siter2到++siter的内容（就是oldVal，
                    siter = s.insert( siter , newVal.cbegin() , newVal.cend() ) ;               // 注意判断条件是尾后迭代器进一），再在返回
                    break ;                                                                      // 的迭代器位置上进行填充即可
                }
        }
}
