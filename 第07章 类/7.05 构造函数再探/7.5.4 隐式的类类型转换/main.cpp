// ������������֤�̲���7.2.1�����ݵĿɿ��ԣ����ṩ������֪
#include "Sales_data.h"

int main() {
    string null_book1 = "9-999-99999-9" ;
    Sales_data item1( "9-999-99999-9" ) ;
    item1 += null_book1 ;
    item1 += "9-999-99999-9" ;                   // ������Ҫ�û����������ת��
    item1 += string( "9-999-99999-9" ) ;         // ��ȷ����ʽת��Ϊstring����ʽת��ΪSales_data
    item1 += Sales_data( "9-999-99999-9" ) ;     // ��ȷ����ʽת��Ϊstring����ʽת��ΪSales_data

    Sales_data item2 ;
    item2 += cin ;                               // istream���캯����explicit��

    Sales_data item3 ;
    string null_book2( "Hello wordl!" ) ;
    Sales_data item4( null_book2 ) ;                  // ������ʼ���ᷢ����ʽת����ֱ�ӳ�ʼ������
    return 0;
}
