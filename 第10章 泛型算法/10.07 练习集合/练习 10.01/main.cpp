// ������������֤��������ϰ10.1�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> ivec ;
    int i , j = 0;
    cout << "����������������ڵ����֣�" ;
    cin >> j ;
    cout << "���������Ĵ������У�" ;
    while( cin >> i )
        ivec.push_back( i ) ;
    cout << "����������ڵ�����һ��������" << count( ivec.cbegin() , ivec.cend() , j ) << "�Ρ�" << endl;
    return 0;
}
