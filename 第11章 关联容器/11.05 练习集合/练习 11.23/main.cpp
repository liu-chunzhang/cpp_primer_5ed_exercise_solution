// 本程序用于验证读者在练习11.23中的想法，并在必要的地方予以说明
#include <iostream>
#include <map>
using namespace std;

void add_child( multimap<string,string> &families , const string &family , const string &child ) ;

int main() {
    multimap<string,string> families ;
    add_child( families , "赵" , "广" ) ;
    add_child( families , "赵" , "统" ) ;
    add_child( families , "钱" , "五方" ) ;
    for( const pair<string,string> &f : families )
        cout << f.first << "家的孩子有：" << f.second << endl;
    return 0;
}

void add_child( multimap<string,string> &families , const string &family , const string &child ){
    families.insert( { family , child } ) ;
}

// 这里不需要再使用<vector>了，原因在于使用multimap结构使得程序可以完成的意义发生了根本性变化：比如不再需要增加家族的函数add_family，因为不会有关键
// 字的覆盖现象（可以对比练习11.7），此外，对于同一姓的孩子，他们不再必然归属同一个家族了。
