// ������������֤�̲���11.3.6�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
using namespace std;

const string &transform( const string &s , const map<string,string> &m ) ;
map<string,string> buildMap( ifstream &map_file ) ;
void word_transform( ifstream &map_file , ifstream &input ) ;

int main() {
    ifstream rules( "rules.txt" ) , text( "text.txt" ) ;
    word_transform( rules , text ) ;
    return 0;
}

const string &transform( const string &s , const map<string,string> &m ){      // �����������ִ��ת������
    map<string,string>::const_iterator miter = m.find( s ) ;
    if( miter != m.cend() )                                                         // ���������ת��������
        return miter->second ;                                                      // ʹ���滻����
    else
        return s ;                                                                  // ���򷵻�ԭ����
}

map<string,string> buildMap( ifstream &map_file ){                                // ���������������ת������
    map<string,string> trans_map ;                                                 // ����ת������
    string key ;                                                                    // Ҫ�滻�ĵ���
    string value ;                                                                  // �滻�������
    while( map_file >> key && getline( map_file , value ) )                         // ��ȡ��һ�����ʴ���key�У�����ʣ�����ݴ���value
        if( value.size() > 1 )                                                      // ����Ƿ���ת������
            trans_map[key] = value.substr( 1 ) ;                                    // ����ǰ���ո�
        else
            throw runtime_error( "no rule for " + key ) ;
    return trans_map ;
}

void word_transform( ifstream &map_file , ifstream &input ){                       // �˺������ڹ�����������
    map<string,string> trans_map = buildMap( map_file ) ;                          // ����ת������
    string text ;                                                                   // ���������е�ÿһ��
    while( getline( input , text ) ){                                               // ��ȡһ������
        istringstream stream( text ) ;                                              // ��ȡÿ������
        string word ;
        bool firstword = true ;                                                     // ��ӡ�ո�Ŀ��ر���
        while( stream >> word ){
            if( firstword )
                firstword = false ;                                                 // ��һ�����ʲ���Ҫǰ�ÿո񣬵���֮��ÿһ������Ҫ
            else
                cout << " " ;                                                       // ���ǵ�һ�����ʣ����ڵ��ʼ��ӡһ���ո�
            cout << transform( word , trans_map ) ;                                // transform����������һ����������ת�������ʽ
        }
        cout << endl;                                                               // ���һ�е�ת��
    }
}
