// ������������֤��������ϰ10.6�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iterator>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> ivec ;
    int val ;
    while( cin >> val )
        ivec.push_back( val ) ;
    copy( ivec.cbegin() , ivec.cend() , ostream_iterator<int>( cout , " " ) ) ; cout << endl;
    fill_n( ivec.begin() , ivec.size() , 0 ) ;
    copy( ivec.cbegin() , ivec.cend() , ostream_iterator<int>( cout , " " ) ) ; cout << endl;
    return 0;
}
