// ������������֤��������ϰ17.18�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <functional>
#include <regex>
#include <vector>
using namespace std;
using std::placeholders::_1 ;

int main() {
    string pattern( "[^c]ei" ) , word ;                                   // ���ڲ��Եĵ��ʴ���receipt freind theif receive albeit
    pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*" ;
    regex r( pattern , regex::icase ) ;
    vector<string> svec = { "albeit" , "neighbor" } ;
    cout << "������һ������ѯ�ĵ��ʣ���Ctrl+Cֹͣ:" << endl;
    while( getline( cin , word ) ){
        for( sregex_iterator it( word.begin() , word.end() , r ) , end_it ; it != end_it ; ++it )
            if( find( svec.begin() , svec.end() , it->str() ) == svec.end() )
                cout << it->str() << " " ;
        cout << endl;
        cout << "������һ������ѯ�ĵ��ʣ���Ctrl+Cֹͣ:" << endl;
    }
    return 0;
}
