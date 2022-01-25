// ������������֤��������ϰ17.3�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "TextQuery.h"

string make_plural( size_t n , const string &s1 , const string &s2 ) ;
ostream& print( ostream& , const TextQuery::Queryresult &t ) ;
void runQueries( ifstream& ) ;

int main() {
    ifstream in( "data.txt" ) ;                     // ��Ȼ�����ԸĽ���������ݴ�Сд�����Ա�����Ӱ��ȡ�
    runQueries( in ) ;                               // ���������ĵײ��߼����ǳ����ӣ���QueryResult��ûʲô�ر�Ĺ��ܣ�����ֱ��ɾ����
    return 0;                                       // ��tuple<string,shared_ptr<set<line_no>>,shared_ptr<vector<string>>>�ʶȴ���Ϳɡ�
}
                                                    // ����ѯ���ֻ����ʱʹ�ã������Ͷ�������ʹ��tuple����Ч����������ѯ���������
void runQueries( ifstream& in ) {                  // ����������������QueryResult�����
    TextQuery tq( in ) ;
    string str ;
    while( 1 ){
        cout << "������������data.txt�ļ�������ĵ��ʣ���Ctrl+C��ֹͣ���г���" ;
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
