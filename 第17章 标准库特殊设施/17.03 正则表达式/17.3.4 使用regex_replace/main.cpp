// ������������֤�̲���17.3.4�����ݵĿɿ��ԣ����ṩ������֪
#include <fstream>
#include <iostream>
#include <regex>
using namespace std;        // С��ʾ������������ģ����������Ӧ������ӱ��ʽ([\u4e00-\u9fa5])
using std::regex_constants::format_no_copy ;

int main() {
    string phone = "(\\()?(\\d{3})(\\))?([-. ])?(\\d{3})([-. ])?(\\d{4})" , fmt = "$2.$5.$7" , number = "(908) 555-1800" ;
    regex r( phone ) ;
    cout << regex_replace( number , r , fmt ) << endl;

    ifstream in( "data.txt" ) ;
    string phone2 = "(\\()?(\\d{3})(\\))?([-. ])?(\\d{3})([-. ])?(\\d{4})" ;
    string temp ;
    while( getline( in , temp ) )
        cout << regex_replace( temp , r , fmt ) << endl;
    cout << endl;

    in.clear() ;                                            // Ϊ����������ifstream����in���ر�ָ���Ϸ���
    string fmt2 = "$2.$5.$7 " ;                             // ֻ���ɵ绰���룺ʹ���µĸ�ʽ�ַ����������һ���ֺ������ÿո���Ϊ�ָ���
    in.seekg( 0 , fstream::beg ) ;                          // ���¶��嵽���������
    while( getline( in , temp ) )
        cout << regex_replace( temp , r , fmt2 , format_no_copy ) << endl;     // ֪ͨregex_replaceֻ�������滻���ı�
    return 0;
}
