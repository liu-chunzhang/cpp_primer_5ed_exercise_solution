// ������������֤�̲���2.4.2�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;
int main()
{   const double pi = 3.14 ;
  //double *ptr = &pi ;                 // ����ptrֻ��һ����ͨ������ָ��
    const double *cptr = &pi ;         // ��ȷ��cptr��һ������������ָ�룬�ͱ���pi����һ��
  //*cptr = 42 ;                        // ���ܹ���*cptr��ֵ

    double dval = 24 ;                 // dval��һ��˫���ȸ�����������ֵ���Ըı�
    cptr = &dval ;                      // ��ȷ�����ǲ��ܹ�ͨ��cptr�ı�dval��ֵ

    int errNumb = 0;
    int *const curErr = &errNumb ;     // curErr��һֱָ��errNumb
    const double pi = 3.14159 ;
    const double *const pip = &pi ;   // pip��һ��ָ��������ĳ���ָ��
    return 0;
}
