// ������������֤��������ϰ7.27�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "Screen.h"

int main() {
    Screen myscreen( 5 , 5 , 'X' ) ;
    myscreen.move( 4 , 0 ).set( '#' ).display( cout ) ;        // ������������Ĵ𰸣���ȫ�������⣬Ҳ�����ڲο��𰸵�Ԥ��
    cout << endl;
    myscreen.display( cout ) ;
    cout << endl;
    return 0;
}
