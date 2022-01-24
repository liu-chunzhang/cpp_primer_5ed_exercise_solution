// 本程序用于验证读者在练习9.14中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
    list<char*> slst = { "hello" , "world" , "!" } ;
    vector<string> svec ;
    svec.assign( slst.cbegin() , slst.cend() ) ;
    for( const string& s : svec )
        cout << s << " " ;
    cout << endl;
    return 0;
}

// 由于list<char*>与vector<string>是不同类型的容器，因此无法采用赋值运算符=来进行元素赋值。但是char*可以转换为string，因此可以采用范围赋值方式
// 实现本题要求
