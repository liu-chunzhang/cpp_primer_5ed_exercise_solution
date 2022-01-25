// 本程序用于验证读者在练习18.12中的想法，并在必要的地方予以说明：TextQuery和QueryResult用命名空间chapter10包含，其余文件用chapter15包含后重构程序
#include "AndQuery.h"

std::string make_plural( size_t n , const std::string &s1 , const std::string &s2 ) ;
void runQueries( std::ifstream &in ) ;

int main() {
    chapter15::Query q = chapter15::Query( "fiery" ) & chapter15::Query( "bird" ) | chapter15::Query( "wind" ) ;
    std::ifstream in( "data.txt" ) ;
    chapter10::TextQuery tq( in ) ;
    std::cout << q.eval( tq ) << std::endl;
    return 0;
}

std::string make_plural( size_t n , const std::string &s1 , const std::string &s2 ){
    return ( n == 1 ) ? s1 : s1 + s2 ;
}

void runQueries( std::ifstream &in ){
    chapter10::TextQuery tq( in ) ;
    while( true ){
        std::cout << "请输入您要查找的英文单词，或按Ctrl+C退出：" ;
        std::string str ;
        if( !( std::cin >> str ) )
            break;
        std::cout << tq.queryresult( str ) << std::endl;
    }
}
