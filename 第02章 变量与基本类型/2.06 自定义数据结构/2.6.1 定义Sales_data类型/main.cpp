// ������������֤�̲���2.6.1�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

struct Sales_data {
  string bookNo ;
  unsigned units_sold = 0 ;
  double revunue = 0.0 ;
};

int main() {
    Sales_data accum , trans ;
    Sales_data *salesptr = &accum;
    cout << accum.units_sold << " " << trans.units_sold << endl;   // ���ͱ���Ĭ�ϳ�ʼ��Ϊ0
    cout << accum.revunue << " " << trans.revunue << endl;         // �����ͱ���Ĭ�ϳ�ʼ��Ϊ0
    cout << accum.bookNo << "1 1" << trans.bookNo << "1" << endl;  // ��ʼ�����˿մ�
  //cout << accum << endl;                                          // Ŀǰ�Ľ׶�ֻ����ostream������������Զ������ͣ�֮���ѧϰ���ֱ������Զ���
                                                                    // �಻�Ϸ�������
    return 0;
}
