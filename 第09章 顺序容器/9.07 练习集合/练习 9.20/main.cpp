// ������������֤��������ϰ9.20�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <list>
#include <deque>
using namespace std;

int main() {
    list<int> ilist = { 0 , 1 , 2 , 3 , 5 , 8 , 13 , 21 , 34 , 55 } ;
    deque<int> ideq1 , ideq2 ;
    for( const int i : ilist )
        if( i & 1 )
            ideq1.push_back( i ) ;
        else
            ideq2.push_back( i ) ;

    for( const int i : ideq1 )
        cout << i << " " ;
    cout << endl;
    for( const int i : ideq2 )
        cout << i << " " ;
    return 0;
}
