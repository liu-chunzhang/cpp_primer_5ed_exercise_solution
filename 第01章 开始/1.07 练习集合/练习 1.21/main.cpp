// ������������֤��������ϰ1.21�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include "Sales_item.h"
using namespace std;

int main() {
    Sales_item item1 , item2 ;
    cout << "�������������ۼ�¼��" << endl;
    cin >> item1 >> item2 ;
    if( compareIsbn( item1 , item2 ) )
        cout << "������Ϣ��ISBN���۳����������۶��ƽ���ۼ�Ϊ" << item1 + item2 << endl;
    else
        cout << "������������Ϣ��ISBN�벻��ͬ��" << endl;
    return 0;
}
