//������������֤��������ϰ2.24�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

int main() {
    int i = 42;
    void *p = &i;                      // void*��һ�����������ָ�룬�����ڴ���������ĵ�ַ
    long *lp = &i;                   // lp��һ��long int��ָ�룬��int�ͱ���i�����Ͳ�ƥ��
    return 0;
}
