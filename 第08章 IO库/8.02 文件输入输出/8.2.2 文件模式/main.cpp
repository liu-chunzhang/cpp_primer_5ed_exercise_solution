// ������������֤�̲���8.2.2�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <fstream>
using namespace::std;

int main() {
    ofstream out( "file1.txt" ) ;
    ofstream out2( "file1.txt" , ios::out ) ;                   // �����������ģʽ���ļ����ض��ļ�
    ofstream out3( "file1.txt" , ios::out | ios::trunc ) ;      // �����ؽض��ļ�
    ofstream app( "file2.txt" , ios::app ) ;                    // Ϊ�˱����ļ����ݣ�������ʽָ��appģʽ
    ofstream app2( "file2.txt" , ios::out | ios::app ) ;        // ����Ϊ���ģʽ

    ofstream out4 ;                                             // δָ�����ļ�ģʽ
    out4.open( "scratchpad" ) ;                                  // ģʽ��������Ϊ�����ض�
    out4.close() ;                                               // �ر�out���Ա����ǽ������������ļ�
    out4.open( "precious" , ofstream::app ) ;                   // ģʽΪ�����׷��
    out4.close() ;
    return 0;
}
