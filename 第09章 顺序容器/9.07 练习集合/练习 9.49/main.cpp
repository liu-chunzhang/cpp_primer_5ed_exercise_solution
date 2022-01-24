// 本程序用于验证读者在练习9.49中的想法，并在必要的地方予以说明
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
        cout << "在当前文件里没检索到既没有上出头部分，也没有下出头部分的单词！故返回空串。" << endl;
    return 0;
}

bool valid( const string &str ) {
    if( str.find_first_of( "bdfhijklt" ) != string::npos )
        return false ;
    if( str.find_first_of( "fgjpqy" ) != string::npos )
        return false ;
    return true ;
}
