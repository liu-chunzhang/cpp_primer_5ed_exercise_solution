// ������������֤��������ϰ9.49�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <fstream>
using namespace::std;

bool valid( const string &str ) ;

int main() {
    ifstream in( "data.txt" ) ;
    string temp , maxword ;
    while( in >> temp )
        if( valid( temp ) )
            if( temp.size() > maxword.size() )
                maxword = temp ;
    if( maxword.size() != 0 )
        cout << maxword << endl;
    else
        cout << "�ڵ�ǰ�ļ���û��������û���ϳ�ͷ���֣�Ҳû���³�ͷ���ֵĵ��ʣ��ʷ��ؿմ���" << endl;
    return 0;
}

bool valid( const string &str ) {
    if( str.find_first_of( "bdfhijklt" ) != string::npos )
        return false ;
    if( str.find_first_of( "fgjpqy" ) != string::npos )
        return false ;
    return true ;
}
