// ������������֤��������ϰ3.43�е��뷨�����ڱ�Ҫ�ĵط�����˵����ʹ�ô�ͳforѭ����ʹ��ָ�룬��auto������Ʊ���������
#include <iostream>
using namespace std;

int main() {
    int ia[3][4] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 } ;
    for( auto i = begin(ia) ; i != end(ia) ; ++i ){
        for( auto j = begin(*i) ; j != end(*i); ++j )
            cout << *j << " " ;
        cout << endl;
    }
    return 0;
}


