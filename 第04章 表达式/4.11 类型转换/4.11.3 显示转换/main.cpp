// ������������֤��������ϰ4.11.3�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

int main() {

    int i = 3 ,j = 7 ;
    double slope = static_cast<double>( j ) / i ;
    cout << slope << endl;
    double d = slope ;
    void *p1 = &d ;                                    // �ɲ鿴�̲�P50��void*��ָ�Ķ����ܹ�ֱ�Ӳ�����û�취ֱ�ӷ����ڴ�ռ��еĶ���
    double *dp = static_cast<double*>( p1 ) ;
    cout << *dp ;

    char k = 'a' ;                                    // �̲��Ͻ�ͨ��pдֵ��δ�������Ϊ�����Ǽ�ʹ�������k��const char���ͣ����Ҳ����
    const char *pc = &k ;
    char *p = const_cast<char*>( pc ) ;
    *p = 'y' ;
    cout << *p ;

    const char *cp ;
    char *q = static_cast<char*>( cp ) ;              // ����static_cast����ת����const����
    static_cast<string>( cp ) ;                       // ��ȷ���ַ�������ֵת����string����
    const_cast<string>( cp ) ;                        // ����const_castֻ�ı䳣������

    int i2 = 3 , *ip = &i2 ;
    char *pc = reinterpret_cast<char*>( ip ) ;
    string str( pc ) ;
    cout << *pc ;                                     // ���н��Ϊ�գ��Ȿ����Ǹ��쳣��Ϊ��
    return 0;
}
