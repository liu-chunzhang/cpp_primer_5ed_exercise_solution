// ������������֤��������ϰ3.44�е��뷨�����ڱ�Ҫ�ĵط�����˵����ʹ�ô�ͳforѭ����ʹ��ָ�룬��ʹ�����ͱ���������ѭ������������
#include <iostream>
using namespace std;
using intarr4 = int[4];

int main() {
    int ia[3][4] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 } ;
    for( intarr4 *i = begin(ia) ; i != end(ia) ; ++i ){
        for( int *j = begin(*i) ; j != end(*i); ++j )
            cout << *j << " " ;
        cout << endl;
    }
    return 0;
}
