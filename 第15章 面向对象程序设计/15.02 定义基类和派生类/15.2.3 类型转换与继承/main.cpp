// ������������֤�̲���15.2.3�����ݵĿɿ��ԣ����ṩ������֪
#include "Bulk_quote.h"

int main() {
    Quote base ;
    Bulk_quote *bulkP = &base ;   // ���󣺲��ܽ�����ת����������
    Bulk_quote &bulkRer = base ;  // ���󣺲��ܽ�����ת����������

    Bulk_quote bulk ;
    Quote *itemP = &bulk ;        // ��ȷ����̬������Bulk_quote
    Bulk_quote *bulkP = itemP ;   // ���󣺲��ܽ�����ת��Ϊ������

    Bulk_quote bulk2 ;            // ���������
    Quote item( bulk2 ) ;         // ʹ��Quote::Quote( const Quote& )���캯��
    item = bulk2 ;                // ����Quote::operator=( const Quote& )
    return 0;
}
