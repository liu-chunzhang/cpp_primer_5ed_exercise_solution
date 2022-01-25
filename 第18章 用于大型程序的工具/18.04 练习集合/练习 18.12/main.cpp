// ������������֤��������ϰ18.12�е��뷨�����ڱ�Ҫ�ĵط�����˵����TextQuery��QueryResult�������ռ�chapter10�����������ļ���chapter15�������ع�����
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
        std::cout << "��������Ҫ���ҵ�Ӣ�ĵ��ʣ���Ctrl+C�˳���" ;
        std::string str ;
        if( !( std::cin >> str ) )
            break;
        std::cout << tq.queryresult( str ) << std::endl;
    }
}
