// ������������֤��������ϰ18.5�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

int main() {
    try{
    /* ... ������������ ... */
    }catch( const exception &e ){
        cerr << e.what() << endl;
        abort() ;                       // �˴�����Ҫ���<cstdlib>ͷ�ļ�
    }
    return 0 ;
}

// ���ӡ������Ϣ�Ļ�������ʹ��exception����в���Ƚ��׵�
