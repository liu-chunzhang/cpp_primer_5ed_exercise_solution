// ������������֤��������ϰ1.22�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include "Sales_item.h"
using namespace std;

int main() {
    Sales_item total , trans ;
    cout << "�����뼸��ISBN����ͬ�ļ�¼��" << endl;
    if( cin >> total ){
        while( cin >> trans )
        if( compareIsbn( total , trans ) )                                                 // ISBN��ͬ
            total = total + trans;
        else                                                                              // ISBN��ͬ
            cout << "ISBN��ͬ��" << endl , exit(1) ;
    cout << "������Ϣ��ISBN���۳����������۶��ƽ���ۼ۷ֱ�Ϊ " << total << endl;
    }
    else {
        cout << "û�����ݡ�" << endl;
        return -1 ;
    }
    return 0;
}
