// 本程序用于验证教材中6.2.6节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

void error_msg( initializer_list<string> i1 ) ;
void error_msg( runtime_error e , initializer_list<string> i1 ) ;

int main() {
    initializer_list<string> i1 ;
    cout << "Hello world!" << endl;
    return 0;
}

void error_msg( initializer_list<string> i1 ) {
    for( initializer_list<string>::iterator beg = i1.begin() ; beg != i1.end() ; ++beg )
        cout << *beg << " " ;
    cout << endl;
}

void error_msg( runtime_error e , initializer_list<string> i1 ) {
    cout << e.what() << ": " ;
    for( const string &elem : i1 )
        cout << elem << " " ;
    cout << endl;
}
