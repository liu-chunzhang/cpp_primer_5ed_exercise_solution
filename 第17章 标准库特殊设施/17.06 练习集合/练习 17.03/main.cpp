// 本程序用于验证读者在练习17.3中的想法，并在必要的地方予以说明
#include "TextQuery.h"

string make_plural( size_t n , const string &s1 , const string &s2 ) ;
ostream& print( ostream& , const TextQuery::Queryresult &t ) ;
void runQueries( ifstream& ) ;

int main() {
    ifstream in( "data.txt" ) ;                     // 当然还可以改进，比如兼容大小写，忽略标点符号影响等。
    runQueries( in ) ;                               // 由于这程序的底层逻辑不非常复杂，且QueryResult类没什么特别的功能，所以直接删掉，
    return 0;                                       // 用tuple<string,shared_ptr<set<line_no>>,shared_ptr<vector<string>>>适度代替就可。
}
                                                    // 若查询结果只是临时使用，输出后就丢弃，则使用tuple简单有效；否则，若查询结果还可以
void runQueries( ifstream& in ) {                  // 进行其他处理，则定义QueryResult类更好
    TextQuery tq( in ) ;
    string str ;
    while( 1 ){
        cout << "请输入您想在data.txt文件里检索的单词，按Ctrl+C可停止运行程序：" ;
        if( !( cin >> str ) )
            break ;
        print( cout , tq.queryresult( str ) ) ;
    }
}

string make_plural( size_t n , const string &s1 , const string &s2 ) {
    return ( n == 1 ) ? s1 : s1 + s2 ;
}

ostream& print( ostream &out , const TextQuery::Queryresult &t ) {
    out << get<0>( t ) << " occurs " << get<2>( t )->size() << " " << make_plural( get<2>( t )->size() , "time" , "s" ) << endl;
    for( TextQuery::lineNo num : *get<2>( t ) )
        out << "(line " << num + 1 << ") " << *( get<1>( t )->begin() + num ) << endl;
    return out ;
}
