// ������������֤��������ϰ3.45�е��뷨�����ڱ�Ҫ�ĵط�����˵����ʹ�÷�Χforѭ������������̣���auto������Ʊ���������
#include <iostream>
using namespace std;

int main() {
    int ia[3][4] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 } ;
    for( auto &i : ia ){
        for( auto j : i )
            cout << j << " " ;
        cout << endl;
    }
    return 0;
}
