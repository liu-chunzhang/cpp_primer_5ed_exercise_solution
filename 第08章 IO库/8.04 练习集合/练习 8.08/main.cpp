// ������������֤��������ϰ8.8�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <fstream>
#include "Sales_data.h"

int main( int argc , char **argv ) {               // ����Ĵ���������Ǵ���ϰ8.6�����ģ�ֻ��һС�����¼ӵ�
    if( argc != 3 ) {
        cerr << "������ļ�����" << endl;
        return -1 ;
    }

    ifstream in( argv[1] ) ;
    if( !in ){
        cerr << "�޷��������ļ���" << endl;
        return -1 ;
    }

    ofstream out( argv[2] , ios::app ) ;          // �¼Ӳ���
    if( !out ){
        cerr << "�޷�������ļ���" << endl;
        return -1 ;
    }

    Sales_data total ;
    if( in >> total ){
        Sales_data trans ;
        while( in >> trans ){
            if( total.isbn() == trans.isbn() )
                total += trans ;
            else {
                out << total << endl;
                total = trans ;
            }
        }
    }
    else
        cerr << "û������?!" << endl;
    return 0;
}
