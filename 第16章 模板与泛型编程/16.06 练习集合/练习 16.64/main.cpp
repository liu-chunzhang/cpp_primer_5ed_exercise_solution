// 本程序用于验证读者在练习16.64中的想法，并在必要的地方予以说明
#include <algorithm>
#include <cstring>
#include <functional>
#include <iostream>
#include <vector>
using namespace std;
using std::placeholders::_1 ;

template <typename T> unsigned count( const vector<T> &vec , const T value ) ;
template <> unsigned count( const vector<const char*> &vec , const char *const value ) ;

int main() {
    vector<double> dvec = { 1.2 , 2.3 , 2.3 , 4.6 , 3.2 , 2.3 } ;
    cout << count( dvec , 2.3 ) << endl;
    vector<int> ivec = { 1 , 1 , 2 , 3 , 5 , 8 , 13 } ;
    cout << count( ivec , 4 ) << endl;
    vector<string> svec = { "hello" , "welcome" , "to" , "C++" , "world" } ;
    cout << count( svec , string( "hiya" ) ) << endl;
    vector<const char*> svec2 = { "hello" , "welcome" , "to" , "C++" , "world" } ;
    cout << count( svec2 , "hello" ) << endl;
    return 0;
}

template <typename T> unsigned count( const vector<T> &vec , const T value ) {
    return count( vec.cbegin() , vec.cend() , value ) ;
}

template <> unsigned count( const vector<const char*> &vec , const char *const value ) {
    cout << "Using function template <> unsigned count( const vector<const char*> &vec , const char *const value )" << endl;
    return count( vec.cbegin() , vec.cend() , value ) ;
}
