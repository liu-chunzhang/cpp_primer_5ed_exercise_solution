// ������������֤�̲���2.6.2�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include "Sales_data.h"
using namespace std;

int main() {
    Sales_data data1 , data2 ;
    double price = 0 ;                                                             // ��ĵ��ۣ�������������
    cin >> data1.bookNo >> data1.units_sold >> price ;
    data1.revenue = data1.units_sold * price ;                                      // �ܼ�1=������1*����
    cin >> data2.bookNo >> data2.units_sold >> price ;
    data2.revenue = data2.units_sold * price ;                                      // �ܼ�2=������2*����
    if( data1.bookNo == data2.bookNo ){
        unsigned totalCnt = data1.units_sold + data2.units_sold ;                  // ��������=������1+������2
        double totalRevenue = data1.revenue + data2.revenue ;                      // �ܼ�=�ܼ�1+�ܼ�2
        cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " " ;
        if( totalCnt != 0 )
            cout << totalRevenue/totalCnt << endl;
        else
            cout << "δ�۳���" << endl;
        return 0;                                                                  // ��ʾ�ɹ�
    }else{
        cerr << "������ͬISBN������ݷ��ɼ��㣡" << endl;
        return -1;                                                                 // ��ʾʧ��
    }
}
