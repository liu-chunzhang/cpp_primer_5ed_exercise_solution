// 本程序用于验证教材中10.3.3节内容的可靠性，并提供感性认知
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void fcn1() ;
void fcn2() ;
void elimDups( vector<string> &words ) ;
void biggies( vector<string> &words , vector<string>::size_type sz , ostream &os = cout , char c = ' ' ) ;
string make_plural( size_t cnt , const string &word , const string &ending ) ;
void fcn3() ;
void fcn4() ;

int main() {
    vector<string> words = { "the" , "quick" , "red" , "fox" , "jumps" ,  "over" , "the" , "slow"  , "red" , "turtle"  } ;
    biggies( words , 4 , cout , '|' ) ;
    cout << endl;

    fcn3() ;
    cout << endl;
    fcn4() ;
    cout << endl;

    vector<int> ivec = { 0 , -1 , 2 , -3 , 4 , -5 , 6 , -7 , 8 , -9 } ;
    transform( ivec.begin() , ivec.end() , ivec.begin() , []( int i ) { return i < 0 ? -i : i ; } ) ;
    for( const int i : ivec )
        cout << i << " " ;
    cout << endl;

    transform( ivec.begin() , ivec.end() , ivec.begin() , []( int i ) -> int { if( i < 0 ) return -i ; else return i ; } ) ;
    for( const int i : ivec )
        cout << i << " " ;
    cout << endl;

    return 0;
}

void fcn1(){
    size_t v1 = 42 ;
    auto f = [ v1 ]() -> size_t { return v1 ; } ;
    v1 = 0 ;
    size_t j = f() ;
    ++j ;
}

void fcn2(){
    size_t v1 = 42 ;
    auto f = [ &v1 ]() -> size_t { return v1 ; } ;
    v1 = 0 ;
    size_t j = f() ;
    ++j ;                                                                                             // 这句话为消除无用变量警告而写，无意义
}

void elimDups( vector<string> &words ) {
    sort( words.begin() , words.end() ) ;
    vector<string>::iterator iter = unique( words.begin() , words.end() ) ;
    words.erase( iter , words.end() ) ;
}

void biggies( vector<string> &words , vector<string>::size_type sz , ostream &os , char c ){
    elimDups( words ) ;
    stable_sort( words.begin() , words.end() , [] ( const string &a , const string &b ) { return a.size() < b.size() ; } ) ;
    vector<string>::iterator wc = find_if( words.begin() , words.end() , [ = ]( const string& a ){ return a.size() >= sz ; } ) ;
    size_t count_num = words.end() - wc ;
    cout << count_num << " " << make_plural( count_num , "word" , "s" ) << " of length " << sz << " or longer" << endl;                                                                                // 词后面接一个空格
    for_each( wc , words.end() , [ &os , c ]( const string &s ){ os << s << c ; } ) ;
}

string make_plural( size_t ctr , const string &word, const string &ending ) {
    return ( ctr == 1 ) ? word : word + ending ;
}

void fcn3(){
    size_t v1 = 42 ;                                                                                  // 局部变量
    auto f = [ v1 ]() mutable -> size_t { return ++v1 ; } ;                                         // f可以改变其所捕获的变量的值
    v1 = 0 ;
    auto j = f() ;                                                                                    // j = 43
    cout << j ;
}

void fcn4(){
    size_t v1 = 42 ;                                                                                  // 局部变量
    auto f2 = [ &v1 ]() -> size_t { return ++v1 ; } ;                                                // v1是一个非const变量的引用
    v1 = 0 ;                                                                                           // 可以通过f2中的引用改变它
    auto j = f2() ;                                                                                   // j = 43
    cout << j ;
}
