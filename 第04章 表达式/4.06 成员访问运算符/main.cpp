// ������������֤�̲���4.6�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

int main() {
    string s1 = "a string", *p = &s1 ;
    size_t n = s1.size() ;               // ����string����s1��size��Ա��ͬʱauto��size_t������
    n = (*p).size() ;                    // ����p��ָ�����size��Ա
    n = p->size() ;                      // �ȼ���(*p).size()
    cout << n << endl;
    auto m = p.size() ;                   // ����p��һ��ָ�룬û����Ϊsize�ĳ�Ա
    return 0;
}
