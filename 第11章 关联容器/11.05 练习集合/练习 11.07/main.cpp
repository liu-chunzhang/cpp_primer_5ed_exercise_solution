// 本程序用于验证读者在练习11.7中的想法，并在必要的地方予以说明
#include <iostream>
#include <map>
#include <vector>
using namespace std;

void add_family( map<string,vector<string>>& , const string& ) ;
void add_child( map<string,vector<string>>& , const string& , const string& ) ;

int main()
{   map<string,vector<string>> families ;
    add_family( families , "赵" ) ;
    add_child( families , "赵" , "刚" ) ;
    add_child( families , "赵" , "懿" ) ;
    add_child( families , "钱" , "伟长" ) ;
    add_family( families , "钱" ) ;
    for( const auto &f : families ) {
        cout << f.first << "家的孩子有：" ;
        for( const string &c : f.second )
            cout << c << " " ;
        cout << endl;
    }
    return 0;
}

void add_family( map<string,vector<string>>& families , const string& family ){
    if( families.find(family) == families.end() )
        families[ family ] = vector<string>() ;
}

void add_child( map<string,vector<string>>& families , const string& family , const string& child ){
    families[ family ].push_back( child ) ;
}
