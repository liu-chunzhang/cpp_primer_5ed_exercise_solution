// ������������֤��������ϰ3.44�е��뷨�����ڱ�Ҫ�ĵط�����˵����ʹ�÷�Χforѭ������������̣���Ӧ�����ͱ�������ѭ�����Ʊ���������
#include <iostream>
using namespace std;
using intarr4 = int[4];                              // ʹ��intarr4����ά����4�������������ͣ���������ͬ

int main() {
    int ia[3][4] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 } ;
    for( intarr4 &i : ia ){
        for( int j : i )
            cout << j << " " ;
        cout << endl;
    }
    return 0;
}
