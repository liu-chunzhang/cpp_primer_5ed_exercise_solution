// 本程序用于验证教材中8.3.2节内容的可靠性，并提供感性认知
#include "PersonInfo.h"

string format( const string &s ) ;
bool valid( const string &s ) ;

int main() {
    vector<PersonInfo> people ;
    for( const PersonInfo &entry : people ){
        ostringstream formatted , badNums ;                             // 每个循环步创建的对象
        for( const string &nums : entry.phones ){                      // 对每个数
            if( !valid( nums ) )
                badNums << " " << nums ;                                // 将数的字符串形式存入badNums
            else
                formatted << " " << format( nums ) ;                    // 将格式化的字符串“写入”formatted
        }
        if( badNums.str().empty() )
            cout << entry.name << " " << formatted.str() << endl;                           // 没有错误的数
        else
            cerr << "输入错误：" << entry.name << "无效号码：" << badNums.str() << endl;    // 否则，打印名字和错误的数
    }
    return 0;
}

string format( const string &s ) {
    return s ;
}

bool valid( const string &s ) {
    return true ;
}
