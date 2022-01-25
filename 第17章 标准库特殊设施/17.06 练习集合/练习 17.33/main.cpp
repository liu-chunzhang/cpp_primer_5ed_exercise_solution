// ������������֤��������ϰ17.33�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <ctime>                                                                          // ʹ��ʱ�亯����Ϊ��������ӣ�����Ӵ�ͷ�ļ�
#include <fstream>
#include <iostream>
#include <map>
#include <random>                                                                         // ʹ������������ͷ�ļ�
#include <sstream>
#include <vector>                                                                         // ���ԭ�����
using namespace std;

const string& transform( const string& , const map<string,vector<string>>& ) ;      // �����Ϊ��vector<string>���Ա��ڴ�����ֹ���
map<string,vector<string>> buildMap( ifstream& ) ;
void word_transform( ifstream& , ifstream& ) ;

int main( int argc , char** argv )
{   ifstream rules( "rules.txt" ) , text( "text.txt" ) ;
    word_transform( rules , text ) ;
    return 0;
}

const string& transform( const string& s , const map<string,vector<string>>& m ){
    map<string,vector<string>>::const_iterator miter = m.find( s ) ;
    static default_random_engine e( time( 0 ) ) ;                                       // ��̬����������������״̬
    if( miter != m.cend() ){
        uniform_int_distribution<unsigned> u( 0 , miter->second.size() - 1 ) ;         // ���ѡ��һ��ת��ģʽ
        return miter->second[ u( e ) ] ;
    }
    else
        return s ;
}

map<string,vector<string>> buildMap( ifstream& map_file ){
    map<string,vector<string>> trans_map ;
    string key , value ;
    while( map_file >> key && getline( map_file , value ) )
        if( value.size() > 1 )
            trans_map[ key ].push_back( value.substr( 1 )  ) ;
        else
            throw runtime_error( "no rule for " + key ) ;
    return trans_map ;
}

void word_transform( ifstream& map_file , ifstream& input ){
    map<string,vector<string>> trans_map = buildMap( map_file ) ;
    string text , word ;
    while( getline( input , text ) ){
        istringstream stream( text ) ;
        stream >> word ;
        do                                                              // �˴������˸Ķ������׵������ⵥ��ǰ��ӿո��Ϊ��һ�е��ʺ����
            cout << transform( word , trans_map ) << " " ;             // �ո���ʾ�ǲ���ģ����Ǵ�����ˣ�������ѡ��
        while( stream >> word );
        cout << endl;
    }
}
