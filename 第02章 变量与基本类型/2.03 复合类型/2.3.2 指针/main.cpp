// ������������֤�̲���2.3.2�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

int main() {
    int ival = 42 ;
    int *p = &ival ;                           // p����ű���ival�ĵ�ַ������˵p��ָ�����ival��ָ�룻
    cout << *p << endl ;                      // �ɷ���*�õ�ָ��p��ָ�Ķ������42
    *p = 0 ;                                   // �ɷ���*�õ�ָ��p��ָ�Ķ��󣬼��ɾ���pΪ����ival��ֵ
    cout << ival << endl ;                    // ���0����Ϊ*p��ֵ����Ϊp��ָ�Ķ�����и�ֵ��
    system( "pause" );
    int *p1 = nullptr ;
    int *p2 = 0 ;
    int *p3 = NULL ;
    cout << *p1 << endl;
    cout << *p2 << endl;
    cout << *p3 << endl;

    //int zero = 0 ;                           // ��int����ֱ�Ӹ���ָ���Ǵ���Ĳ�������ʹint������ֵǡ��Ϊ0Ҳ�ǲ�����ģ�
    //p2 = zero;
    return 0;
}
