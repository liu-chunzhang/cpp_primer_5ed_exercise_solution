// 本程序用于验证读者在练习17.33中的想法，并在必要的地方予以说明
#include <ctime>                                                                          // 使用时间函数作为随机数种子，故添加此头文件
#include <fstream>
#include <iostream>
#include <map>
#include <random>                                                                         // 使用随机数必须的头文件
#include <sstream>
#include <vector>                                                                         // 添加原因见下
using namespace std;

const string& transform( const string& , const map<string,vector<string>>& ) ;      // 这里改为用vector<string>，以便于储存多种规则
map<string,vector<string>> buildMap( ifstream& ) ;
void word_transform( ifstream& , ifstream& ) ;

int main( int argc , char** argv )
{   ifstream rules( "rules.txt" ) , text( "text.txt" ) ;
    word_transform( rules , text ) ;
    return 0;
}

const string& transform( const string& s , const map<string,vector<string>>& m ){
    map<string,vector<string>>::const_iterator miter = m.find( s ) ;
    static default_random_engine e( time( 0 ) ) ;                                       // 静态随机数引擎变量保持状态
    if( miter != m.cend() ){
        uniform_int_distribution<unsigned> u( 0 , miter->second.size() - 1 ) ;         // 随机选择一种转换模式
        return miter->second[ u( e ) ] ;
    }
    else
        return s ;
}

map<string,vector<string>> buildMap( ifstream& map_file ){
    map<string,vector<string>> trans_map ;
    string key , value ;
    while( map_file >> key && getline( map_file , value ) )
        if( value.size() > 1 )
            trans_map[ key ].push_back( value.substr( 1 )  ) ;
        else
            throw runtime_error( "no rule for " + key ) ;
    return trans_map ;
}

void word_transform( ifstream& map_file , ifstream& input ){
    map<string,vector<string>> trans_map = buildMap( map_file ) ;
    string text , word ;
    while( getline( input , text ) ){
        istringstream stream( text ) ;
        stream >> word ;
        do                                                              // 此处进行了改动，将首单词以外单词前面加空格改为了一切单词后面加
            cout << transform( word , trans_map ) << " " ;             // 空格，显示是不变的，但是代码简化了，不必做选择
        while( stream >> word );
        cout << endl;
    }
}
