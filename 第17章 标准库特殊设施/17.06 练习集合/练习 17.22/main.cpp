// 本程序用于验证读者在练习17.22中的想法，并在必要的地方予以说明
#include <fstream>
#include <regex>
#include <sstream>
#include <tuple>
#include "PersonInfo.h"

bool valid( const smatch &s ) ;
bool bracevalid( const smatch &s ) ;
bool prefixvalid( const smatch &s ) ;

int main() {
    vector<PersonInfo> people ;
    string line ;                              // 希望一般的格式为(+86)159 XXXX XXXX，只是空格数可以改变
    ifstream in( "data.txt" ) ;
    regex phone( "(\\()?(\\+)?(\\d{2})?(\\))?((\\s)*)?(\\d{3})((\\s)*)?(\\d{4})((\\s)*)?(\\d{4})" ) ;
    if( !in ){
        cerr << "您没有在合理地方放置待检测文件！" << endl;
        return -1 ;
    }
    while( getline( in , line ) ){                           // 获取一行后逐步拆解为单个词，这也是惯用手法了
        PersonInfo info ;                                    // 创建一个保存此程序的对象line以保存数据
        istringstream record( line ) ;                       // 由于每次都重新定义，所以不再clear对象record了。同时将记录绑定
        string temp ;
        record >> temp ;
        info.changeName( temp ) ;
        getline( record , line ) ;
        for( sregex_iterator it( line.begin() , line.end() , phone ) , end_it ; it != end_it ; ++it )
            if( valid( *it ) )
                info.push_back( "V" + it->str() ) ;
            else
                info.push_back( "I" + it->str() ) ;
        people.push_back( info ) ;
    }

    for( const PersonInfo &entry : people ){                        // 对people中的每一项
        ostringstream formatted , badNums ;                          // 每个循环步创建两个字符串输出流
        for( const string &nums : entry.getPhone() )          // 对于每个号码进行筛选判断
            if( nums[ 0 ] == 'I' )
                badNums << " " << nums.substr( 1 ) << endl;
            else
                formatted << " " << nums.substr( 1 ) << endl;
        if( badNums.str().empty() )                                         // 若无不合法号码，则打印名字和号码
            cout << entry.getname() << " " << formatted.str() << endl;
        else                                                                // 否则打印名字及错误号码
            cerr << "输入错误：" << entry.getname() << "无效号码：" << badNums.str() << endl;
    }
    return 0;
}

bool valid( const smatch &s ) {
    return prefixvalid( s ) && bracevalid( s ) ;
}

bool bracevalid( const smatch &s ) {
    return !( s[1].matched ^ s[4].matched ) ;
}

bool prefixvalid( const smatch &s ) {
    return !( s[2].matched ^ s[3].matched ) ;
}
