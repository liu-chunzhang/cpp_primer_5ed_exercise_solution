// 本程序用于验证教材中11.3.5节内容的可靠性，并提供感性认知
#include <iostream>
#include <fstream>
#include <set>
#include <map>
using namespace std;

int main() {
    set<int> iset = { 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 , 34 , 55 } ;
    iset.find( 1 ) ;                                                        // 返回一个迭代器，指向key == 1的元素
    iset.find( 11 ) ;                                                       // 返回一个迭代器，其值等于iset.end()
    cout << iset.count( 1 ) << " " << iset.count( 11 ) << endl;

    multiset<int> iset2 = { 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 , 34 , 55 } ;
    cout << iset2.count( 1 ) << " " << iset2.count( 11 ) << endl;

    map<string,size_t> word_count ;
    ifstream in( "data.txt" ) ;
    string str ;
    while( in >> str )
        ++word_count[str] ;
    if( word_count.find( "foobar" ) == word_count.end() )
        cout << "foobar is not in the map." << endl;

    multimap<string,string> authors ;
    string search_item( "Alain de Botton" ) ;
    size_t entries = authors.count( search_item ) ;
    map<string,string>::iterator mssiter = authors.find( search_item ) ;
    for( ; entries ; ++mssiter , --entries )                                                                           // 写为for循环更为简练
        cout << mssiter->second << endl;
    for( map<string,string>::iterator beg = authors.lower_bound( search_item ) , ter = authors.upper_bound( search_item ) ; beg != ter ; ++beg )                                                                                        // 教材正文里for循环内容太长了，
        cout << beg->second << endl;                                                                                  // 分解成为几块来写
    for( pair<map<string,string>::iterator,map<string,string>::iterator> pos = authors.equal_range( search_item ) ; pos.first != pos.second ; ++pos.first )
        cout << pos.first->second << endl ;
    return 0;
}
