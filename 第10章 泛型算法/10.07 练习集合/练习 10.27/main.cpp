// ������������֤��������ϰ10.27�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

int main() {
    vector<int> ivec = { 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 , 34 , 21 , 55 , 55 , 89 } ;
    list<int> ilst ;
    sort( ivec.begin() , ivec.end() ) ;
    unique_copy( ivec.cbegin() , ivec.cend() , back_inserter( ilst ) ) ;
    for( const int i : ilst )
        cout << i << " " ;
    cout << endl;
    return 0;
}

// ��Ҫע����ǣ���unique���ƣ�unique_copyҲҪ������Դ�����ж�����ŵġ���ˣ���vectorδ�������ظ�Ԫ���ظ�Ԫ��û���ڴ�ţ�unique_copy�Ͳ��ܹ��ﵽ
// Ԥ��Ч����
