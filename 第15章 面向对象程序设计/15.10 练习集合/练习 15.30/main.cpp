// ������������֤��������ϰ15.30�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "Bulk_quote.h"
#include "Basket.h"                    // ��ԭ����������ָ��ȡ��ʹ�ö�̬��ָͨ��ģ�����������
#include <fstream>

int main() {
    ifstream in( "data.txt" ) ;
    Basket bsk ;
    Bulk_quote bulk_quote ;
    while( in >> bulk_quote )
        bsk.add_item( bulk_quote ) ;
    cout << bsk.read( 1 ) << endl;
    cout << bsk.read( 4 ) << endl;
    return 0;
}
