// 本程序用于验证读者在练习11.14中的想法，并在必要的地方予以说明
#include <iostream>
#include <map>
#include <vector>
using namespace std;        // 其实这个问题，写基于对象的程序明显思路更为清晰

void add_family( map<string,vector<pair<string,string>>> &families , const string &family ) ;
void add_child( map<string,vector<pair<string,string>>> &families , const string &family , const pair<string,string> &child  ) ;

int main() {
    map<string,vector<pair<string,string>>> families ;
    add_family( families , "赵" ) ;
    add_child( families , "赵" , pair<string,string>( "广" , "1998.12.25" ) ) ;
    add_child( families , "赵" , pair<string,string>( "统" , "1997.12.25" ) ) ;
    add_child( families , "钱" , pair<string,string>( "五方" , "1996.12.25" ) ) ;
    add_family( families , "钱" ) ;
    for( const auto &f : families ) {
        cout << f.first << "家的孩子有：" ;
        for( const auto &c : f.second )
            cout << f.first+c.first << "(生日：" << c.second << ") " ;
        cout << endl;
    }
    return 0;
}

void add_family( map<string,vector<pair<string,string>>> &families , const string &family ){
    if( families.find( family ) == families.end() )
        families[ family ] = vector<pair<string,string>>() ;
}

void add_child( map<string,vector<pair<string,string>>> &families , const string &family , const pair<string,string> &child  ){
    families[ family ].push_back( { child.first , child.second } ) ;
}
