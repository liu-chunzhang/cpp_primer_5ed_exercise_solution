// ������������֤�̲���6.3.1�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

void exchange2Int( int &v1 , int &v2 ) ;

int main() {
    int i = 3 , j = 4 ;
    cout << "����ǰi��j��ֵ�ֱ�Ϊ" << i  << "��" << j << endl;
    exchange2Int( i , j) ;
    cout << "������i��j��ֵ�ֱ�Ϊ" << i  << "��" << j << endl;
    return 0;
}

void exchange2Int( int &v1 , int &v2 ){
    if( v1 == v2 )
        return ;                                                  // ������Ƚϵ�����ֵ����ȵģ�����Ҫ������ֱ���˳�
    int tem = v2 ;                                                // �������ִ�е����˵������Ҫ���ĳЩ����
    v2 = v1 ;
    v1 = tem ;                                                    // �˴�������ʽ��return���
}
