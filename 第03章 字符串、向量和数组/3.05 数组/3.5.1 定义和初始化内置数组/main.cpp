// ������������֤�̲���3.5.1�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

constexpr size_t get_size() ;

int main() {
    /*
    unsigned cnt = 42 ;                // ���ǳ������ʽ
    constexpr unsigned sz = 42 ;       // �ǳ������ʽ
    int arr[10];                       // ����10������������
    int *parr[sz];                     // ����42������ָ�������
    string bad[cnt];                   // ��Ȼ���ᱨ���뾯�棬����cnt���ǳ������ʽ��
    string strs[get_size()];
    */

  //int a[2]={0,1,2};                  // ���󣺳�ʼֵ���࣡
  //const char a4[6] = "Daniel" ;      // ����û�пռ�ɴ�ſ��ַ���

    /*
    int a[] = {0 , 1 , 2} ;
    int a2[] = a ;                     // ���󣺲�������һ�������ʼ����һ�����飡
    a = a2 ;                           // ���󣺲��ܰ�һ������ֱ�Ӹ�ֵ����һ�����飡
    */


    /*
    int ptrs[10] ;                     // �����Ϊint *ptrs[10]�����潫����������Ϊ����ָ���Ǿ���10������������
    int *p[10] ;                       // p��һ�������10������ָ�������
    int &refs[10]     ;                // ���ò��Ƕ������Բ��������õ�����
    int (*Parray)[10] = &ptrs ;        // Parrayָ����һ������10������������
    int (&arrRef)[10] = ptrs ;         // arrRef������һ������10������������
    int *(&arry)[10] = ptrs;           // arry�Ǻ���10������ָ������������
    */

    return 0;
}

constexpr size_t get_size() {
    return 10 ;
}
