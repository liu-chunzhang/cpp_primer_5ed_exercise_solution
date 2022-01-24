// ������������֤�̲���11.3.2�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;

void print( set<int> &iset ) ;

int main() {
    vector<int> ivec = { 2 , 4 , 6 , 8 , 2 , 4 , 6 , 8 } ;
    set<int> set2 ;
    set2.insert( ivec.cbegin() , ivec.cend() ) ;
    print( set2 ) ;
    set2.insert( { 1 , 3 , 5 , 7 , 1 , 3 , 5 , 7 ,} ) ;
    print( set2 ) ;

    map<string,size_t> word_count ;
    string word = "hello world!" ;
    word_count.insert( { word , 1 } ) ;
    word_count.insert( make_pair( word , 1 ) ) ;
    word_count.insert( pair<string,int>( word , 1 ) ) ;
    word_count.insert( map<string,size_t>::value_type( word , 1 ) ) ;

    map<string,size_t> word_count2 ;                                                            // ��string��size_t�Ŀ�map
    string word2 ;
    while( cin >> word2 ){
        pair<map<string,size_t>::iterator,bool> ret = word_count2.insert( { word2 , 1 } ) ;  // ����һ��Ԫ�أ��ؼ��ֵ���word��ֵΪ1����word
        if( !ret.second )                                                                        // ����word_count�У�����ʲôҲ������
            ++ret.first->second ;                                                                // ����ret->second��false����˵��û�з��������
    }                                                                                            // ������Ҫ����ǰ�е���Ӧλ�ò�������������

    multimap<string,string> authors ;
    authors.insert( { "Barth, John" , "Sot-Weed Factor" } ) ;
    authors.insert( { "Barth, John" , "Lost in the Funhouse" } ) ;                               // ��ȷ��multimap������ͬ�ؼ��ֳ��ֶ��
    return 0;
}

void print( set<int> &iset ){
    for( const int i : iset )
        cout << i << " " ;
    cout << endl;
}
