// ������������֤�̲���2.5.2�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

int main() {
    long double i1 = 3.00 ;
    double i2 = -3.00 ;
    auto i3 = i1 + i2 ;
    cout << i3 << " " << sizeof(i3) << endl;      // ���Ϊ16��˵��i3��long double���ͣ�������int

    int i = 0 , *r = &i ;
    auto sz = 0 , pi = 3.14 ;                      // ����sz��pi�����Ͳ�һ�£�

    const int ci = i , &cr = ci;
    auto b = ci ;                                  // b��һ������(ci�Ķ���const���Ա����Ե���)
    auto c = cr ;                                  // cҲ��һ������(cr��ci�ı�����ci������һ������const)
    auto d = &i ;                                  // d������һ������ָ�루�����ĵ�ַ����ָ��������ָ�룩
    auto e = &ci ;                                 // e��һ��ָ������������ָ�루�Գ�������ȡ��ַ��һ�ֵײ�const��

    const auto f = ci ;                           // ci������������int��f��const int

    auto &g = ci;                                  // g��һ�����ͳ������ã��󶨵�ci
    g = 3 ;
    auto &h = 42;                                  // ���󣺲���Ϊ�ǳ������ð�����ֵ
    const auto &j = 42 ;                          // ��ȷ������Ϊ�������ð�����ֵ

    auto k = ci , &l = i ;                         // k��������l����������
    auto &m = ci , *p = &ci ;                      // m�Ƕ����ͳ��������ã�p��ָ�����ͳ�����ָ��
    auto &n = i , *p2 = &ci ;                      // ����i��������int����&ci��������const int
    return 0;
}
