// ������������֤�̲���11.3.5�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <fstream>
#include <set>
#include <map>
using namespace std;

int main() {
    set<int> iset = { 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 , 34 , 55 } ;
    iset.find( 1 ) ;                                                        // ����һ����������ָ��key == 1��Ԫ��
    iset.find( 11 ) ;                                                       // ����һ������������ֵ����iset.end()
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
    for( ; entries ; ++mssiter , --entries )                                                                           // дΪforѭ����Ϊ����
        cout << mssiter->second << endl;
    for( map<string,string>::iterator beg = authors.lower_bound( search_item ) , ter = authors.upper_bound( search_item ) ; beg != ter ; ++beg )                                                                                        // �̲�������forѭ������̫���ˣ�
        cout << beg->second << endl;                                                                                  // �ֽ��Ϊ������д
    for( pair<map<string,string>::iterator,map<string,string>::iterator> pos = authors.equal_range( search_item ) ; pos.first != pos.second ; ++pos.first )
        cout << pos.first->second << endl ;
    return 0;
}
