// ������������֤�̲���15.7.1�����ݵĿɿ��ԣ����ṩ������֪
#include "Bulk_quote.h"
#define NDE_BUG

int main() {
    Quote q ;                             // ����һ��Quote�����
    Quote *itemP = new Quote( q ) ;       // Ϊ֮����һ��ָ������ָ�룬��ʱ��̬���ͺͶ�̬����һ��
    delete itemP ;                       // ����Quote����������
    itemP = nullptr ;

    #ifdef NDE_BUG                        // Ϊ��ʹ�õ��Թۿ�Ч�����㣬����NDEBUGԤ���������P216��
    itemP = new Bulk_quote ;              // ��ʱ��̬���ͺͶ�̬���Ͳ�һ��
    delete itemP ;                       // ����Bulk_quote����������
    itemP = nullptr ;
    #endif // NDE_BUG0
    return 0;
}
