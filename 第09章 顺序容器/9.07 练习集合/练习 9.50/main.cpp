// 本程序用于验证读者在练习9.50中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
using namespace std;

int sum( vector<string> &ivec ) ;

int main() {
    vector<string> ivec = { "1" , "-2" , "3" , "-4" , "5" , "-6" } ;
    cout << sum( ivec ) << endl;
    return 0;
}

int sum( vector<string> &ivec ){
    int sum = 0 ;
    for( const string &str : ivec )
        sum += stoi( str ) ;
    return sum ;
}
