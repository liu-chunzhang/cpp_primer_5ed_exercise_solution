// ������������֤�̲���11.1�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <fstream>
#include <map>
#include <set>
using namespace std;

int main() {
    map<string,size_t> word_count ;
    string word ;
    ifstream in( "data.txt" ) ;                                                 // Ϊ���������Ч�ʣ����ı���������׼����
    while( in >> word )
        ++word_count[ word ] ;                                                  // ��ȡword�ļ�������ִ����������
    for( const pair<string,size_t> &w : word_count )
        cout << w.first << " occurs " << w.second << ( ( w.second > 1 ) ?  " times." : " time." ) << endl;

    set<string> exclude = { "The" , "But" , "And" , "Or" , "An" , "A" , "the" , "but" , "and" , "or" , "an" , "a" , } ;
    ifstream in2( "data.txt" ) ;
    while( in2 >> word )
        if( exclude.find( word ) == exclude.end() )                             // ֻͳ�Ʋ���exclude�е�Ԫ��
            ++word_count[ word ] ;
    for( const pair<string,size_t> &w : word_count )                          // ��map�е�ÿ��Ԫ��
        cout << w.first << " occurs " << w.second << ( ( w.second > 1 ) ?  " times." : " time." ) << endl;
    return 0;
}
