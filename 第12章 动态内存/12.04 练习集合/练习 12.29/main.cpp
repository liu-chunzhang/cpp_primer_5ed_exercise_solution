// ������������֤��������ϰ12.29�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "TextQuery.h"

void runQueries( ifstream &infile ) ;

int main() {
    ifstream in( "data.txt" ) ;
    runQueries( in ) ;

    return 0;
}

string& trans( string& s ){
    for( char &c : s )
        c = tolower( c ) ;
    for( size_t u = 0 ; u < s.size() ; ++u )
        if( ispunct( s[u] ) )
            s.erase( u , 1 ) ;
    return s ;
}

void runQueries( ifstream &infile ) {
    TextQuery tq( infile ) ;
    do{                                                            // ��ʵ��Ч����ûʲô��ͬ����Ϊѭ��������ͬ����
        cout << "��������Ҫ���ҵ�Ӣ�ĵ��ʣ���Ctrl+C�˳���" ;
        string target ;
        if( !( cin >> target ) )
            break;
        cout << tq.queryresult( target ) ;
    }while( true ) ;
}
