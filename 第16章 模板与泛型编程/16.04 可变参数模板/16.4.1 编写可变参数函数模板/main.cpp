// 本程序用于验证教材中16.4.1节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

template <typename T> ostream& print( ostream &os , const T &t ) ;
template <typename T,typename... Args> ostream& print( ostream &os , const T &t , const Args&... rest ) ;

int main() {
    print( cout , 35 , "string" , 'c' , -0.35 ) ;
    return 0;
}

template <typename T> ostream& print( ostream &os , const T &t ) {
    cout << "Using function template <typename T> ostream& print( ostream &os , const T &t )" << endl;
    return os << t ;
}

template <typename T,typename... Args> ostream& print( ostream &os , const T &t , const Args&... rest ) {
    cout << "Using function template <typename T,typename... Args> ostream& print( ostream &os , const T &t , const Args&... rest )" << endl;
    os << t << ", " ;
    return print( os , rest... ) ;
}
