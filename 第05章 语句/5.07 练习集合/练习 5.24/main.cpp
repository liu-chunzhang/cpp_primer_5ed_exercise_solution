// ������������֤��������ϰ5.24�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

int main() {
    cout << "���������뱻�����ͳ�����" << endl;               // �ڱ����У��趨����⵽����Ϊ0ʱ�׳�һ��runtime_error�쳣����Ϊû��catch��䣬
    int ival1 , ival2 ;                                       // ���ϵͳֻ�����쳣������������
    cin >> ival1 >> ival2 ;
    if( ival2 == 0 )
        throw runtime_error( "����������0" ) ;
    cout << "��������Ľ���ǣ�" << static_cast<double>(ival1) / ival2 << endl;
    return 0;
}
