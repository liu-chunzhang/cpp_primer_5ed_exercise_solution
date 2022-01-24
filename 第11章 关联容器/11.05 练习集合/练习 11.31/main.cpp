// ������������֤��������ϰ11.31�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <map>
using namespace std;

void delete_author( multimap<string,string> &mssmap , const string &s ) ;
void print( multimap<string,string> &mssmap ) ;

int main() {
    multimap<string,string> bookstack ;
    bookstack.insert( { "����" , "����˫��" } ) ;
    bookstack.insert( { "����" , "����Ӣ��" } ) ;
    bookstack.insert( { "��ӹ" , "Ц������" } ) ;
    bookstack.insert( { "��ӹ" , "�����˲�" } ) ;
    bookstack.insert( { "��ӹ" , "¹����" } ) ;
    cout << "��������е�����Ϊ" << endl;
    print( bookstack ) ;
    cout << "���ɾ��Ŀǰ������������������Ļ������Ĳ������Ϊ��" << endl;
    delete_author( bookstack , "������" ) ;
    print( bookstack ) ;
    delete_author( bookstack , "����" ) ;
    cout << "���Ҫɾ��Ŀǰ���������������Ļ������Ĳ������Ϊ��" << endl;
    print( bookstack ) ;
    return 0;
}

void delete_author( multimap<string,string> &mssmap , const string &s ){
    if( mssmap.find( s ) == mssmap.end() )
        cout << "����ﻹû��" << s << "���鼮��" << endl;
    else
        mssmap.erase( mssmap.lower_bound( s ) , mssmap.upper_bound( s ) ) ;
}

void print( multimap<string,string> &mssmap ){
    for( const pair<string,string> &pss : mssmap )
        cout << pss.first << " " << pss.second << endl;
}
