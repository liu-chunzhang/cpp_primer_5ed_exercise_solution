// 本程序用于验证读者在练习17.25中的想法，并在必要的地方予以说明
#include <fstream>
#include <iomanip>
#include <regex>
#include <sstream>
#include <tuple>
#include "PersonInfo.h"

bool valid( const smatch &s ) ;
bool bracevalid( const smatch &s ) ;
bool prefixvalid( const smatch &s ) ;
bool suffixvalid( const smatch &s ) ;

int main() {
    vector<PersonInfo> people ;                                                          // 保存从输入读取的所有记录
    string line ;
    ifstream in( "data.txt" ) ;                                                          // 文件流输入口
    regex phone( "(\\()?([+])?(\\d{2})?(\\))?(\\d{3})([ ])?(\\d{4})([ ])?(\\d{4})" ) ;   // 希望一般的格式为(+86)159 XXXX XXXX，这点不变
    smatch m ;                                                                           // 保存用于匹配的smatch
    if( !in ){
        cerr << "未找到并打开指定文件！" << endl;
        return -1 ;
    }

    while( getline( in , line ) ){                           // 获取一行后逐步拆解为单个词，这也是惯用手法了
        PersonInfo info ;                                    // 创建一个保存此程序的对象line以保存数据
        istringstream record( line ) ;                       // 由于每次都重新定义，所以不再clear对象record了。同时将记录绑定
        string temp ;
        record >> temp ;
        info.changeName( temp ) ;
        getline( record , line ) ;
        regex_search( line , m , phone ) ;
        info.push_back( m.str() ) ;
        people.push_back( info ) ;
    }

    for( const PersonInfo &entry : people )                                                               // 对people中的每一项
        cout << left << setw( 10 ) << entry.getname() << setw( 15 ) << entry.getPhone()[0] << endl;
    return EXIT_SUCCESS ;
}

bool valid( const smatch &s ) {
    return prefixvalid( s ) && bracevalid( s ) && suffixvalid( s ) ;
}

bool bracevalid( const smatch &s ) {
    return !( s[1].matched ^ s[4].matched ) ;
}

bool prefixvalid( const smatch &s ) {
    return !( s[2].matched ^ s[3].matched ) ;
}

bool suffixvalid( const smatch &s ) {
    return !( s[7].matched ^ s[9].matched ) ;
}
