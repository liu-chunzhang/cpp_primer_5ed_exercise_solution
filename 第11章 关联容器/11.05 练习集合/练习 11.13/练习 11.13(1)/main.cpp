// ������������֤��������ϰ11.13�е��뷨�����ڱ�Ҫ�ĵط�����˵����ʹ�ù��캯���İ汾
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    ifstream in( "data.txt" ) ;
    string word ;
    int i ;
    vector<pair<string,int>> pvec ;
    while( in >> word && in >> i )
        pvec.push_back( pair<string,int>( word , i ) ) ;
    for( const pair<string,int> &d : pvec )
        cout << d.first << " " << d.second << endl;
    return 0;
}
