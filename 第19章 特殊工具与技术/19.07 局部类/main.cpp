// ������������֤�̲���19.7�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

int a , val ;
void foo( int val ) {
    static int si ;
    enum Loc { a = 1024 , b } ;
    struct Bar {
        Loc locVal ;                // ��ȷ��ʹ��һ���ֲ�������
        int barVal ;

        void fooBar( Loc = a ){     // ��ȷ��Ĭ��ʵ��ΪLoc::a
            barVal = val ;          // ����val��foo�ľֲ�������
            barVal = ::val ;        // ��ȷ��ʹ��һ��ȫ�ֶ���
            barVal = si ;           // ��ȷ��ʹ��һ����̬�ֲ�����
            locVal = b ;            // ��ȷ��ʹ��һ��ö�ٳ�Ա
        }
    };
    // ...
}

int main() {
    foo( 3 ) ;
    return 0;
}
