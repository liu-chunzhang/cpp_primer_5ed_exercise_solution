// 本程序用于验证教材中17.3.4节内容的可靠性，并提供感性认知
#include <fstream>
#include <iostream>
#include <regex>
using namespace std;        // 小提示：如果想检查中文，请务必在相应处添加子表达式([\u4e00-\u9fa5])
using std::regex_constants::format_no_copy ;

int main() {
    string phone = "(\\()?(\\d{3})(\\))?([-. ])?(\\d{3})([-. ])?(\\d{4})" , fmt = "$2.$5.$7" , number = "(908) 555-1800" ;
    regex r( phone ) ;
    cout << regex_replace( number , r , fmt ) << endl;

    ifstream in( "data.txt" ) ;
    string phone2 = "(\\()?(\\d{3})(\\))?([-. ])?(\\d{3})([-. ])?(\\d{4})" ;
    string temp ;
    while( getline( in , temp ) )
        cout << regex_replace( temp , r , fmt ) << endl;
    cout << endl;

    in.clear() ;                                            // 为了重新利用ifstream变量in，特别恢复其合法性
    string fmt2 = "$2.$5.$7 " ;                             // 只生成电话号码：使用新的格式字符串，在最后一部分号码后放置空格作为分隔符
    in.seekg( 0 , fstream::beg ) ;                          // 重新定义到输出流开端
    while( getline( in , temp ) )
        cout << regex_replace( temp , r , fmt2 , format_no_copy ) << endl;     // 通知regex_replace只拷贝其替换的文本
    return 0;
}
