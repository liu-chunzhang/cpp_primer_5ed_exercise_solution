// ������������֤��������ϰ10.36�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <fstream>
#include <list>
#include <iterator>
#include <algorithm>
using namespace std;

int main() {
    ifstream in( "data.txt" ) ;
    istream_iterator<int> iiter( in ) , eof ;
    list<int> ilst( iiter , eof ) ;
    list<int>::reverse_iterator citer = find( ilst.rbegin() , ilst.rend() , 0 ) ;
    unsigned j = 0 ;
    for( unsigned i = 0 ; citer.base() != ilst.end() ; ++i , --citer )   // reverse_iterator�ĳ�Աbase����һ���빹���˷����������ͬ���͵ĵ������Ŀ���
        j = i ;
    cout << "list�����һ��0�����" << ilst.size() - 1 - j << "λ�ϡ�" << endl;
    return 0;
}
