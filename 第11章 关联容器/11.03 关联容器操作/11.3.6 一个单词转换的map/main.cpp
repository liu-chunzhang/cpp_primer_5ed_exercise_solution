// 本程序用于验证教材中11.3.6节内容的可靠性，并提供感性认知
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
using namespace std;

const string &transform( const string &s , const map<string,string> &m ) ;
map<string,string> buildMap( ifstream &map_file ) ;
void word_transform( ifstream &map_file , ifstream &input ) ;

int main() {
    ifstream rules( "rules.txt" ) , text( "text.txt" ) ;
    word_transform( rules , text ) ;
    return 0;
}

const string &transform( const string &s , const map<string,string> &m ){      // 这个函数用来执行转换规则
    map<string,string>::const_iterator miter = m.find( s ) ;
    if( miter != m.cend() )                                                         // 如果单词在转换规则中
        return miter->second ;                                                      // 使用替换短语
    else
        return s ;                                                                  // 否则返回原单词
}

map<string,string> buildMap( ifstream &map_file ){                                // 这个函数用来建立转换规则
    map<string,string> trans_map ;                                                 // 保存转换规则
    string key ;                                                                    // 要替换的单词
    string value ;                                                                  // 替换后的内容
    while( map_file >> key && getline( map_file , value ) )                         // 读取第一个单词存入key中，行中剩余内容存入value
        if( value.size() > 1 )                                                      // 检查是否有转换规则
            trans_map[key] = value.substr( 1 ) ;                                    // 跳过前导空格
        else
            throw runtime_error( "no rule for " + key ) ;
    return trans_map ;
}

void word_transform( ifstream &map_file , ifstream &input ){                       // 此函数用于管理整个过程
    map<string,string> trans_map = buildMap( map_file ) ;                          // 保存转换规则
    string text ;                                                                   // 保存输入中的每一行
    while( getline( input , text ) ){                                               // 读取一行输入
        istringstream stream( text ) ;                                              // 读取每个单词
        string word ;
        bool firstword = true ;                                                     // 打印空格的开关变量
        while( stream >> word ){
            if( firstword )
                firstword = false ;                                                 // 第一个单词不需要前置空格，但是之后每一个都需要
            else
                cout << " " ;                                                       // 不是第一个单词，就在单词间打印一个空格
            cout << transform( word , trans_map ) ;                                // transform返回了它第一个参数或者转换后的形式
        }
        cout << endl;                                                               // 完成一行的转换
    }
}
