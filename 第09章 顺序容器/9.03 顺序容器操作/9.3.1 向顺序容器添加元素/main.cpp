// ������������֤�̲���9.3.1�����ݵĿɿ��ԣ����ṩ������֪
#include "Sales_data.h"
#include <list>
#include <vector>
void pluralize( size_t cnt , string &word ) ;

int main() {
    list<int> ilist ;
    for( size_t ix = 0 ; ix != 4 ; ++ix )
        ilist.push_front( ix ) ;
    for( const int i : ilist )
        cout << i << " " ;
    cout << endl;

    vector<string> svec2 ;
    list<string> slist = { "Welcome" , "to" , "C++" , "family" , "!" } ;
    slist.insert( slist.cbegin() , "Hello," ) ;
    svec2.insert( svec2.cbegin() , "Hello," ) ;
    for( const string &s : slist )
        cout << s << " " ;
    cout << endl;

    list<string> slist2 = { "Welcome" , "to" , "C++" , "family" , "!" } ;
    vector<string> svec3 = { "quasi" , "simba" , "frollo" , "scar" } ;
    slist2.insert( slist2.cbegin() , svec3.cend() - 2 , svec3.cend() ) ;
    slist2.insert( slist2.cend() , { "these" , "words" , "will" , "go" , "at" , "the" , "end" } ) ;
    for( const string &s : slist2 )
        cout << s << " " ;
    cout << endl;
    slist2.insert( slist2.cbegin() , slist2.begin() , slist2.end() ) ;
    for( const string &s : slist2 )
        cout << s << " " ;
    cout << endl;
    svec3.insert( svec3.cbegin() , svec3.cbegin() + 2 , svec3.cend() ) ;

    for( const string &s : svec3 )
        cout << s << " " ;

    string word ;
    list<string> lst ;
    list<string>::iterator iter = lst.begin() ;
    while( cin >> word )
        iter = lst.insert( iter , word ) ;

    list<Sales_data> c ;
    c.emplace_back( "978-05903533403" , 25 , 15.99 ) ;                // ʹ�����������Ĺ��캯��
  //c.push_back( "978-05903533403" , 25 , 15.99 ) ;                   // ����û�н������������İ汾
    c.push_back( Sales_data( "978-05903533403" , 25 , 15.99 ) ) ;    // ��ȷ������һ����ʱSales_data���󴫸�push_back

    c.emplace_back();                                                 // ʹ��Sales_data��Ĭ�Ϲ��캯��
    c.emplace( c.end() , "9-999-999999999" ) ;                        // ʹ��Sales_data��ֻ����ISBN�Ĺ��캯��
    c.emplace_front( "978-0590353403" , 25 , 15.99 ) ;                // ʹ��Sales_data�Ľ���һ��ISBN��һ��count��һ��price�Ĺ��캯��
    return 0;
}

void pluralize( size_t cnt , string& word ){
    if( cnt > 1 )
        word.push_back( 's' ) ;
}
