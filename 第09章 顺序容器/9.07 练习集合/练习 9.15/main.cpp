// ������������֤��������ϰ9.15�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> ivec1 = { 0 , 1 , 2 , 3 , 4 , 5 } , ivec2 = { 0 , 1 , 2 , 3 , 4 , 5 } , ivec3 = { 0 , 1 , 2 , 3 } ;
    cout << ( ivec1 == ivec2  ? "ivec1 == ivec2" : "ivec1 != ivec2" ) << endl;
    cout << ( ivec1 == ivec3  ? "ivec1 == ivec3" : "ivec1 != ivec3" ) << endl;
    return 0;
}
