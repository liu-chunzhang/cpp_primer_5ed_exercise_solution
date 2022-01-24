// 本程序用于验证教材中9.3.5节内容的可靠性，并提供感性认知
#include <iostream>
#include <list>
using namespace std;

void print( list<int> &ilst ) ;

int main() {
    list<int> ilst( 10 , 42 ) ;    // 10个int：每个的值都是42
    print( ilst ) ;
    ilst.resize( 15 ) ;            // 将5个值为0的元素添加到ilst末尾
    print( ilst ) ;
    ilst.resize( 25 , -1 ) ;       // 将10个值为-1的元素添加到ilst末尾
    print( ilst ) ;
    ilst.resize( 5 ) ;             // 从ilst末尾删除20个元素
    print( ilst ) ;
    return 0;
}

void print( list<int> &ilst ) {
    for( const int i : ilst )
        cout << i << "\t" ;
    cout << endl;
}
