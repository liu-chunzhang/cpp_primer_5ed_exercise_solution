// ������������֤��������ϰ14.40�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <algorithm>
#include <fstream>
#include <vector>
#include "ShorterString.h"
#include "SizeCompare.h"
#include "PrintString.h"

void elimDups( vector<string> &words ) ;
void biggies( vector<string> &words , vector<string>::size_type sz ) ;
string make_plural( size_t ctr , const string &word, const string &ending ) ;

int main() {
    ifstream in( "data.txt" ) ;
    vector<string> svec ;
    string str ;
    while( in >> str )
        svec.push_back( str ) ;
    biggies( svec , 10 ) ;
    return 0;
}

void elimDups( vector<string> &words ){
    sort( words.begin() , words.end() ) ;
    vector<string>::iterator iter = unique( words.begin() , words.end() ) ;
    words.erase( iter , words.end() ) ;
}

void biggies( vector<string> &words , vector<string>::size_type sz ) {
    elimDups( words ) ;
    stable_sort( words.begin() , words.end() , ShorterString() ) ;                                // ����������޸�
    vector<string>::iterator wc = find_if( words.begin() , words.end() , SizeCompare( sz ) ) ;  // ����������޸�
    size_t count_num = words.end() - wc ;
    cout << count_num << " " << make_plural( count_num , "word" , "s" ) << " of length " << sz << " or longer" << endl;
    for_each( wc , words.end() , PrintString() ) ;                                                            // ����������޸�
    cout << endl;
}

string make_plural( size_t ctr , const string &word, const string &ending ){
  return ( ctr == 1 ) ? word : word + ending ;
}
