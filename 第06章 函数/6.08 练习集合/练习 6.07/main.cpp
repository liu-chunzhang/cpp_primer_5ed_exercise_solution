// ������������֤��������ϰ6.7�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

unsigned return_add_1() ;

int main() {
    for( int i = 0 ; i != 10 ; ++i )
        cout << return_add_1() << " " ;
    return 0;
}

unsigned return_add_1(){
    static unsigned i = -1 ;                     // �ؼ����ڶ������Ϊstatic int���Ͷ�����int���ͣ��������0 0 0 0 0 0 0 0 0 0
    return ++i ;                                  // ������unsigned���ͣ�������int������˵�����ɻ���int���������ˣ���Ӧ�ģ��ƺ�Ӧ����unsigned
}                                                 // �������������ˣ�������ע���޷�����������ת�������ǣ��̲�P33���������Ǹ����޷�������һ����
                                                  // �����ʾ��Χ��ֵʱ������ǳ�ʼֵ���޷������ͱ�ʾ��ֵ����ȡģ�������������++i��i�ָ���0��
