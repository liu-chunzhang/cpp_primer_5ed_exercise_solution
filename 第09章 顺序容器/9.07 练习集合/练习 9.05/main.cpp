// ������������֤��������ϰ9.5�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <vector>
using namespace std;

vector<int>::const_iterator find( vector<int>::const_iterator cbeg , vector<int>::const_iterator cter , int target ) ;

int main(){
    vector<int> ivec = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
    vector<int>::const_iterator cbeg = ivec.cbegin() ;
    vector<int>::const_iterator cter = ivec.cend() ;
    cout << find( cbeg , cter , 3 ) - cbeg << endl;
    cout << find( cbeg , cter , 13 ) - cbeg << endl;
    return 0;
}

vector<int>::const_iterator find( vector<int>::const_iterator cbeg , vector<int>::const_iterator cter , int target ) {
    while( cbeg != cter )
        if( *cbeg++ == target )
            return --cbeg ;         // ���ܳɹ��ҵ�����������һ��������
    return cter ;                   // �����ܳɹ��ҵ��򷵻�β�������
}
