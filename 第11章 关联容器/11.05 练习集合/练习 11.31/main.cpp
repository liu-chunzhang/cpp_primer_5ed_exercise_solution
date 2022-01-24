// 本程序用于验证读者在练习11.31中的想法，并在必要的地方予以说明
#include <iostream>
#include <map>
using namespace std;

void delete_author( multimap<string,string> &mssmap , const string &s ) ;
void print( multimap<string,string> &mssmap ) ;

int main() {
    multimap<string,string> bookstack ;
    bookstack.insert( { "古龙" , "绝代双骄" } ) ;
    bookstack.insert( { "古龙" , "欢乐英雄" } ) ;
    bookstack.insert( { "金庸" , "笑傲江湖" } ) ;
    bookstack.insert( { "金庸" , "天龙八部" } ) ;
    bookstack.insert( { "金庸" , "鹿鼎记" } ) ;
    cout << "书库里现有的著作为" << endl;
    print( bookstack ) ;
    cout << "如果删除目前书库里梁羽生的著作的话，书库的藏书情况为：" << endl;
    delete_author( bookstack , "梁羽生" ) ;
    print( bookstack ) ;
    delete_author( bookstack , "古龙" ) ;
    cout << "如果要删除目前书库里古龙的著作的话，书库的藏书情况为：" << endl;
    print( bookstack ) ;
    return 0;
}

void delete_author( multimap<string,string> &mssmap , const string &s ){
    if( mssmap.find( s ) == mssmap.end() )
        cout << "书库里还没有" << s << "的书籍！" << endl;
    else
        mssmap.erase( mssmap.lower_bound( s ) , mssmap.upper_bound( s ) ) ;
}

void print( multimap<string,string> &mssmap ){
    for( const pair<string,string> &pss : mssmap )
        cout << pss.first << " " << pss.second << endl;
}
