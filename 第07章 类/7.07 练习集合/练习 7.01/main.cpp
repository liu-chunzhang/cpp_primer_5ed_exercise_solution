// ������������֤��������ϰ7.1�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include "Sales_data.h"
using namespace std;

int main() {
    Sales_data total ;
    if( cin >> total  ){                             // ���˸���Sales_data�����ڱ����е�����������д�˳���ʹ���¶���Ķ��������͵�>>�����
        Sales_data trans ;                           // �������룬<<���������
        while( cin >> trans ){
            if( total.isbn() == trans.isbn() )
                total += trans ;
            else{
                cout << total << endl;
                total = trans ;
            }
        }
        cout << total << endl;
    }
    else{
        cerr << "��û����������!" << endl;
        return -1 ;
    }
    return 0;
}
