// ������������֤�̲���1.6�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include "Sales_item.h"
using namespace std;

int main() {
    Sales_item total ;                             // ������һ�����׼�¼�ı���
    if( cin >> total ){
        Sales_item trans ;                         // ����͵ı���
        while( cin >> trans )                     // ���벢����ʣ�ཻ�׼�¼
            if( compareIsbn( trans , total ) )     // ����������ڴ�����ͬ����
                total += trans;                    // ���������ܶ�
            else{
                cout << total << endl;            // ��ӡǰһ����Ľ��
                total = trans ;                    // ���ڱ�ʾ��һ��������۶�
            }
        cout << total << endl;                    // ��ӡ���һ����Ľ��
    }
    else{
         cout << "δ��⵽����!" << endl;         // û�����룡
         return -1 ;                              // ��ʾʧ��
    }
    return 0 ;
}
