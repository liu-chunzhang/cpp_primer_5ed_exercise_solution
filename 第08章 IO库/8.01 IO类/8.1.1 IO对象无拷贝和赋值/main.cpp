// ������������֤�̲���8.1.1�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream out1 , out2 ;
    out1 = out2 ;                           // ���󣺲��ܶ�������ֵ
    ofstream print( ofstream ) ;          // ���󣺲��ܳ�ʼ��ofstream����
    out2 = print( out2 ) ;                  // ���󣺲��ܿ���������
    return 0;
}
