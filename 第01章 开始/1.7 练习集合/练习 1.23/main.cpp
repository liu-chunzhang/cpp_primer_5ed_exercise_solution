// ������������֤��������ϰ1.23�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include "Sales_item.h"
using namespace std;

int main() {
    cout << "���������������ۼ�¼��" << endl;
    Sales_item trans1 , trans2 ;
    int count_num = 1 ;                                                                  // count_num��¼ĳ��ISBN������ۼ�¼���ֵ��ܴ���
    if( cin >> trans1 ){
        while( cin >> trans2 ){
            if( trans1.isbn() == trans2.isbn() )                                         // ISBN��ͬ
                ++count_num ;
            else{                                                                        // ISBN��ͬ
                cout << trans1.isbn() << "����" << count_num << "�����ۼ�¼��" << endl; // ������ֵ��ܴ���
                trans1 = trans2 , count_num = 1 ;
            }
        }
        cout << trans1.isbn() << "����" << count_num << "�����ۼ�¼��" << endl;
        return 0 ;
    }
    else{
        cout << "û�����ۼ�¼!" << endl;
        return -1;
    }
}
