// ������������֤��������ϰ1.20�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include "Sales_item.h"
using namespace std;

int main() {
    Sales_item item1 ;
    cout << "������һ�����ۼ�¼��" << endl;
    while( cin >> item1 )
        cout << "����Ŀ��ISBN���۳������������۶��ƽ���ۼ۷ֱ�Ϊ" << item1 << "��" << endl;
    return 0;
}
