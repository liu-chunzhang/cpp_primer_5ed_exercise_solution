// ������������֤��������ϰ9.50�е��뷨�����ڱ�Ҫ�ĵط�����˵��
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
