// 本程序用于验证读者在练习8.13中的想法，并在必要的地方予以说明
#include <fstream>                                            // 既然选择从命名文件里读取数据，那么这个库文件是必不可少的
#include <sstream>
#include "PersonInfo.h"

string format( const string &s ) ;
bool valid( const string &s ) ;

int main() {
    vector<PersonInfo> people ;
    string line , word ;
    ifstream in( "data.txt" ) ;

    while( getline( in , line ) ){
        PersonInfo info ;                                    // 创建一个保存此程序的对象line以保存数据
        istringstream record( line ) ;                       // 由于每次都重新定义，所以不再clear对象record了。同时将记录绑定
        record >> info.name ;
        while( record >> word )
            info.phones.push_back( word ) ;
        people.push_back( info ) ;
    }

    for( const PersonInfo &entry : people ){                // 这一部分基本拷贝自8.3.2节，只是明确了auto关键字所指的类型
        ostringstream formatted , badNums ;
        for( const string &nums : entry.phones ){
            if( !valid( nums ) )
                badNums << " " << nums ;
            else
                formatted << " " << format( nums ) ;
        }
        if( badNums.str().empty() )
            cout << entry.name << " " << formatted.str() << endl;
        else
            cerr << "输入错误：" << entry.name << "无效号码：" << badNums.str() << endl;
    }
    return 0;
}

string format( const string &s ) {
    return s ;
}

bool valid( const string &s ) {
    return true ;
}
