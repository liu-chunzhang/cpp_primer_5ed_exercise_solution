// 本程序用于验证读者在练习9.28中的想法，并在必要的地方予以说明
#include <iostream>
#include <forward_list>
using namespace std;

void insert_afterAString( forward_list<string> &sflst , const string &s1 , const string &s2  ) ;

int main() {
    forward_list<string> sflst = { "Welcome" , "to" , "C++" , "family" } ;                          // 第一次打印是为了和之后两次做比较
    for( const string &str : sflst )
        cout << str << " " ;
    cout << endl;
    insert_afterAString( sflst , "C++" ,"!" ) ;                                                       // 第二次打印检验在有所需字符串时效果
    for( const string &str : sflst )
        cout << str << " " ;
    cout << endl ;
    insert_afterAString( sflst , "hello" ,"?" ) ;                                                     // 第三次打印检验没有所需字符串时效果
    for( const string &str : sflst )
        cout << str << " " ;
}

void insert_afterAString( forward_list<string>& sflst , const string& s1 , const string& s2 ){
    forward_list<string>::const_iterator sflstpre = sflst.before_begin() , sflstcurr = sflst.cbegin() ;
    while( sflstcurr != sflst.cend() )
        if( *sflstcurr == s1 ){
            sflst.insert_after( sflstcurr , s2 ) ;                                                    // 找到匹配的串，令curr指向它
            return ;
        }
        else
            sflstpre = sflstcurr++ ;                                                                 // 未找到指定字符串则插入尾后
    sflst.insert_after( sflstpre , s2 ) ;
}

// 如果想使用函数find返回迭代器，那么当找不到s1时，find返回的已经是尾后迭代器了，而foeward_list的迭代器也没有递减操作，得不到指向forward_list
// 的最后元素所在的迭代器，就没办法处理这种情况了！所以尽管看起来使用泛型算法似乎更简洁，但是由于无法顾虑到这些情况，只能作罢
