// ������������֤��������ϰ14.51�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "LongDouble.h"

void calc( int i ) ;
void calc( LongDouble ld ) ;

int main() {
    double dval = 3 ;
    calc( dval ) ;
    return 0;
}

void calc( int i ) {
    cout << "Using function void calc( int i )" << endl;
}

void clac( LongDouble ld ) {
    cout << "Using function void calc( LongDouble ld )" << endl;
}

// ��������ȵ��ú���void calc( int i )�����ݽ̳�P219�����ƥ�����doubleת��Ϊint����������ת������4��������ת����LongDouble����ת��Ϊ�û�
// �Զ������ͣ���5������ʵ�����ǵ�����ת���Ĺ��캯�������ǰ�����ȡ�
