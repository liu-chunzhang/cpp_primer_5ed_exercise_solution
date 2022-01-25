// ������������֤��������ϰ12.28�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>
#include <set>
#include <memory>
using namespace std;

typedef vector<string>::size_type sentenceNo ;

string &trans( string &s ) ;
void print( const string &target , shared_ptr<set<sentenceNo>> stNo , shared_ptr<vector<string>> file ) ;

int main() {
    ifstream in( "data.txt" ) ;                                                                       // ��һ�����Ƿֽ�ԭ��
    shared_ptr<vector<string>> file( new vector<string> ) ;
    map<string,shared_ptr<set<sentenceNo>>> wm ;
    string sentence ;
    while( getline( in , sentence ) ){
        file->push_back( sentence ) ;
        sentenceNo i = file->size() - 1 ;
        istringstream line( sentence ) ;
        string word ;
        while( line >> word ){
            shared_ptr<set<sentenceNo>> &senten = wm[ trans( word ) ] ;
            if( !senten )
                senten.reset( new set<sentenceNo> ) ;
            senten->insert( i ) ;
        }
    }
    shared_ptr<set<sentenceNo>> noline( new set<sentenceNo> ) ;                                      // �ڶ������ǽ��в�ѯ���ʵ���Ϣ����
    while( true ){
        cout << "��������Ҫ���ҵ�Ӣ�ĵ��ʣ���Ctrl+C�˳���" ;
        string target ;
        if( !( cin >> target ) )
            break;
        map<string,shared_ptr<set<sentenceNo>>>::const_iterator mssciter = wm.find( target ) ;
        if( mssciter == wm.cend() )                                                                // �����������ж��������ӡ
            print( target , noline , file ) ;
        else
            print( target , mssciter->second , file ) ;
    }
    return 0;
}

string &trans( string &s ){
    for( char &c : s )
        c = tolower( c ) ;
    size_t temp = s.size() ;
    for( size_t u = 0 ; u != temp ; ++u )
        if( ispunct( s[u] ) )
            s.erase( u , 1 ) ;
    return s ;
}

void print( const string &target , shared_ptr<set<sentenceNo>> stNo , shared_ptr<vector<string>> file ){
    cout << target << "������" << stNo->size() << "�Σ�������ͬһ���г��ֶ�����Σ���" << endl;
    for( const sentenceNo num : *stNo )
        cout << "\t(��" << num + 1 << "��) " << *( file->cbegin() + num ) << endl;
}

// ��ӡ��������ʹ�ò�ֹһ�Σ������صر�д�����Ա��ظ�����
