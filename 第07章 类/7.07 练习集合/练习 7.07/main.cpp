// ������������֤��������ϰ7.7�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "Sales_data.h"                                        // ����ͷ�ļ��Ѿ�������<iostream>�⣬����ɾȥ�����������Ǿ����û��Ӱ��

int main() {
    Sales_data total ;
    if( cin >> total ){
        Sales_data trans ;
        while( cin >> trans ) {
            if( total.isbn() == trans.isbn() )
                total += trans ;
            else{
                cout << total ;
                total = trans ;
            }
        }
        cout << total ;
    }
    else{
        std::cerr << "��û����������!" << std::endl;
        return -1 ;
    }
    return 0;
}
