// ������������֤��������ϰ15.22�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "Figure.h"

int main() {
    square square1( 0 , 0 , 3 ) ;
    cout << square1.area() << endl;
    circle circle1( 0 , 0 , 2 ) ;
    cout << circle1.parameter() << endl;
    sphere sphere1( 0 , 0 , 0 , 3 ) ;
    cout << sphere1.volume() << endl;
    return 0;
}
