// ������������֤��������ϰ8.6�е��뷨�����ڱ�Ҫ�ĵط�����˵��������ʹ�õĽ̳̰汾��Sales_data�����Զ���汾��Ŀ����ʹ����������
#include <fstream>
#include "Sales_data.h"

int main( int argc , char **argv ) {
    if( argc != 2 ){
        cerr << "������ļ�����" << endl;
        return -1 ;
    }
    ifstream in( argv[1] ) ;
    if( !in ){
        cerr << "�޷��������ļ���" << endl;
        return -2 ;
    }
    Sales_data total ;
    if( in >> total ){
        Sales_data trans ;
        while( in >> trans ){
            if( total.isbn() == trans.isbn() )
                total += trans ;
            else {
                cout << total << endl;
                total = trans ;
            }
        }
    }
    else {
        cerr << "No data?!" << endl;
    }
    return 0;
}
