// ������������֤��������ϰ10.2�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main() {
    list<string> slst ;
    string i , j ;
    cout << "����������������ڵ��Ӵ���" ;
    cin >> j ;
    cout << "���������Ĵ������У�" ;
    while( cin >> i )
        slst.push_back( i ) ;
    cout << "����������ڵ�����һ��������" << count( slst.cbegin() , slst.cend() , j ) << "�Ρ�" << endl;
    return 0;
}
