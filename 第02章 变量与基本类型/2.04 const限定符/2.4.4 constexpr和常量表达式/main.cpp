// ������������֤�̲���2.4.4�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

constexpr int *np = nullptr ;
int j = 0 ;
constexpr int i = 42 ;

int anothersize() ;

int main() {
    constexpr int mf = 20 ;
    constexpr int limit = mf + 1 ;
    constexpr int sz = anothersize() ;
    constexpr const int *p = &i ;    // p��һ������ָ�룬ָ�����ͳ���i
    constexpr int *p1 = &j;          // p1�ǳ���ָ�룬ָ������j
    cout << limit << endl;
    return 0;
}

int anothersize() {
    return 5 ;
}
