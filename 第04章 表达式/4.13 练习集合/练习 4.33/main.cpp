// ������������֤��������ϰ4.33�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;  // C++�涨��������������ȼ����ڶ��������������someValue ? ++x , ++y ; --x , --yʵ���ϵȼ���(someValue? ++x, ++y ; --x), --y

int main() {
    int x = 10 , y = 20 ;
    bool someValue = true ;                               // ������ֵ�����ǣ������ж�someValue�Ƿ�Ϊ�棬���Ϊ�棬����ִ��++x��++y�����ִ
    someValue ? ++x , ++y : --x , --y ;                    // ��--y�����Ϊ�٣�ִ��--x��--y��
    cout << x << " " << y << endl;

    x = 10 , y = 20 ;
    someValue = false ;
    someValue ? ++x , ++y : --x , --y ;
    cout << x << " " << y << endl;
    return 0;
}
