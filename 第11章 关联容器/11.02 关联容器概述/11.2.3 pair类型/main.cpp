// 本程序用于验证教材中11.2.3节内容的可靠性，并提供感性认知
#include <iostream>
#include <vector>
using namespace std;

pair<string,int> process( vector<string> &v ) ;

int main() {
    pair<string,string> anon ;
    pair<string,size_t> word_count ;
    pair<string,vector<int>> line ;
    pair<string,string> author = { "James" , "Joyce" } ;
    cout << author.first << " " << author.second << endl;
    return 0;
}

pair<string,int> process( vector<string> &v ){
    if( !v.empty() )
        return { v.back() , v.back().size() } ;     // 列表初始化
    else
        return pair<string,int>() ;                 // 隐式构造返回值
}
