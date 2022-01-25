// 本程序用于验证读者在练习12.28中的想法，并在必要的地方予以说明
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>
#include <set>
#include <memory>
using namespace std;

typedef vector<string>::size_type sentenceNo ;

string &trans( string &s ) ;
void print( const string &target , shared_ptr<set<sentenceNo>> stNo , shared_ptr<vector<string>> file ) ;

int main() {
    ifstream in( "data.txt" ) ;                                                                       // 第一部分是分解原文
    shared_ptr<vector<string>> file( new vector<string> ) ;
    map<string,shared_ptr<set<sentenceNo>>> wm ;
    string sentence ;
    while( getline( in , sentence ) ){
        file->push_back( sentence ) ;
        sentenceNo i = file->size() - 1 ;
        istringstream line( sentence ) ;
        string word ;
        while( line >> word ){
            shared_ptr<set<sentenceNo>> &senten = wm[ trans( word ) ] ;
            if( !senten )
                senten.reset( new set<sentenceNo> ) ;
            senten->insert( i ) ;
        }
    }
    shared_ptr<set<sentenceNo>> noline( new set<sentenceNo> ) ;                                      // 第二部分是进行查询单词的信息整合
    while( true ){
        cout << "请输入您要查找的英文单词，或按Ctrl+C退出：" ;
        string target ;
        if( !( cin >> target ) )
            break;
        map<string,shared_ptr<set<sentenceNo>>>::const_iterator mssciter = wm.find( target ) ;
        if( mssciter == wm.cend() )                                                                // 第三部分是判断情况并打印
            print( target , noline , file ) ;
        else
            print( target , mssciter->second , file ) ;
    }
    return 0;
}

string &trans( string &s ){
    for( char &c : s )
        c = tolower( c ) ;
    size_t temp = s.size() ;
    for( size_t u = 0 ; u != temp ; ++u )
        if( ispunct( s[u] ) )
            s.erase( u , 1 ) ;
    return s ;
}

void print( const string &target , shared_ptr<set<sentenceNo>> stNo , shared_ptr<vector<string>> file ){
    cout << target << "出现了" << stNo->size() << "次（不计入同一句中出现多次情形）。" << endl;
    for( const sentenceNo num : *stNo )
        cout << "\t(第" << num + 1 << "次) " << *( file->cbegin() + num ) << endl;
}

// 打印程序由于使用不止一次，所以特地编写函数以便重复利用
