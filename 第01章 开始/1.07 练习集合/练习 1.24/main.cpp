// ������������֤��������ϰ1.24�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <fstream>                                              // ������ļ�������������еı�׼����
#include "Sales_item.h"
using namespace std;

int main() {
    cout << "���������������ۼ�¼��" << endl;
    Sales_item trans1 , trans2 ;
    int count_num = 1 ;
    ifstream in( "data.txt" ) ;
    if( in >> trans1 ){
        while( in >> trans2 ){
            if( trans1.isbn() == trans2.isbn() )
                ++count_num ;
            else{
                cout << trans1.isbn() << "����" << count_num << "�����ۼ�¼��" << endl;
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
