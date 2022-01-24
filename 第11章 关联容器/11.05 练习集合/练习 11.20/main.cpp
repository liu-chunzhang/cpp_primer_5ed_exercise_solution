// 本程序用于验证读者在练习11.20中的想法，并在必要的地方予以说明
#include <iostream>
#include <fstream>
#include <map>
using namespace std;

string &trans( string &s ) ;

int main() {
    map<string,size_t> str_num ;
    ifstream in( "data.txt" ) ;
    string str ;
    while( in >> str ){
        pair<map<string,size_t>::iterator,bool> ret = str_num.insert( { trans( str ) , 1 } ) ;
        if( !ret.second )
            ++ret.first->second ;
    }
    for( const pair<string,size_t> &i : str_num )
        cout << "单词" << i.first << "出现了" << i.second << "次。" << endl;
    return 0;
}

string &trans( string &s ){
    for( char &c : s )
        c = tolower( c ) ;
    for( size_t u = 0 ; u < s.size() ; ++u )
        if( ispunct( s[u] ) )
            s.erase( u , 1 ) ;
    return s ;
}

// 使用insert操作的方式是，构建一个pair(单词,1)，用insert将其插入容器，返回一个pair。若单词已存在，则返回pair的second成员为false，表示插入失败，
// 程序员还需要通过返回pair的first成员（迭代器）递增已有单词的计数器。判断单词是否存在，并进行相应操作的工作完全是由程序员自己负责的。
// 使用下标操作的方式是：以单词为下标获取元素值，若单词已存在，则提取出已有的值；否则，下标操作将pair(单词,0)插入容器，提取出新元素的值。单词是
// 否已经存在的相关处理完全是由下标操作处理的，程序员不必关心，直接访问提取出的值就行了。
// 无疑，对于当前问题而言，下标操作一是简洁，二是易懂，是更好的写法。
