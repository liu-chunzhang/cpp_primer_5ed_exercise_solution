// ������������֤��������ϰ2.35�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

int main() {
    const int i = 42;                          // i��һ�����ͳ���
    auto j = i ;                               // j��һ�����ͱ���
    const auto &k = i ;                       // k��һ���������ã����������ͳ���i�󶨣��Ӷ���һ�����ͳ���
    auto *p = &i ;                             // p��һ��ָ�����ͳ�����ָ��
    const auto j2 = i , &k2 = i ;             // j2��һ�����ͳ�����k2��һ���������ã����������ͳ���i�󶨣��Ӷ���һ�����ͳ���

    cout << typeid( i ).name() << endl;       // typeid�������������ʽ���ʣ���Ķ�����ʲô���ͣ�
    cout << typeid( j ).name() << endl;       // �����ȼ�ס�����������ʹ���Ǳ�����ģ���û�й涨�̶���ʽ��
    cout << typeid( k ).name() << endl;       // һЩ����ķ���ֵ���Բο������ַ��
    cout << typeid( p ).name() << endl;       // https://blog.csdn.net/chenyiming_1990/article/details/8979260
    cout << typeid( j2 ).name() << endl;      // ���嵽������������ֵi��ʾ���ͣ�P����ָ������
    cout << typeid( k2 ).name() << endl;
    return 0;
}
