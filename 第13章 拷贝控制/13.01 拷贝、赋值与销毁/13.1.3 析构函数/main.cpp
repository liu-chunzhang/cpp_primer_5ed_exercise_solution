// ������������֤�̲���13.1.3�����ݵĿɿ��ԣ����ṩ������֪
#include "Sales_data.h"
#include <vector>
#include <memory>

int main() {
    {                                                                // ��������p��p2ָ��̬����Ķ���
        Sales_data *p = new Sales_data ;                             // p��һ������ָ��
        shared_ptr<Sales_data> p2 = make_shared<Sales_data>() ;    // p2��һ��shared_ptr
        Sales_data item( *p ) ;                                      // �������캯����*p������item��
        vector<Sales_data> vec ;                                    // �ֲ�����
        vec.push_back( *p2 ) ;                                      // ����p2ָ��Ķ���
        delete p ;                                                  // ��pָ��Ķ���ִ����������
    }                                                                // �˳��ֲ������򣺶�item��p2��vecִ���������������У�����p2��ݼ������ü�
    return 0;                                                       // ����������ü�����Ϊ0���佫���ͷţ�����vec��������Ԫ��
}
